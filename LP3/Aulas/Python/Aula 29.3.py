#Documentação: python.org;

#Saida:
#Print (lista de objetos, sep=' ', end='\n');
#Essas cofigurações podem ser alteradas;
# Veja como são representados os valores anteriores
print("0.1 = {0:.17f}".format(0.1))
print("0.2 = {0:.17f}".format(0.2))
print("0.3 = {0:.17f}".format(0.3))


#Variáveis:
#É fortemente tipado (cada elemento tem seu tipo definido);
#Tipagem dinamica;
#Todas as variáveis são objetos. Ou seja, são ponteiros de referencia a um endereço de memória;
# Atribuir a x o valor inteiro 1
x = 1             # x aponta para um inteiro
print("x aponta para um inteiro: x = ", x)
# Atribuir agora a x a string 'uma string'
x = 'uma string'          # x aponta para uma string
print("x aponta agora para uma string: x = ", x)
# Atribuir novamente a x uma lista
x = [1, 2, 3]     # x aponta para uma lista
print("x aponta para uma lista: x = ", x)

x = [1, 2, 3]          # x aponta para uma lista
#Podemos mudar a lista com dois comandos Obj.append() e Obj.remove();
y = x                  # y aponta para a mesma lista que x
print("Como podemos ver x = ", x)
print("e y = ", y)
print("apontam para a mesma lista.")
print("Ou seja, se modificarmos a lista que referenciamos em x ...")
x.append(4)            # acrescentando um elemento na lista
print("estamos modificando a lista referenciada por y ")
print(" y = ", y)
print("Agora, se modificamos receptáculo para o qual x esta apontando ...")
x = "Agora é uma string"
print("A variável y continua apontando para y = ", y)
print("Ao contrario de x = ", x)

#type(Obj) -> retorna o tipo da variavel;
#isinstance(Obj, tipo que vc quer conferir) -> retorna se ele é desse tipo;
#Obj.is_integer() -> retorna se o Obj pode representar o tipo desejado;

x = 3.14
print("O valor de x = ", x)
print("O tipo de x é", type(x))
print("x é uma instancia de int?", isinstance(x, int))
print("x é uma instancia de float?", isinstance(x, float))
print("Quem lembra de números complexos ou imaginarios, conjunto do qual os números reais são um subconjunto?")
print(x.real, "+", x.imag, "i")
print("O tipo de x continua: ", type(x))
print("Podemos testar também os métodos desta clase")
print("Por exemplo: x é um valor inteiro? ", x.is_integer())
x = 4.0
print("Mas se mudamos o valor de x para x = ", x)
print("Agora: x armazena um valor inteiro? ", x.is_integer())
print("O tipo de x é", type(x))

#Divisão real
print("1 / 3     -> ", 1 / 3)
print("6 / 3     -> ", 6 / 3)
print("7 / 3     -> ", 7 / 3)
print("1 / 3.0   -> ", 1 / 3.0)
print("6.0 / 3   -> " , 6.0 / 3)
print("7.0 / 3.0 -> ", 7.0 / 3.0)

#Divisão truncada
print("1 // 3     -> ", 1 // 3)
print("6 // 3     -> ", 6 // 3)
print("7 // 3     -> ", 7 // 3)
print("1 // 3.0   -> ", 1 // 3.0)
print("6.0 // 3   -> " , 6.0 // 3)
print("7.0 // 3.0 -> ", 7.0 // 3.0)

#a is b 	True se a eb são objetos idênticos
#a is not b 	True se a e b não são objetos idênticos
#a in b 	True se a é membro do conjunto b
#a not in b 	True se a não é membro do conjunto b

a = [1, 2, 3.0]
b = [1, 2, 3]
print("1 - a é igual a b?", a == b)
print("2 - a é idêntico a b?", a is b)
b = a
print("3 - a é igual a b?", a == b)
print("4 - a é idêntico a b?", a is b)
b = 1 #PESQUISAR DEPOIS;
print("in?", b in a)
print("in not?", b not in a)

#Ponto flutuante
#Notação cientifica tbm funciona para representar numeros
x = 0.00001
y = 1e-5 # 1 * 10**-5
print(x == y)

#String
#Ex:
disciplina = "CET1202 - Algoritmos e Programação"
professor = 'Dany S. Dominguez'

# Tamanho da string
print("Tamanho de disciplina: ", len(disciplina))
# transformando maiusculas e minusculas
print("Professor: ", professor.upper())
print("Disciplina: ", disciplina.lower())
print("alguem tem dúvidas?".capitalize())

# Alguns operadores algebricos funcionam com Strings como:
# Para concatenar strings
print(disciplina + " em andamento")
# Ou para repetir uma string
print(5*"!!++.")
# Acessando os caracteres da string
print("Código: ", disciplina[0:7])
# Por que utilizar aspas simples ou duplas?
stringComAspas = "Isto é uma 'String' que contem aspas simples"
print(stringComAspas)
stringComAspas = 'Agora a mesma "String" contem aspas duplas'
print(stringComAspas)

#Operadores lógicos com strings
str1 = "Teste igualdade"
str2 = "Teste igualdade"
str3 = "AAA"
print("Endereco de str1: ", hex(id(str1)))
print("Endereco de str2: ", hex(id(str2)))

print("str1 Igual a str2", str1==str2)
print("str1 Identico a str2", str1 is str2)
print("str1 Maior que a str2", str1 > str2)
print("str1 Menor que a str2", str1 < str2)
print("str1 Maior que a str3", str1 > str3)
print("str1 Menor que a str3", str1 < str3)





