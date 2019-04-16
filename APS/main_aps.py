#encoding=utf-8

import sys


class Node:

	def __init__(self,value,children):

		self.value = value
		self.children = children

	def Evaluate(self,ST):

		pass


class StatementsOp(Node):

	def __init__(self,value,children):

		self.value = value
		self.children = children

	def Evaluate(self,ST):

		for child in self.children:

			child.Evaluate(ST)


class TypeOp(Node):

	def __init__(self,value,children):

		self.value = value
		self.children = children

	def Evaluate(self,ST):

		if self.children[0] == "int":

			return "integer"

		elif self.children[0] == "bool":

			return "boolean"

		else:

			raise Exception ("Espera-se tipos integer or boolean")

		

class PrintOp(Node):


	def __init__(self,value,children):

		self.value = value
		self.children = children

	def Evaluate(self,ST):

		print(self.children[0].Evaluate(ST)[0])



class Assignment(Node):

	def __init__(self,value,children):

		self.value = value
		self.children = children

	def Evaluate(self,ST):


		var = ST.getter(self.children[0].upper())

		if var != None:

			children1 = self.children[1].Evaluate(ST)

			if (children1[1] == "boolean" and var[1] == "boolean") or (children1[1] == "integer" and var[1] == "integer"):

				ST.remove(self.children[0].upper())
				ST.setter(self.children[0], children1)

			else:

				raise Exception ("Variavel '"+str(self.children[0])+"' nao é do tipo que está sendo atribuida" )

		else:

			raise Exception ("Variavel '"+str(self.children[0])+"' nao declarada" )

class WhileOp(Node):

	def __init__(self,value,children):

		self.value = value
		self.children = children

	def Evaluate(self,ST):
		
		while self.children[0].Evaluate(ST)[0] == True:

			self.children[1].Evaluate(ST)


class IfOp(Node):

	def __init__(self,value,children):

		self.value = value
		self.children = children

	def Evaluate(self,ST):

		if self.value == "if":

			if self.children[0].Evaluate(ST)[0] == True:

				self.children[1].Evaluate(ST)

			else:

				pass

		elif self.value == "else":
			
			if self.children[0].Evaluate(ST)[0] == True:

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

			return None


	def setter(self,key,value):

		self.ST.update({key: value})

	def remove(self,key):

		del self.ST[key]

class BlockTable:

	def __init__ (self):

		self.BT = []


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
			
			children0 = self.children[0].Evaluate(ST)

			children1 = self.children[1].Evaluate(ST)

			if children1[1] != children0[1]:

				raise Exception ("Não pode fazer conta com variaveis de tipos diferentes")

			else:

				if self.value == "plus":

					return (children0[0] + children1[0] , children0[1])

				if self.value == "minus":

					return (children0[0] - children1[0] , children0[1])

				if self.value == "times":

					return (children0[0] * children1[0] , children0[1])

				if self.value == "division":

					return (children0[0] // children1[0] , children0[1])

				if self.value == "=":

					return (children0[0] == children1[0] , children0[1])

				if self.value == "and":

					return (children0[0] and children1[0] , children0[1])

				if self.value == "or":

					return (children0[0] or children1[0] , children0[1])

				if children0[1] == "boolean" or children1[1] == "boolean":

					raise Exception("Não se pode fazer operadores < ou > com booleanos")

				if self.value == ">":

					return (children0[0] > children1[0] , children0[1])

				if self.value == "<":

					return (children0[0] < children1[0] , children0[1])

			
			

class UnOp(Node):

	def __init__(self,value,children):

		self.value = value
		self.children = children

	def Evaluate(self,ST):

		if self.value == "plus":

			return  self.children[0].Evaluate(ST)

		if self.value == "minus":

			return (-self.children[0].Evaluate(ST)[0],"integer")

		if self.value == "not":

			return not self.children[0].Evaluate(ST)

class IntVal(Node):

	def __init__(self,value,children):

		self.value = value
		self.children = children

	def Evaluate(self,ST):

		return (self.value,"integer")


class BoolVal(Node):


	def __init__(self,value,children):

		self.value = value
		self.children = children

	def Evaluate(self,ST):

		return (self.value,"boolean")


class InputOp(Node):

	def __init__(self,value,children):

		self.value = value
		self.children = children

	def Evaluate(self,ST):

		return (int(input("Insira um número: \n")),"integer")


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


class VarDec(Node):

	def __init__(self,value,children):

		self.value = value
		self.children = children

	def Evaluate(self,ST):

		if self.value == "var":

			ST.setter(self.children[0], (self.children[1],self.children[2].Evaluate(ST)))

		else:
			print (self.children[1].Evaluate(ST)[0])
			ST.setter(self.children[0], (self.children[1].Evaluate(ST)[0],self.children[2].Evaluate(ST)))






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

	
			while self.origin[i] == " " or self.origin[i] == "	":

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

				elif variable == "AND":

					self.actual.string = "and"
					self.actual.value = "and"
					self.position = i+1

					return self.actual

				elif variable == "OR":

					self.actual.string = "or"
					self.actual.value = "or"
					self.position = i+1

					return self.actual

				elif variable == "TRUE":

					self.actual.string = "boolean"
					self.actual.value = True
					self.position = i+1

					return self.actual

				elif variable == "BOOLEAN":

					self.actual.string = "boolean"
					self.actual.value = "boolean"
					self.position = i+1

					return self.actual

				elif variable == "INTEGER":

					self.actual.string = "integer"
					self.actual.value = "integer"
					self.position = i+1

					return self.actual

				elif variable == "FALSE":

					self.actual.string = "boolean"
					self.actual.value = False
					self.position = i+1

					return self.actual

				elif variable == "NOT":

					self.actual.string = "not"
					self.actual.value = "not"
					self.position = i+1

					return self.actual

				elif variable == "INPUT":

					self.actual.string = "input"
					self.actual.value = "input"
					self.position = i+1

					return self.actual

				elif variable == "SUB":

					self.actual.string = "sub"
					self.actual.value = "sub"
					self.position = i+1

					return self.actual

				elif variable == "MAIN":

					self.actual.string = "main"
					self.actual.value = "main"
					self.position = i+1

					return self.actual

				elif variable == "INT":

					self.actual.string = "int"
					self.actual.value = "int"
					self.position = i+1

					return self.actual

				elif variable == "BOOL":

					self.actual.string = "bool"
					self.actual.value = "bool"
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

			elif self.origin[i] == "	":

				pass

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

	def Main(BT):

		nexttoken = Parser.tokens.actual

		main_return = Parser.Statements(BT)

		while nexttoken.string != "EOF":

			nexttoken = Parser.tokens.selectNext()


		return main_return


	def Statements(BT):

		children = []
		
		nexttoken = Parser.tokens.actual

		while nexttoken.string != "EOF" and nexttoken.string != "else" and nexttoken.value not in BT.BT:

			child = Parser.Statement(BT)

			if child != None:

				children.append(child)

			if nexttoken.string == "\n":

				nexttoken = Parser.tokens.selectNext()

		node = StatementsOp("Statements",children)

		return node 



	def Statement(BT):

		nexttoken = Parser.tokens.actual

		if nexttoken.string == "identifier" and nexttoken.value not in BT.BT:

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

		if nexttoken.string == "int" or nexttoken.string == "bool":

			tipo_identificador = nexttoken.string

			nexttoken = Parser.tokens.selectNext() 

			identifier = nexttoken.value

			tipoop = TypeOp("var",[tipo_identificador])

			tipo = None

			nexttoken = Parser.tokens.selectNext()

			if nexttoken.string == "=":

				nexttoken = Parser.tokens.selectNext()
					
				node = VarDec("atr", [identifier , Parser.parserExpression() , tipoop])

				return node

			else:

				node = VarDec("var", [identifier , tipo , tipoop])

				return node

		elif nexttoken.string == "print":

			nexttoken = Parser.tokens.selectNext() 

			node = PrintOp("print",[Parser.parserExpression()])

			nexttoken = Parser.tokens.selectNext() 

			return node

		elif nexttoken.string == "begin":

			node = Parser.Statements(BT)

			nexttoken = Parser.tokens.selectNext() 

			return node

		elif nexttoken.string == "while":

			nexttoken = Parser.tokens.selectNext() 

			node_rel = Parser.RelExpression()

			if nexttoken.string != "identifier":

				raise Exception ("Não foi aberto o bloco while")

			BT.BT.append(nexttoken.value)

			nexttoken = Parser.tokens.selectNext()

			node_true = Parser.Statements(BT)

			if nexttoken.value != BT.BT.pop():

				raise Exception ("O bloco while não foi fechado corretamente")

			nexttoken = Parser.tokens.selectNext()

			node = WhileOp("while",[node_rel,node_true])

			return node


		elif nexttoken.string == "if":

			nexttoken = Parser.tokens.selectNext() 

			node_rel = Parser.RelExpression()

			if nexttoken.string != "identifier":

				raise Exception ("Espara-se um then")

			BT.BT.append(nexttoken.value)

			nexttoken = Parser.tokens.selectNext()

			node_true = Parser.Statements(BT)

			value = "if"
			node_else = None


			if nexttoken.string == "else":
				
				value = "else"

				nexttoken = Parser.tokens.selectNext()

				node_else = Parser.Statements(BT)


			if nexttoken.value != BT.BT.pop():

				raise Exception ("Bloco fechado erroneamente")
				

			nexttoken = Parser.tokens.selectNext()

			node = IfOp(value,[node_rel,node_true,node_else])

			return node


		elif nexttoken.string == "\n":

			nexttoken = Parser.tokens.selectNext()


		else:

			print(nexttoken.string)

			raise Exception ("Algo deu ruim com o token: "+str(nexttoken.value))

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


		elif nexttoken.string == "boolean":

			node = BoolVal(Parser.tokens.actual.value,[])

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

		elif nexttoken.string == "not":

			nexttoken = Parser.tokens.selectNext()

			node = UnOp("not",[Parser.factor()])

			return node

		elif nexttoken.string == "input":

			node = InputOp("input",[])

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


			elif nexttoken.string == "and":

				nexttoken = Parser.tokens.selectNext()

				soma =  Parser.factor()

				node = BinOp("and",[node,soma])
						

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

			elif nexttoken.string == "or":

				nexttoken = Parser.tokens.selectNext()

				soma =  Parser.factor()
				node = BinOp("or",[node,soma])
						

		return node
			

	@staticmethod
	def run(code,BT):

		Parser.tokens = Tokenizer(code)
		Parser.tokens.selectNext()

		res = Parser.Main(BT)

		if Parser.tokens.actual.string == "EOF":

			return res

		else:

			print (Parser.tokens.actual.string)

			raise Exception("Parser Error: EOF")


file_name = str(sys.argv[1])

with open(file_name) as testfile:
	string = testfile.read()


ST1 = SymbolTable()
BT = BlockTable()

Parser.run(string,BT).Evaluate(ST1)

print("ST = ",ST1.ST)