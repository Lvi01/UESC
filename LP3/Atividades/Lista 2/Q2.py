import math

medidas = [None]*10
media = 0
des_padrao = 0

for i in range(10):
  medidas[i] = int(input("Valor da "+ str(i+1) + "° medida: "))
  media += medidas[i]

media/=10

for i in range(10):
  des_padrao += (math.pow(medidas[i]-media, 2))

des_padrao/=10
des_padrao = math.sqrt(des_padrao)

print("RESULTADOS: ")

for i in range(10):
  print("Valor da "+str(i+1)+"° medida: "+str(medidas[i]))

print("Media: "+str(media))
print("Desvio padrao: "+str(des_padrao))
if(0.1*media>des_padrao): print("O multimetro funciona devidamente")
else: print("O multrimetro nao funcina devidamente") 
