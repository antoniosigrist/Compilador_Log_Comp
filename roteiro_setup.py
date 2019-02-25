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

		if tokenizer.position >= len(tokenizer.origin):

			tokenizer.actual.string = "EOF"
			tokenizer.actual.value = "EOF"

			return tokenizer.actual
			

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
				tokenizer.actual.value = "signal"
				tokenizer.position = i+1

				return tokenizer.actual



			elif tokenizer.origin[i] == "-":

				tokenizer.actual.string = "minus"
				tokenizer.actual.value = "signal"
				tokenizer.position = i+1


				return tokenizer.actual


			elif tokenizer.origin[i] == "*":

				tokenizer.actual.string = "times"
				tokenizer.actual.value = "signal"
				tokenizer.position = i+1

				return tokenizer.actual

			elif tokenizer.origin[i] == "/":

				tokenizer.actual.string = "division"
				tokenizer.actual.value = "signal"
				tokenizer.position = i+1

				return tokenizer.actual

			else:

				tokenizer.actual.string = "unrecognized"
				tokenizer.actual.value = "unrecognized"
				tokenizer.position = i+1

				return tokenizer.actual


		return tokenizer.actual


class Parser:

	@staticmethod
	def parserExpression():

		token_error = 1
		soma = 0

		nexttoken = Parser.tokens.selectNext(Parser.tokens)

		if nexttoken.string == "int":

			soma += nexttoken.value


		while nexttoken.string != "EOF":

			if nexttoken.string == "int":

				nexttoken = Parser.tokens.selectNext(Parser.tokens)


			#### TRATAMENTO DE ERROS

			if nexttoken.string == "unrecognized":

				raise Exception("Parser Error: {}o token is unrecognized. Invalid sintax".format(token_error))


			# INSERE OS TOKEN PARA REALIZAR A SOMA

			if nexttoken.string == "minus":

				nexttoken = Parser.tokens.selectNext(Parser.tokens)

				if nexttoken.string != "int":

					raise Exception("Parser Error: expected int token on {} token".format(token_error))

				else:

					soma -= nexttoken.value

			elif nexttoken.string == "plus":

				nexttoken = Parser.tokens.selectNext(Parser.tokens)

				if nexttoken.string != "int":

					raise Exception("Parser Error: expected int token on {} token".format(token_error))

				else:

					soma += nexttoken.value
					

			elif nexttoken.string == "int":

				raise Exception("Parser Error: expected operator token on {} token".format(token_error))

			
			nexttoken = Parser.tokens.selectNext(Parser.tokens)






			token_error+=1


		return soma


	@staticmethod
	def run(code):

		Parser.tokens = Tokenizer(code,0,None)


		return Parser.parserExpression()

	

string = str(input("Insira uma conta: "))


soma = Parser.run(string)

print(soma)
