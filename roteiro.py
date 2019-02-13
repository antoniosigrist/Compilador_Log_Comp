#encoding=utf-8

string = " 40 -1 + 3 - 1"#str(input("Insira uma conta: "))

numero = []
sinal = "pos"
soma = 0

lista_numero = ["1","2","3","4","5","6","7","8","9","0"]

for i in range (0,len(string)):

	if str(string[i]) in lista_numero:

		numero.append(int(string[i]))
		print (numero)

	else:

		if string[i] == "+":

			if sinal == "pos":

				print("entrou 1")

				for j in range (0,len(numero)):
					
					print("oi: "+str(numero[j]*10**(len(numero)-j-1)))

					soma += numero[j]*10**(len(numero)-j-1)

					print ("Soma 1 +: "+str(soma))

				numero = []

			elif sinal == "neg":

				print("entrou 2")

				for j in range (0,len(numero)):

					print("oi: "+str(numero[j]*10**(len(numero)-j-1)))

					soma -= numero[j]*10**(len(numero)-j-1)

				print ("Soma 2 +: "+str(soma))

				numero = []

			sinal = "pos"


		if string[i] == "-":

			if sinal == "pos":

				print("entrou 3")

				for j in range (0,len(numero)):

					soma += numero[j]*10**(len(numero)-j-1)

				print ("Soma 3 +: "+str(soma))

				numero = []

			elif sinal == "neg":

				print("entrou 4")

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

print(soma)