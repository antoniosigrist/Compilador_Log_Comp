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
				tokenizer.actual.value = "signal"
				tokenizer.position = i+1

				return tokenizer.actual


			elif tokenizer.origin[i] == "-":

				tokenizer.actual.string = "minus"
				tokenizer.actual.value = "signal"
				tokenizer.position = i+1


				return tokenizer.actual


		return tokenizer.actual


class Parser:

	@staticmethod
	def parserExpression():

		token_error = 1
		soma = 0
		signal = "plus"
		last_token = ""

		while Parser.tokens.position < len(Parser.tokens.origin):

			nexttoken = Parser.tokens.selectNext(Parser.tokens)

			if (nexttoken.string == last_token):

				print("Parser Error: "+str(token_error) +"o token is the same type of the previous. Invalid sintax")

				break

			if nexttoken.string == "int":

				#print(nexttoken.value)
				if signal == "plus":
					
					soma += nexttoken.value

				elif signal == "minus":

					soma -= nexttoken.value

				last_token = nexttoken.string

			if nexttoken.string == "minus":

				signal = "minus"
				last_token = "minus"

			elif nexttoken.string == "plus":

				signal = "plus"
				last_token = "plus"

			token_error += 1

		return soma


	@staticmethod
	def run(code):

		Parser.tokens = Tokenizer(code,0,None)


		return Parser.parserExpression()

	

string = "-1+2" #str(input("Insira uma conta: "))


soma = Parser.run(string)

print(soma)
