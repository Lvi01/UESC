#BOOL:
#As variáveis de tipo boolean em Python podem conter dois valores possíveis, True ou False. Variáveis booleans também podem ser construídas via casting explícito a partir de variáveis numéricas. Para os herdeiros de C/C++, qualquer valor numérico diferente de zero é convertido em True. Strings não vazias também geram True. As Strings vazias, a variável None e zero sempre são convertidos em False.

x = 5.0
b = 3
txt = "texto"
zero = 0
nada = ""
nulo = None
print("x > 4.0 -> ", x > 4.0)
print("b == 4 -> ", b == 4)
print("bool(x) -> ", bool(x))
print("bo0l(zero) -> ", bool(zero))
print("bool(nada) -> ", bool(nada))
print("bool(nulo) -> ", bool(nulo))

#LISTAS

# A lista dos 5 primeiros números pares
P = [ 2, 4, 6, 8, 10]
print("Uma lista P formada por números pares: ", P)

#A lista com os mesmos elementos pero diferente order
Q = [ 2, 8, 6, 10, 4]
print("Outra lista Q formada por números pares: ", Q)

#As listas são diferentes
print("Igualdade (a==b)", P==Q)
print("identicas (a is b)", P is Q)
#Algumas propriedades e opetrações com listas

# Tamanho da lista
print("De tamanho len(P): ", len(P))

#Listas são mutáveis, acrescentando um valor no final da lista
print("Adicionando o elemento 12 no final da lista.")
P.append(12)
print("A lista agora ficou assim: ", P)
print("Removendo o elemento 12 no final da lista.")
try:
    P.remove(12)
except:
    print("N'ao")
print("A lista agora ficou assim: ", P)

# Os operadores aritméticos também funcionam com listas da mesma forma que 
# com strings
P = [ 2, 4, 6, 8, 10]

# Concatenando lista
print("Uma nova lista PpI resultado de concatenar P com uma lista de números ímpares")
PpI = P + [1, 3, 5, 7, 9, 11]
print(PpI)

P += [14]
print("A lista agora ficou assim: ", P)

P = [0] + P
print("A lista agora ficou assim: ", P)

# Criando uma nova lista, repetindo os elementos da lista
print("A lista Pt3 resultado de repetir os elementos de P 3 vezes")      
Pt3 = 3*P
print(Pt3)
# Ordenando a lista
PpI.sort()
print("A lista PpI ordenada com o método sort(): ", PpI)

# A lista, ao contrario de uma string, é mutável
print("A lista ordenada: ", PpI)
PpI[0] = -1
print("Alterando o elemento PpI[0]: ", PpI)

#Mas se você está achando que as listas em Python são o equivalente aos arrays em outras linguagens, como C/C++, está errado. As listas que vimos até agora armazenam dados do mesmo tipo, mas as listas estão mais para listas de compras onde pode entrar líquidos, sólidos, perecíveis, biscoitos, legumes, cerveja, itens de limpeza, por quilos, por litros, por quantidade, etc. Ou seja, listas não se restringem a um tipo específico, e podem armazenar dados de tipos diferentes. Uma lista pode até ser formada por outras listas. Veja os exemplos a seguir.
#Uma lista de strings com objetos strings
Lh = ["Python", "Swift","Java", "C++", "Go", "Rust"]
print("Lista original", Lh)
print(Lh.sort()) #retorna None, não se cria uma nova lista
print("Lista ordenda: ", Lh)

#Ordem  reversa 
Lh = ["Python", "Swift","Java", "C++", "Go", "Rust"]
print("\nLista original", Lh)
Lh.sort(reverse = True)
print("Lista ordendad em forma descendente:", Lh)

#Ordem  pelo cumprimento 
Lh = ["Python", "Swift","Java", "C++", "Go", "Rust"]
print("\nLista original", Lh)
Lh.sort(key = len) #pode usar um atributo do objeto
print("Lista ordenda por tamanho:", Lh)

#Uma lista com dados de diferentes tipos e aninhada
Lh = [1, 2.0, "três", [16//4, 10/2]]
print(Lh)
try:
    print(Lh.sort())
except Exception as inst:
    print("Não consegui ordenar: ", inst)
#print(Lh.sort())
print(Lh)


#Indexamento de listas, slicing

#Os elementos de uma lista podem ser acessados independentemente através do índice que identifica cada um de maneira única. Em Python, da mesma forma que em C/C++, se implementa o indexamento começando em zero. Como novidade, podemos utilizar índices negativos para acessar a lista de trás para frente. Desta forma:
# Nossa lista de nomes de linguagens de programação
Lp = ["Python", "Swift","Java", "C++", "Go", "Rust"]
print("Lista: ", Lp)
# O primeiro elemento da lista é 
print("Lp[0] = ",Lp[0])
# e o segundo é
print("Lp[1] = ", Lp[1])
# O tamanho da lista 
n = len(Lp)
print("Tamanho da lista n = ", n)
# O último elemento da lista pode ser acessado como:
print("LP[n-1] = ", Lp[n-1])
# O é então como:
print("Lp[-1] = ", Lp[-1])
# e o anterior a ele
print("Lp[-2] = ", Lp[-2])

#Os elementos podem ser acessados também como sub listas geradas utilizando o mecanismo de slicing. Utilizando então uma sintaxe baseada no emprego de [ini:fim]para separar o início (ini) da sub lista, incluído nela, e o final, não incluído. Podemos omitir o início da sub lista ([:fim]) e, neste caso, a mesma começa no elemento de índice 0. Também podemos omitir o final ([ini:]) e serão incluídos os elementos até o final da lista. Um terceiro inteiro pode ser utilizado no slicing, [ini:fim:passo] para definir o intervalo entre um elemento e outro a ser selecionado para integrar a sub lista. Veja os exemplos a seguir

P = ['a', 'b', 'c', 'd', 'f', 'g']
# Os primeiros três elementos de P
print("P[:3] = ", P[:3]) # equivale a P[0:3], retorna os elemento de índice 0, 1 e 2
# Os elementos da lista excluindo o primeiro
print("P[1:] = ",P[1:]) # equivale a P[1:len(P)]
# Uma sub lista da original, retorna os elementos de índice 1, 2 e 3
print("P[1:4] = ", P[1:4])
# Extraindo os elementos com índice par da lista completa
print("P[::2] = ",P[::2]) # equivale a P[0:len(P):2]

#A sintaxes do slicing é utilizada também em outras estruturas, como strings, ou as criadas em pacotes como o NumPy e o Pandas.

# Vejamos como mostrar uma string ao contrario usando slicing
texto = "abcdefghijk"
print(texto[-1::-1])#Equivalente a texto[-1:-len(texto)-1:1]
#print(texto[-1:-len(texto)-1:-1])

#Tuplas

#Tuplas são bastante similares a listas em alguns aspectos. São definidas como um conjunto de elementos separados por vírgula e delimitados por parênteses. As tuplas também tem tamanho (len) e os elementos da mesma também podem ser acessados pelo seu índice. A principal diferença é que as tuplas são imutáveis, ou seja, uma vez criadas seu tamanho e seu conteúdo não podem ser alterados. Veja os exemplos

dupla = (2,3.6)
print(dupla)
c = 3
tripla = ("a", 'b', c)
print(tripla)
print("tripla[0] -> ", tripla[0])
# Sobre o fato de serem imutaveis 
try:
    tripla[2] = 3
except Exception as inst:
    print("Não consegui modificar a tupla: ", inst)

#As tuplas podem ser utilizadas em diversos contextos. Um exemplo simples pode ser o caso das funções que precisam retornar mais de uma variável. Veja este exemplo interessante que demonstra as potencialidade de Python.

# X armazena um valor de ponto flutuante
x = 0.25
# Na realidade este valor pode ser representado como uma fração
fracão = x.as_integer_ratio()
print(type(fracão))
print(fracão) # método da classe dos objetos da classe pont flutuante
numerador, denominador = x.as_integer_ratio() # o método retorna uma dupla
print(type(numerador))
print(numerador, "/", denominador) # aqui escrevendo como uma fração
print(numerador / denominador) # aqui escrevendo novamente como um ponto flutuante

# referenciando Tuplas
p1 = (1.0, 2.3)
print("p1 = ", p1)
p2 = p1
print("p2 = ", p2) #as duas variáveis "apontam" para a mesma tupla
print("Endereço de p1:", hex(id(p1)))
print("Endereço de p2:", hex(id(p2)))
p1 = (1.0, 2.3, 3.4)
print("p1 = ", p1)
print("p2 = ", p2) #tuplas são inmutáveis
print("Endereço de p1:", hex(id(p1)))
print("Endereço de p2:", hex(id(p2)))

# Sobre indexamento e tamanho das tuplas
print("P1:", p1)
print("P1 é uma tupla de ", len(p1), " componentes.")
print("O primeiro componente de P1 é P1[0]", p1[0])
print("O último componente da tupla é P1[-1] = ", p1[-1])
print("O último componente da tupla é P1[len(P1)-1] = ", p1[len(p1)-1])

#Dicionários

#É o tipo mais interessante entre os tipos de dados estruturados nativos de Python, o dicionário é semelhante aosexceto com os arrays associativos do PHP, chamados de coleções em linguagens mais modernas (C#). Um detalhamento de quais linguagens de programação suportam este mecanismo pode ser encontrado no enlace.

#Para declarar um dicionário utilizamos um conjunto de pares chave valor, no formato {chave:valor, }, separados por vírgula e delimitado por chaves. O acesso aos elementos do dicionário utiliza mais uma vez índices, mas desta vez não se trata de um mecanismo de indexamento numérico começando em zero. Os índices dos dicionários são as chaves.

#Veja os seguintes exemplos:

# Declarando um dicionário
meuReg = {'Nome': "Jonas", 'SobreNome': "Oliveira", "Idade":25, "Altura":1.85}

print("Registro completo: ", meuReg)


# Acessando um elemento do dicionário
print("Nome: ", meuReg['Nome'])

# Os dicionarios são mutáveis
# Modificando um elemento do dicionario
meuReg['Nome'] = "Juninho"
# Adicionando um novo elemento
meuReg['Peso'] = 88.3

# Imprimindo o dicionário
print("Registro completo: ", meuReg)


#Conjuntos

#Os conjuntos são elementos que apresentam algumas semelhanças com as listas, entretanto eles tentam recriar a teoria de conjuntos estabelecida na lógica matemática. As principais características dos conjuntos em Python são:

 #Conjuntos são estrturas desordenadas, isto é a ordem dos elementos é irrelevante.
 #Os elementos de um conjunto são únicos, não esta permitida a duplicação de elementos.
 #Um conjunto pode ser modificado (não imutável), entretanto os elementos do conjunto devem ser um tipo de dados inmutável.

#Podemos definir conjuntos de duas formas:

#Usando o construtor da classe,
#Usando um iterator entre chaves

#Criando conjuntos
C1 = {1, 2, 3, 4, 5}
C2 = set([5, 2, 3, 1, 4])

print("Conjunto 1:", C1)
print("Conjunto 2:", C2)

print("Iguais C1==C2", C1==C2)
print("Idénticos C1 is C2", C1 is C2)

#Os conjuntos de Python suportam as diversas operações matemáticas sobre conjuntos (União, Interseção, ...).

P = {1, 2, 3, 4, 5}
I = {3, 4, 5, 6, 7}

#Operações com conjuntos
# União de conjuntos
num = P.union(I) # equivalente a P | I
#Interseção de conjuntos
nulo = I.intersection(P) # equivalente a I & P
#Diferencia de conjuntos
dif = P.difference(I) # equivalente a P - I

print("Conjunto P, ", P)
print("Conjunto I, ", I)
print("União, ", num)
print("Intersecção, ", nulo )
print("Diferença, ", dif)

Estrutura condicional: if - elif - else:

A estruturas condicional simples ou dupla, geralmente conhecidas como comandos if-then-else, permitem que o código execute um determinado bloco de instruções apenas se uma determinada condição booleana for satisfeita. Em Python se introduz a tradicional estrutura if-else, acrescentando apenas o elif que é uma contração para quando seja necessário utilizar um else if (o clássico if aninhado).

Veja alguns exemplos simples.

# veja como usar uma condição if simples
x = 0.0
print("x = ", x)

#if condição:
if x:
    x = 3.14
# Após a estrutura condicional
print("x = ", x)

# Podemos utilizar também uma condição com dois blocos de instruções
if x > 0:
    x = -15
else:
    x = 15
# Após a nova estrutura condicional    
print("x = ", x)

# Ou estruturas condicionais aninhadas
if x == 0:
    print(x, "zero")
elif x > 0:
    print(x, "positivo")
elif x < 0:
    print(x, "negativo")
else:
    print(x, "não é um valor numérico...")

#Estrutura de repetição for

#Estruturas de repetição ou laços, são utilizados para executar um determinado bloco de instruções repetidas vezes.

#A estrutura for em Python é ligeiramente diferente da estrutura for que encontramos em C ou Java. Ao contrário de iterarmos sobre uma progressão aritmética de números onde podemos definir o passo da iteração e a condição de parada (como em Java). Em Python a instrução for itera sobre os itens de qualquer sequência (uma lista ou string), na ordem que aparecem na sequência. Veja um exemplo simples.

LPs = ["Python", "Swift","Java", "C++", "Go", "Rust"]

for lp in LPs:
    print(lp, len(lp), end=', ')

print('\n')
str = "UESC"
for s in str:
    print(s, end=' ')    

#Note que ao iterarmos sobre uma sequência fazemos uma cópia de cada elemento. O código que modifica uma sequência durante a iteração sobre ela mesma pode ser muito complexo. Para modificarmos uma sequência enquanto iteramos sobre ela, geralmente usamos uma das seguintes alternativas:

 #   Fazemos o laço sobre uma cópia da sequencia,
  #  Criamos uma nova sequência,
   # Usar um laço pelo índice do elemento na lista e modificar o elemento (esta alternativa é inviável se a sequência é um Dicionário).

LPs = ["Python", "Swift","Java", "C++", "Go", "Rust"]

#Iteramos sobre uma cópia da lista
print("Lista: ", LPs)
for lp in LPs.copy():
    if len(lp)>4:
        LPs.remove(lp)        
print("Lista Curta: ", LPs) 

LPs = ["Python", "Swift","Java", "C++", "Go", "Rust"]
#Criamos uma nova lista
ShortsLPs = []
print("\nLista: ", LPs)
for lp in LPs:
    if len(lp)<=4:
        ShortsLPs.append(lp)        
print("ListaCurta: ", ShortsLPs)

#Como fazer se desejamos iterar sobre uma sequência de números, ou mesmo pelo índice dos elementos de uma lista? Podemos usar a a sequência inmutável de números representada por range(), todos os detalhes sobre sequencia range() no Enlace. Vejamos alguns exemplos.

# A função range retorna um iterator de números inteiros

# pode ser usada definindo apenas o valor final, que não estara incluido 
fim = 10
print("range(", fim,"): ",list(range(fim)))

# pode ser definindo também o valor inicial, que estara incluido 
ini = 2
print("range(",ini, " ,", fim,"): ",list(range(ini, fim)))

# pode ainda ser definindo também o valor do incremento
passo = 2
print( "range(",ini, " ,", fim, " , ", passo, "): ",list(range(ini, fim, passo)))

#Podemos usar um iterator gerado por range para termos um laço "controlado por contador"
for i in range(5):
    print(i, end=', ')

#Percorrendo uma lista de caracteres usando o índice e modificando os itens em posições pares
L = ['a', 'b', 'c', 'd', 'e', 'f']
print("Lista:", L)
for i in range(len(L)):
    if i%2:
        L[i] = '*' 
print("Lista:", L)        













