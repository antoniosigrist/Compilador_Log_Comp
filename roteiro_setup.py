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

				pass

			elif self.origin[i] == "'":

				comment = True

			elif comment == True:


					if self.origin[i-1] == '/' and self.origin[i] == 'r':

						comment = False

						self.position = i+1

					if self.position >= len(self.origin):

						self.actual.string = "EOF"
						self.actual.value = "EOF"

						return self.actual


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

			else:

				self.actual.string = "unrecognized"
				self.actual.value = str(self.origin[i])
				self.position = i+1

				return self.actual


		return self.actual


class Parser:

	
	def term():

		nexttoken = Parser.tokens.actual
		
		soma = nexttoken.value

		nexttoken = Parser.tokens.selectNext()

		while nexttoken.string in ["times", "division"]:

			if nexttoken.string == "times":

				nexttoken = Parser.tokens.selectNext()

				if nexttoken.string == "int":

					soma *= nexttoken.value
					print("3: "+str(soma))
					
				else:

					raise Exception("Parser Error (1): espera-se um int")

			elif nexttoken.string == "division":

				nexttoken = Parser.tokens.selectNext()

				if nexttoken.string == "int":

					soma = int(soma / nexttoken.value)
					print("4: "+str(soma))

				else:

					raise Exception("Parser Error (2): espera-se um int")

			nexttoken = Parser.tokens.selectNext()


		return soma



	@staticmethod
	def parserExpression():


		nexttoken = Parser.tokens.actual

		if nexttoken.string == "int":

			soma = Parser.term()
			print("0: "+str(soma))

			#nexttoken = Parser.tokens.selectNext()

			print(nexttoken.string)

			while nexttoken.string in ["plus", "minus"]:

				if nexttoken.string == "plus":

					print(soma)

					nexttoken = Parser.tokens.selectNext()

					if nexttoken.string == "int":

						soma += Parser.term()
						print("1: "+str(soma))
						
					else:

						raise Exception("Parser Error (1): espera-se um int")

				elif nexttoken.string == "minus":

					nexttoken = Parser.tokens.selectNext()

					if nexttoken.string == "int":

						soma -= Parser.term()
						print("2: "+str(soma))

					else:

						raise Exception("Parser Error (2): espera-se um int")

				nexttoken = Parser.tokens.selectNext()

		else:

			raise Exception("Parser Error (3): espera-se um int")


		return soma
			

	@staticmethod
	def run(code):

		Parser.tokens = Tokenizer(code)
		Parser.tokens.selectNext()

		res = Parser.parserExpression()

		if Parser.tokens.actual.string == "EOF":

			return res

		else:

			print(Parser.tokens.actual.string)
			print(Parser.tokens.actual.value)

			raise Exception("Parser Error: EOF")

	

string = str(input("Insira uma conta: "))

soma = Parser.run(string)

print("O resultado da operacao é: "+str(soma))