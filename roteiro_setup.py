#encoding=utf-8

class Token:

	def __init__(self,string,value):

		self.string = string
		self.value = value

class Tokenizer:

	def __init__(self,origin): 

		self.origin = str(origin)
		self.position = 0
		self.actual = Token("int",0)

		
	def selectNext(self):

		numero = ""
		comment = False

		if self.position >= len(self.origin):

			self.actual.string = "EOF"
			self.actual.value = "EOF"

			return self.actual
			

		for i in range(self.position,len(self.origin)):
	
			if self.origin[i] == " ":

				i+=1

			if self.origin[i] == "'":

				comment = True

			if comment == True:


					while self.origin[i] != '\n':

						self.position += 1


						if self.position >= len(self.origin):

							self.actual.string = "EOF"
							self.actual.value = "EOF"

							return self.actual	

					comment = False


			elif str(self.origin[i]).isdigit():

				while self.origin[i].isdigit():

					numero += self.origin[i]

					i += 1

					if i > len(self.origin)-1:

						break


				self.actual.string = "int"
				self.actual.value = int(numero)
				self.position = i


				return self.actual


			elif self.origin[i] == "+":

				self.actual.string = "plus"
				self.actual.value = "signal"
				self.position = i+1

				return self.actual



			elif self.origin[i] == "-":

				self.actual.string = "minus"
				self.actual.value = "signal"
				self.position = i+1


				return self.actual


			elif self.origin[i] == "*":

				self.actual.string = "times"
				self.actual.value = "signal"
				self.position = i+1

				return self.actual

			elif self.origin[i] == "/":

				self.actual.string = "division"
				self.actual.value = "signal"
				self.position = i+1

				return self.actual

			elif self.origin[i] == "(":

				self.actual.string = "("
				self.actual.value = "("
				self.position = i+1

				return self.actual

			elif self.origin[i] == ")":

				self.actual.string = ")"
				self.actual.value = ")"
				self.position = i+1

				return self.actual

			elif self.position >= len(self.origin):

				self.actual.string = "EOF"
				self.actual.value = "EOF"

				return self.actual

			else:

				self.actual.string = "unrecognized"
				self.actual.value = str(self.origin[i])
				self.position = i+1

				return self.actual


		return self.actual


class Parser:

	def factor():

		nexttoken = Parser.tokens.actual

		print("On factor: ")
		print(nexttoken.value)
		print("\n")

		soma = 0

		if nexttoken.string == "int":

			soma += nexttoken.value

			nexttoken = Parser.tokens.selectNext()

			print ("Soma 1: "+str(soma))


		elif nexttoken.string == "(":

			print("Entrou parenteses (")

			nexttoken = Parser.tokens.selectNext()

			print("No parenteses")

			soma = Parser.parserExpression()

			print("Saiu do parenteses")

			if nexttoken.string != ")":

				raise Exception ("Faltou fechar parênteses")

			nexttoken = Parser.tokens.selectNext()

		elif nexttoken.string == "plus":

			nexttoken = Parser.tokens.selectNext()

			soma += Parser.factor()


		elif nexttoken.string == "minus":

			nexttoken = Parser.tokens.selectNext()

			soma -= Parser.factor()

		else:

			raise Exception ("Invalid Sintax")

		return soma
	
	def term():

		nexttoken = Parser.tokens.actual

		print("On term: ")
		print(nexttoken.value)
		print("\n")

		soma = Parser.factor()

		print ("Soma 2: "+str(soma))


		while nexttoken.string in ["times", "division"]:


			if nexttoken.string == "times":

				nexttoken = Parser.tokens.selectNext()

				soma *= Parser.factor()
					

			elif nexttoken.string == "division":

				nexttoken = Parser.tokens.selectNext()

				print("Entrou na divisao com o token "+str(nexttoken.value))


				soma = soma // int(Parser.factor())
						

		return soma



	@staticmethod
	def parserExpression():


		nexttoken = Parser.tokens.actual

		print("On Expression: ")
		print(nexttoken.value)
		print("\n")


		soma = Parser.term()
		
		print ("Soma 3: "+str(soma))

		while nexttoken.string in ["plus", "minus"]:


			if nexttoken.string == "plus":

				nexttoken = Parser.tokens.selectNext()
				

				

				soma += Parser.term()
					

			elif nexttoken.string == "minus":

				nexttoken = Parser.tokens.selectNext()

				

				soma -= Parser.term()
						


		return soma
			

	@staticmethod
	def run(code):

		Parser.tokens = Tokenizer(code)
		Parser.tokens.selectNext()

		res = Parser.parserExpression()

		if Parser.tokens.actual.string == "EOF":

			return res

		else:

			print("\nEOF TOKEN BELLOW: ")
			print(Parser.tokens.actual.string)
			print(Parser.tokens.actual.value)

			raise Exception("Parser Error: EOF")

	

string = str(input("Insira uma conta: "))

soma = Parser.run(string)

print("O resultado da operacao é: "+str(soma))