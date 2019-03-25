#encoding=utf-8


class Node:

	def __init__(self,value,children):

		self.value = value
		self.children = children

	def Evaluate(self):

		pass

class BinOp(Node):

	def __init__(self,value,children):

		self.value = value
		self.children = children

	def Evaluate(self):

			if self.value == "plus":

				return self.children[0].Evaluate() + self.children[1].Evaluate()

			if self.value == "minus":

				return self.children[0].Evaluate() - self.children[1].Evaluate()

			if self.value == "times":

				return self.children[0].Evaluate() * self.children[1].Evaluate()

			if self.value == "division":

				return self.children[0].Evaluate() // self.children[1].Evaluate()
				

class UnOp(Node):

	def __init__(self,value,children):

		self.value = value
		self.children = children

	def Evaluate(self):

		if self.value == "+":

			return  Node.Evaluate(self.children[1])

		if self.value == "-":

			return -(Node.Evaluate(self.children[1]))
	

class IntVal(Node):

	def __init__(self,value,children):

		self.value = value
		self.children = children

	def Evaluate(self):

		return self.value


class NoOp(Node):

	def __init__(self,value,children):

		self.value = value
		self.children = children

	def Evaluate(self):

		pass




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

		soma = 0

		if nexttoken.string == "int":

			print("oi: "+ str(Parser.tokens.actual.value))

			node = IntVal(Parser.tokens.actual.value,[])

			nexttoken = Parser.tokens.selectNext()

			return node


		elif nexttoken.string == "(":

			print("Entrou parenteses (")

			nexttoken = Parser.tokens.selectNext()

			soma = Parser.parserExpression()

			print("Saiu do parenteses")

			if nexttoken.string != ")":

				raise Exception ("Faltou fechar parênteses")

			nexttoken = Parser.tokens.selectNext()

			return soma

		elif nexttoken.string == "plus":

			nexttoken = Parser.tokens.selectNext() 

			node = UnOp("plus",[Parser.factor()])

			return node


		elif nexttoken.string == "minus":

			nexttoken = Parser.tokens.selectNext()

			node = UnOp("minus",[Parser.factor()])

			return node

		else:

			raise Exception ("Invalid Sintax")

	
	def term():

		nexttoken = Parser.tokens.actual

		print("On term: ")
		print(nexttoken.value)
		print("\n")

		node = Parser.factor()

		#print ("Soma 2: "+str(soma))


		while nexttoken.string in ["times", "division"]:


			if nexttoken.string == "times":

				nexttoken = Parser.tokens.selectNext()

				soma = Parser.factor()
				node = BinOp("times",[node,soma])
					

			elif nexttoken.string == "division":

				nexttoken = Parser.tokens.selectNext()

				print("Entrou na divisao com o token "+str(nexttoken.value))


				soma =  Parser.factor()
				node = BinOp("division",[node,soma])
						

		return node



	@staticmethod
	def parserExpression():


		nexttoken = Parser.tokens.actual

		print("On Expression: ")
		print(nexttoken.value)
		print("\n")


		node = Parser.term()
		

		while nexttoken.string in ["plus", "minus"]:


			if nexttoken.string == "plus":

				nexttoken = Parser.tokens.selectNext()
 
				soma = Parser.term()
				node = BinOp("plus",[node,soma])
					

			elif nexttoken.string == "minus":

				nexttoken = Parser.tokens.selectNext()

				soma = Parser.term()
				node = BinOp("minus",[node,soma])
						

		return node
			

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

soma = Parser.run(string).Evaluate()

print("O resultado da operacao é: "+str(soma))