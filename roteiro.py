#encoding=utf-8

string = str(input("Insira uma conta: "))

numero = []
sinal = "pos"
soma = 0

lista_numero = ["1","2","3","4","5","6","7","8","9","0"]

for i in range (0,len(string)-1):

	if string[i] in lista_numero:

		numero.append(int(i))

	else:

		if string[i] == "+":

			if sinal == "pos":

				for i in range (0,len(numero)-1):
					print(numero)
					soma += numero[i]*10**(len(numero)-i-1)

				numero = []

			elif sinal == "neg":

				for i in range (0,len(numero)-1):

					soma += numero[i]*10**(len(numero)-i-1)
				numero = []

			sinal == "pos"


		if string[i] == "-":

			if sinal == "pos":

				for i in range (0,len(numero)-1):

					soma += numero[i]*10**(len(numero)-i-1)
				numero = []

			elif sinal == "neg":

				for i in range (0,len(numero)-1):

					soma += numero[i]*10**(len(numero)-i-1)
				numero = []

			sinal == "neg"


if sinal == "pos":

	for i in range (0,len(numero)-1):

		soma += numero[i]*10**(len(numero)-i-1)
	numero = []

elif sinal == "neg":

	for i in range (0,len(numero)-1):

		soma += numero[i]*10**(len(numero)-i-1)
	numero = []

print(soma)