#encoding=utf-8


class Node:

	def __init__(self,value,children):

		self.value = value
		self.children = children

	def Evaluate(self,ST):

		pass


class Assignments(Node):

	def __init__(self,value,children):

		self.value = value
		self.children = children

	def Evaluate(self,ST):

		for child in self.children:

			child.Evaluate(ST)

class PrintOp(Node):

	def __init__(self,value,children):

		self.value = value
		self.children = children

	def Evaluate(self,ST):

		print (self.children[0].Evaluate(ST))



class Assignment(Node):

	def __init__(self,value,children):

		self.value = value
		self.children = children

	def Evaluate(self,ST):

		ST.setter(self.children[0], self.children[1].Evaluate(ST))

class WhileOp(Node):

	def __init__(self,value,children):

		self.value = value
		self.children = children

	def Evaluate(self,ST):

		while self.children[0].Evaluate(ST) == True:

			self.children[1].Evaluate(ST)


class IfOp(Node):

	def __init__(self,value,children):

		self.value = value
		self.children = children

	def Evaluate(self,ST):

		if self.value == "if":

			if self.children[0].Evaluate(ST) == True:

				self.children[1].Evaluate(ST)

			else:

				pass

		elif self.value == "else":

			if self.children[0].Evaluate(ST) == True:

				self.children[1].Evaluate(ST)

			else:

				self.children[2].Evaluate(ST)



class SymbolTable:

	def __init__ (self):

		self.ST = {}

	def getter(self,key):

		if key in self.ST:

			return self.ST[key]

		else:

			return False


	def setter(self,key,value):

		self.ST.update({key: value})



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

			if self.value == "=":

				return self.children[0].Evaluate(ST) == self.children[1].Evaluate(ST)

			if self.value == ">":

				return self.children[0].Evaluate(ST) > self.children[1].Evaluate(ST)

			if self.value == "<":

				return self.children[0].Evaluate(ST) < self.children[1].Evaluate(ST)
				

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



class VarVal(Node):

	def __init__(self,value,children):

		self.value = value
		self.children = children

	def Evaluate(self,ST):

		return ST.getter(self.value.upper())


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

	
			while self.origin[i] == " ":

				i+=1

			if self.origin[i] == "'":

				comment = True

			while comment == True:

					if self.origin[i] == '\n':

						comment = False

					else:

						if i >= len(self.origin):

							self.actual.string = "EOF"
							self.actual.value = "EOF"
							self.position = i

							comment = False

							return self.actual	

						i += 1	

					
					#self.position += 1  ### REVER ISSO AQUI

			

			if str(self.origin[i]).isdigit():

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

				elif variable == "WHILE":

					self.actual.string = "while"
					self.actual.value = "while"
					self.position = i+1

					return self.actual

				elif variable == "WEND":

					self.actual.string = "wend"
					self.actual.value = "wend"
					self.position = i+1

					return self.actual

				elif variable == "IF":

					self.actual.string = "if"
					self.actual.value = "if"
					self.position = i+1

					return self.actual

				elif variable == "ELSE":

					self.actual.string = "else"
					self.actual.value = "else"
					self.position = i+1

					return self.actual

				elif variable == "THEN":

					self.actual.string = "then"
					self.actual.value = "then"
					self.position = i+1

					return self.actual

				else:

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

			elif self.origin[i] == ">":

				self.actual.string = ">"
				self.actual.value = ">"
				self.position = i+1

				return self.actual

			elif self.origin[i] == "<":

				self.actual.string = "<"
				self.actual.value = "<"
				self.position = i+1

				return self.actual


			elif self.origin[i] == "\n":

				self.actual.string = "\n"
				self.actual.value = "\n"
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


	def Statements():

		children = []
		
		nexttoken = Parser.tokens.actual

		if nexttoken.string != "begin":

			raise Exception ("Faltou iniciar com o begin")

		else:

			nexttoken = Parser.tokens.selectNext()

			if nexttoken.string != "\n":

				raise Exception ("Faltou Quebra de Linha")

			else:

				nexttoken = Parser.tokens.selectNext()


				while nexttoken.string != "end" :
					
					res = Parser.Statement()

					if res != None:

						children.append(res)

					node = Assignments(" ",children)

				
				if nexttoken.value != "end":
					
					raise Exception ("Faltou Fechar End")

				else:

					nexttoken = Parser.tokens.selectNext()

					return node 



	def Statement():

		nexttoken = Parser.tokens.actual

		if nexttoken.string == "identifier":

			identifier = Identifier(nexttoken.value,[])

			nexttoken = Parser.tokens.selectNext()

			if nexttoken.string in ["="]:

				nexttoken = Parser.tokens.selectNext() 

				res = Parser.parserExpression()

				node = Assignment("=", [identifier.value , res])

				nexttoken = Parser.tokens.selectNext() 

				return node

			else:

				print(nexttoken.value)

				raise Exception ("Espera-se uma atribuicao")


		elif nexttoken.string == "print":

			nexttoken = Parser.tokens.selectNext() 

			node = PrintOp("print",[Parser.parserExpression()])

			nexttoken = Parser.tokens.selectNext() 

			return node

		elif nexttoken.string == "begin":

			node = Parser.Statements()

			nexttoken = Parser.tokens.selectNext() 

			return node

		elif nexttoken.string == "while":

			nexttoken = Parser.tokens.selectNext() 

			node_rel = Parser.RelExpression()

			print (nexttoken.value)

			nexttoken = Parser.tokens.selectNext() 

			print (nexttoken.value)

			node_true = Parser.Statement()

			print (nexttoken.value)

			#nexttoken = Parser.tokens.selectNext() 

			print (nexttoken.value)

			if nexttoken.string != "wend":

				raise Exception ("Espara-se um wend")

			nexttoken = Parser.tokens.selectNext()

			node = WhileOp("while",[node_rel,node_true])

			return node


		elif nexttoken.string == "if":

			nexttoken = Parser.tokens.selectNext() 

			print (nexttoken.value)

			node_rel = Parser.RelExpression()

			#nexttoken = Parser.tokens.selectNext() 

			print (nexttoken.value)

			if nexttoken.string != "then":

				raise Exception ("Espara-se um then")

			nexttoken = Parser.tokens.selectNext()

			print (nexttoken.value)

			if nexttoken.string == "\n":

				nexttoken = Parser.tokens.selectNext()

			print (nexttoken.value)

			node_true = Parser.Statement()

			#nexttoken = Parser.tokens.selectNext() 

			print (nexttoken.value)

			value = "if"
			node_else = 0

			if nexttoken.string == "else":

				value = "else"

				nexttoken = Parser.tokens.selectNext()

				node_else = Parser.Statement()

				#nexttoken = Parser.tokens.selectNext()

			elif nexttoken.string != "end":

				raise Exception ("Espara-se um 'end' de if")

			nexttoken = Parser.tokens.selectNext()

			if nexttoken.string != "if":

				raise Exception ("Espara-se um 'if' de end if")

			nexttoken = Parser.tokens.selectNext()

			node = IfOp(value,[node_rel,node_true,node_else])

			return node


		elif nexttoken.string == "\n":

			nexttoken = Parser.tokens.selectNext()


		else:

			print(nexttoken.string)

			raise Exception ("Algo deu ruim")

	def RelExpression():

		nexttoken = Parser.tokens.actual

		node1 = Parser.parserExpression()

		comp_signal = nexttoken.string

		nexttoken = Parser.tokens.selectNext()

		node2 = Parser.parserExpression()

		node = BinOp(comp_signal,[node1,node2])

		return node


	def factor():

		nexttoken = Parser.tokens.actual

		soma = 0

		if nexttoken.string == "int":

			node = IntVal(Parser.tokens.actual.value,[])

			nexttoken = Parser.tokens.selectNext()

			return node

		elif nexttoken.string == "identifier":

			node = VarVal(Parser.tokens.actual.value,[])

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

			print (nexttoken.value)
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

		res = Parser.Statements()

		if Parser.tokens.actual.string == "EOF":

			return res

		else:

			print (Parser.tokens.actual.string)

			raise Exception("Parser Error: EOF")

	

with open('test_file2.txt') as testfile:
	string = testfile.read()


ST1 = SymbolTable()

Parser.run(string).Evaluate(ST1)

print("ST = ",ST1.ST)