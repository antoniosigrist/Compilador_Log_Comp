#encoding=utf-8

string = str(input("Insira uma conta: "))  #" -4 -1 + 3 - 100"

numero = []
sinal = "pos"
soma = 0

lista_numero = ["1","2","3","4","5","6","7","8","9","0"]

for i in range (0,len(string)):

	if str(string[i]) in lista_numero:

		numero.append(int(string[i]))


	else:

		if string[i] == "+":

			if sinal == "pos":


				for j in range (0,len(numero)):
					
					soma += numero[j]*10**(len(numero)-j-1)

				numero = []

			elif sinal == "neg":


				for j in range (0,len(numero)):

					soma -= numero[j]*10**(len(numero)-j-1)

				numero = []

			sinal = "pos"


		if string[i] == "-":

			if sinal == "pos":

				for j in range (0,len(numero)):

					soma += numero[j]*10**(len(numero)-j-1)

				numero = []

			elif sinal == "neg":

				for j in range (0,len(numero)):

					soma -= numero[j]*10**(len(numero)-j-1)

				numero = []

			sinal = "neg"


if sinal == "pos":

	for j in range (0,len(numero)):

		soma += numero[j]*10**(len(numero)-j-1)

	numero = []

elif sinal == "neg":

	for j in range (0,len(numero)):

		soma -= numero[j]*10**(len(numero)-j-1)
	numero = []

print("Resultado final: "+str(soma))

