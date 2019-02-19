#encoding=utf-8

class Token:

	def __init__(self,string,value):

		self.string = string
		self.value = value

class Tokenizer:

	def __init__(self,origin,position,actual):

		self.origin = str(origin)
		self.position = int(position)

		if actual == None:

			self.actual = Token("int",0)

		else:

			self.actual = Token(actual.string,actual.value)

	def selectNext(self,tokenizer):

		numero = ""

		for i in range(tokenizer.position,len(tokenizer.origin)):


			if tokenizer.origin[i] == " ":

				pass



			elif str(tokenizer.origin[i]).isdigit():

				while tokenizer.origin[i].isdigit():


					numero += tokenizer.origin[i]

					i += 1

					if i > len(tokenizer.origin)-1:

						break


				tokenizer.actual.string = "int"
				tokenizer.actual.value = int(numero)
				tokenizer.position = i


				return tokenizer.actual


			elif tokenizer.origin[i] == "+":

				tokenizer.actual.string = "plus"
				tokenizer.actual.value = int(0)
				tokenizer.position = i+1

				return tokenizer.actual


			elif tokenizer.origin[i] == "-":

				tokenizer.actual.string = "minus"
				tokenizer.actual.value = int(0)
				tokenizer.position = i+1


				return tokenizer.actual


		return tokenizer.actual


class Parser:

	@staticmethod
	def parserExpression():

		while Parser.tokens.position < len(Parser.tokens.origin):

			nexttoken = Parser.tokens.selectNext(Parser.tokens)

			print(nexttoken.string)
			print(nexttoken.value)

			print( "\n")


	@staticmethod
	def run(code):

		Parser.tokens = Tokenizer(code,0,None)


		return Parser.parserExpression()

	

string = "0+21-  50" #str(input("Insira uma conta: "))


Parser.run(string)
