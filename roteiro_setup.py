#encoding=utf-8

class Node:

	def __init__(self,value,children):

		self.value = value
		self.children = children

	def Evaluate(self,ST):

		pass

class Assignment(Node):

	def __init__(self,value,children):

		self.value = value
		self.children = children

	def Evaluate(self,ST):

		ST.set(self.children[0], self.children[1].Evaluate(ST))


class SymbolTable:

	def __init__ (self):

		self.ST = {}

	def get(key):

		if self.key in self.ST:

			return self.ST[self.key]

		else:

			return False

	def set(self,key,value):

		self.ST[key] = value


class Identifier(Node):

	def __init__(self,value,children):

		self.value = value
		self.children = children

	def Evaluate(self,ST):

		pass


class BinOp(Node):

	def __init__(self,value,children):

		self.value = value
		self.children = children

	def Evaluate(self,ST):
		

			if self.value == "plus":

				return self.children[0].Evaluate(ST) + self.children[1].Evaluate(ST)

			if self.value == "minus":

				return self.children[0].Evaluate(ST) - self.children[1].Evaluate(ST)

			if self.value == "times":

				return self.children[0].Evaluate(ST) * self.children[1].Evaluate(ST)

			if self.value == "division":

				return self.children[0].Evaluate(ST) // self.children[1].Evaluate(ST)
				

class UnOp(Node):

	def __init__(self,value,children):

		self.value = value
		self.children = children

	def Evaluate(self,ST):

		if self.value == "plus":

			return  self.children[0].Evaluate(ST)

		if self.value == "minus":

			return - self.children[0].Evaluate(ST)
	

class IntVal(Node):

	def __init__(self,value,children):

		self.value = value
		self.children = children

	def Evaluate(self,ST):

		return self.value


class NoOp(Node):

	def __init__(self,value,children):

		self.value = value
		self.children = children

	def Evaluate(self,ST):

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

			elif str(self.origin[i]).isalpha():

				variable = ""

				while self.origin[i].isalpha():

					variable += str(self.origin[i])

					i += 1

					if i > len(self.origin)-1:

						break

				variable = variable.upper()

				if variable == "PRINT":

					self.actual.string = "print"
					self.actual.value = "print"
					self.position = i

					return self.actual

				elif variable == "BEGIN":

					self.actual.string = "begin"
					self.actual.value = "begin"
					self.position = i

					return self.actual

				elif variable == "END":

					self.actual.string = "end"
					self.actual.value = "end"
					self.position = i

					return self.actual

				self.actual.string = "identifier"
				self.actual.value = str(variable)
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

			elif self.origin[i] == "=":

				self.actual.string = "="
				self.actual.value = "="
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

	def statement():

		nexttoken = Parser.tokens.actual

		if nexttoken.string != "begin":

			raise Exception ("Excpected a Begin on the beggining of the sentence")

		nexttoken = Parser.tokens.selectNext()

		while nexttoken.string != "end":
			
			nexttoken = Parser.tokens.selectNext()

			if nexttoken.string == "identifier":

				identifier = nexttoken.value

				print(identifier)

				nexttoken = Parser.tokens.selectNext()

				if nexttoken.string in ["="]:

					nexttoken = Parser.tokens.selectNext() 

					print ("nois nois" + str(Parser.parserExpression().value))

					node = Assignment("=", [identifier , Parser.parserExpression()]) 

					#nexttoken = Parser.tokens.selectNext()

					return node

				else:

					pass


			elif nexttoken.string == "print":

				pass

			elif nexttoken.string == "begin":

				pass

			else:

				pass

			if nexttoken.string != "EOF":
				print (nexttoken.string)

		if nexttoken.string == "end":

			nexttoken = Parser.tokens.selectNext()

			return node
			

	def factor():

		nexttoken = Parser.tokens.actual

		soma = 0

		if nexttoken.string == "int":

			node = IntVal(Parser.tokens.actual.value,[])

			nexttoken = Parser.tokens.selectNext()

			return node


		elif nexttoken.string == "(":

			nexttoken = Parser.tokens.selectNext()

			soma = Parser.parserExpression()

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

			print("ooioioioioioio "+nexttoken.string)

			raise Exception ("Invalid Sintax")

	
	def term():

		nexttoken = Parser.tokens.actual

		node = Parser.factor()


		while nexttoken.string in ["times", "division"]:


			if nexttoken.string == "times":

				nexttoken = Parser.tokens.selectNext()

				soma = Parser.factor()
				node = BinOp("times",[node,soma])
					

			elif nexttoken.string == "division":

				nexttoken = Parser.tokens.selectNext()

				soma =  Parser.factor()
				node = BinOp("division",[node,soma])
						

		return node



	@staticmethod
	def parserExpression():


		nexttoken = Parser.tokens.actual

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

		res = Parser.statement()

		if Parser.tokens.actual.string == "EOF":

			return res

		else:

			raise Exception("Parser Error: EOF")

	

string = str(input("Insira uma conta: "))

# with open('inputCompiler.txt') as entrada:
# 	inputCompiler = entrada.read()

ST = SymbolTable()

print(ST.ST)

soma = Parser.run(string).Evaluate(ST)

print("O resultado da operacao é: "+str(soma))