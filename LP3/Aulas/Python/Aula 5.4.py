#Estrutura condicional: if - elif - else:
#A estruturas condicional simples ou dupla, geralmente conhecidas como comandos if-then-else, permitem que o código execute um determinado bloco de instruções apenas se uma determinada condição booleana for satisfeita. Em Python se introduz a tradicional estrutura if-else, acrescentando apenas o elif que é uma contração para quando seja necessário utilizar um else if (o clássico if aninhado).

#Veja alguns exemplos simples.

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

#Fazemos o laço sobre uma cópia da sequencia,
#Criamos uma nova sequência,
#Usar um laço pelo índice do elemento na lista e modificar o elemento (esta alternativa é inviável se a sequência é um Dicionário).

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
#Estrutura de repetição while
#A estrutura while repete um bloco de código enquanto uma determinada condição for satisfeita. Veja o exemplo

L = range(2, 10)
i = 0
print("Todos em L: [", end=' ')
while i < len(L):
    print(L[i], end=' ')
    i += 1
print("]")

#As estruturas de repetição podem ter sua execução modificada pelo uso de duas instruções: break e continue. Elas tem o mesmo significado que encontramos nas linguagens C e Java.

#Veja nos exemplos a seguir:

L = range(2, 10)
print("Impares em L: [", end=' ')
for i in range(len(L)):
    if L[i] % 2 == 0 :
        continue #pula para o fim da iteração atual e vai para a próxima iteração
    print(L[i], end=' ')
print("]")
L = range(2, 10)
i = 0
print("Os primeiros 5 de L: [", end=' ')
while i < len(L):
    if i > 4:
        break # sai completamente da execução do laço
    print(L[i], end=' ')
    i += 1
print("]")

#Uma outra característica que pode ser comentada sobre as estruturas de repetição em Python é a possibilidade de utilizar um estutura else no final, tanto dos laços for quanto dos while. A utilização prática ou mesmo a necessidade de se ter este recurso desperta muitas dúvidas entre os programadores.

#O bloco de código associado ao else é executado quando saimos do laço sem a ocorrência do break.

#Vamos apenas colocar um exemplo para documentar o uso do mesmo.

for n in range(2, 10):
    for x in range(2, n):
        if n % x == 0:
            print(n, 'equals', x, '*', n//x)
            break
    else:
        print(n, 'is a prime number')  
      
for n in range(2, 10):
    for x in range(2, n):
        if n % x == 0:
            print(n, 'equals', x, '*', n//x)
            break
    #else:
    print(n, 'is a prime number')    
  
L = range(2, 10)
#L = range(2, 5) #Uma lista mais curta para que saia do laço sem chegar no break
print("L:", list(L))
print("Impares de L: [", end=' ')
for i in range(len(L)):
    if L[i]%2 == 0 :
        continue #pula para o fim da iteração atual e vai para a próxima iteração
    #Encerra o laço se o subscrito da lista for maior que 4, isto é a lista tem mais de 5 elementos
    if i > 12:
        break # sai completamente da execução do laço
    print(L[i], end=' ')   
else: 
    print("]")

#Funções, como utilizar e implementar
#Algoritmos simples podem ser implementados utilizando apenas variáveis e estruturas de controle de fluxo. O desenvolvimento de programas e códigos mais elaborados, exigem a utilização de funções, inclusive daquelas que aparecem na forma de métodos de classes. Paradigmas de programação como o de programação estruturada ou programação orientada a objetos, que visam entre outras coisas podermos reutilizar códigos e estruturar os mesmo de forma a simplificar seu desenvolvimento e posterior manutenção, nos leva à necessidade de aprendermos a implementar funções de forma eficiente.

#Que é uma função?
#Uma função não é mais que um bloco de código ou rotina, que pode ser utilizado múltiplas vezes e que permite estruturar o código de forma a garantir uma sequencia mais limpa e legível de instruções. O bloco sintáctico vinculado à função é sempre associado a um nome que serve para invocar a execução do mesmo a qualquer momento. Como na maioria das linguagens tradicionais, em Python, a chamada a uma funções evolve seu nome seguido de parêntesis que delimitam os parâmetros que deverão ser passados para a função. Mesmo funções que não recebem parâmetros são chamadas utilizando parêntesis. Os parêntesis ajudam a distinguir quando se esta fazendo referenciando uma variável ou fazendo a chamada a uma função.

#Semelhante ao conceito matemático de função, seu equivalente computacional pode ser utilizar para mapear um conjunto de entrada, ou domínio, em um conjunto de saída ou imagem. Entretanto as funções, computacionalmente falando, podem ter domínio vazio, não recebem parâmetros de entrada, e também podem ter imagem nula, não retornam nenhum resultado.

#Definindo funções
#Para se definir uma função em Python utilizamos a palavra chave def, seguido do nome da função e, entre parêntesis, os parâmetros de entrada. O bloco de instruções associado a aquela função pode ser declarado, seguindo a sintaxes apropriada em Python, ou seja utilizar : e indentação para delimitar o bloco de instruções associada à mesma. Uma função em Python é, então, um objeto que engloba um bloco sintáctico definido através da palavra chave def com a seguinte sintaxe:

#Função sem argumentos. Retorna uma string
def funSemArgumentos():
    # Bloco sintático
    return "Esta função não tem argumentos"

print(funSemArgumentos())

#Função com um argumento. Não retorna nada
def funUmArgumento(arg1):
    # Bloco sintático
    arg1.append(5) # Colocando um novo elemento  o final da lista

L = [1, 2, 3, 4]
print(funUmArgumento(L))
print(L)

#Função com dois argumentos. Retorna a adição dos mesmos    
def funDoisArgumentos(arg1, arg2):
    # Bloco sintático
    valor = arg1 + arg2 
    return valor

print(funDoisArgumentos(2,2))
print(funDoisArgumentos("a + ", "b = c"))
#print(funDoisArgumentos(2.0, "b = c"))

def funDoisArgumentos_change(arg1, arg2):
    # Bloco sintático
    arg1 = arg1 + 1
    valor = arg1 + arg2 
    return valor

a = 2
b = 3
print(a, b)
funDoisArgumentos_change(a, b)
print(a, b)

#A minhaFunção está definida de forma que ela não recebe parâmetros nem faz absolutamente nada. A palavra chave pass pode ser utilizada quando queremos deixar definido um bloco de código para o qual ainda não temos uma implementação apropriada.

#Vamos tentar um exemplo mais ilustrativo.

# Retorna os N primeiros termos da Sequência de Fibonacci
def fibonacci(N):
    L = [0]
    a, b = 0, 1
    while len(L) < N:
        a, b = b, a + b
        L.append(a)
    return L

#Reparem que na definição da função, ao contrário de linguagens mais tradicionais como C/C++, não estão incluídos o tipo de retorno da função ou os tipos dos parâmetros de entrada da mesma. Isto faz das funções em Python um instrumento muito versátil, capaz de retornar valores diversos. O mecanismo de passagem de parâmetros também é bastante inovador, mas sobre ele falaremos mais para frente.

#Vejam o exemplo a seguir que mostra como retornar múltiplos resultados:

def real_imag_conj(val):
    return val.real, val.imag, val.conjugate()

tripla = real_imag_conj(3 + 4j)

print(type(tripla))
print(type(tripla[0]),type(tripla[1]),type(tripla[2]))
print(tripla)

r, i, c = real_imag_conj(3 + 4j)
print(r, i, c)

#Vejamos outro exemplo. A função no próximo exemplo recebe dois parâmetros, sem especificar o tipo, e utiliza o operador adição com eles para gerar o valor de saída. A função pode trabalhar então com qualquer variável em Python para a qual esteja definido o operador adição.

def soma(a, b):
    #return a + b

print(soma(2, 2))
print(soma(2.0, 2))
print(soma(2.0, 2.0))
print(soma("dois + ", "dois = quatro"))
print(soma(2, "texto"))

#Isto significa que as funções em Python são essencialmente polimórficas. Isto é, elas se comportam de acordo com o tipo dos objetos com que estão trabalhando. Vejamos este outro exemplo.

def intersect(seq1, seq2):
    res = []
    for x in seq1:
        if x in seq2:
            res.append(x)
    return res

print(intersect("Modelagem", "viagem"))
print(intersect([1, 2, 3, 5, 7], [1, 2, 3, 4, 5, 6, 7]))

#As funções declaradas em Python viram objetos apenas quando são executadas. Como qualquer outra declaração, def pode ser utilizada nos contextos em que declarações são aceitas. Veja o seguinte exemplo em que declaramos uma nova função de acordo com um parâmetro booleano utilizando uma estrutura condicional if-else.

cond = True
#cond = False

if cond:
    def minhaSoma(a, b):
        return a + b
else:
    def minhaSoma(a, b):
        return (1/a + 1/b)

print (minhaSoma(2, 2))

#A palavra chave def cria um objeto, e “atribui” uma referência para o mesmo a uma variável que é o nome da função. Isto abre a possibilidade de utilizar nomes diferentes para uma mesma função. Veja o exemplo a seguir.

def soma(a, b):
    return a + b

adição = soma
print(adição(2, 2))
print(soma(2, 2))
print(type(soma))

#Escopo das variáveis
#Um aspecto importante a ser analisado na hora de implementar funções é o escopo das variáveis e os identificadores em Python. As regras de escopo estabelecem como variáveis e identificadores são procurados em nosso código e determinam a visibilidade (disponibilidade) de uma variável. O escopo de uma variável ou identificador depende do local do código onde esta variável foi criada.

#Local, escopo local ou de função: esta associado ao bloco de código de uma função ou expressão lambda. Compreende os identificadores que foram definidos no corpo da função, as variáveis estão disponíveis dentro da função. O escopo é criado quando a função é chamada (não na definição da função), teremos diferentes escopos para diferentes chamadas à função.

#Enclosing, escopo non-local ou de container: é um escopo especial que existe apenas quando temos funções aninhadas. Se o escopo local é uma função aninhada (inner), o escopo non-local é o escopo da função container (outer). Os identificadores criados na função container, também estão disponíveis na função aninhada.

#Global, escopo global ou de módulo: é o escopo mais alto ao executarmos um programa em Python. Esse escopo contem os identificadores criados fora de qualquer bloco de função, estes identificadores estão vísiveis em todo o código (exceto nos casos de ofuscamento do identificador).

#Built-in, escopo integrado: é um escopo especial, carregado automaticamente sempre que executamos código Python, este escopo contêm as palavras reservadas, as funções internas, as exceções e os atributos integrados na linguagens. Os identificadores e recursos deste escopo estão disponíveis em todo o programa.

#Ilustramos estes conceitos nos exemplos a seguir

# Escopo global
x = 99 # Aqui x é uma variável global

print("x Global = ", x)

def funçãoX(y): # y é uma variável Local da função
    #Escopo local
    # z é atribuída dentro do corpo da função (local)
    print("y Local = ", y)
    print("x Global = ", x)
    z = x + y  # já x, que não foi definido neste bloco, se refere à variável Global
    print("z Local = ", z)
    return z

# y e z não estão de finidas fora da função
try:
    print("z Local = ", z)
except: 
    print("Problemas!!!: ")

    
print("x Global = ", x)
print("função(1) --> ", funçãoX(1))

# Escopo global
x = 99 # Aqui x é uma variável global

def funçãoX():
    #Escopo local
    x = 11  # se cria uma nova referẽncia com o nome x, no escopo local, identificador ofuscado
    print("x Local = ", x)

    
print("x Global = ", x)
print("Chamando à funcãoX()")
funçãoX()
print("Mas x Global continua= ", x)

# Escopo global
x = 99 # Aqui x é uma variável global

def funçãoX():
    #Escopo local
    x = 11  # se cria uma nova referẽncia com o nome x, no escopo local, identificador ofuscado
    print("x Local = ", x)

    
print("x Global = ", x)
print("Chamando à funcãoX()")
funçãoX()
print("Mas x Global continua= ", x)

#O escopo de uma variável pode ser modificado utilizando as palavras chaves global e nonlocal. Veja uma pequena variação do exemplo anterior.

# Escopo global
x = 99
y = 33


def funçãoOut():
    #Escopo local e non-local
    # quando me refira a x dentro, da funçãoOut, ...
    global x # estou falando do x global
    print("x Global dentro da funçãoOut = ", x)
    x = 11
    # já este y é local da função, ...
    y = 88 # diferente do y de escopo global
    
    def funçãoIn():
        #Escopo nonlocal
        # quando me refira a y dentro, da funçãoIn, ...
        nonlocal y # estou falando do y local da funçãoOut
        print("y NonLocal dentro da funçãoIn = ", y)
        y = 22
        
    print("y Local dentro da funçãoOut = ", y)
    print("\nChamando à funcãoIn()")
    funçãoIn()
    print("Agora y Local é = ", y)
   
print ("x Global = ", x)
print ("y Global = ", y)
print("\nChamando à funcãoOut()")
funçãoOut()
print("\nAgora x Global é = ", x)
print("E y Global é = ", y)

#Passagem de parâmetros
#Em linguagens de programação a passagem de parâmetros para funções pode ser feita, de forma geral, de duas formas: por valor ou por referência.

#Na passagem de parâmetros por valor, cria-se dentro da função, uma cópia da variável original de forma que, alterações feitas dentro da função não afetam o valor originalmente armazenado. Na passagem por referência recebemos na função uma referência associada ao endereço da variável de origem. Por este motivo, modificações feitas neste contexto afetam o valor da variável fora da função.

#Em Python a passagem de parâmetros é feita da seguinte forma:

#Os argumentos (variáveis locais) recebem referências aos objetos enviados como parâmetros;
#Modifcar os objetos usando as referências locais afetará o objeto original a depender do tipo de dados;
#Para objetos mutáveis referenciados por parâmetros da função as variáveis originais serão modificadas;
#Para objetos inmutáveis as mudanças na função não afetam o objeto original.
#Neste sentido, mesmo que a passagem de parâmetros em Python é sempre feita por referência, os efeitos práticos podem ser considerados como:

#A passagem de objetos mutáveis é feita por referência
#A passagem de objetos imutáveis é feita por valor
#Analizemos alguns exemplos.

def funçãoPorValor(a):
    print("Endereco de a (pre-operacao):", hex(id(a)));
    a = a*a # valores numéricos geram objetos inmutáveis
    print("Endereco de a (pos-operacao):", hex(id(a)));

b = 2
print("Endereco de b:", hex(id(b)));
funçãoPorValor(b)
print(b)

def funçãoPorReferência(a):
    print("Endereco de a (pre-operacao):", hex(id(a)));
    try:
        a[0] = "Mudei" # Listas são sempre objetos mutáveis
    except:
        print("Erro!!!")
    print("Endereco de a (pos-operacao):", hex(id(a)));

#Usando uma lista como parâmetros
b = [1, 2, 3]
print("Endereco de b:", hex(id(b)));
print("b:", b)
funçãoPorReferência(b)
print("b:", b)

#Usando uma tupla como parâmetros
c = (1, 2, 3)
print("\nEndereco de c:", hex(id(c)));
print("c:", c)
funçãoPorReferência(c)
print("c:", c)

#Na maioria das linguagens de programação no cabeçalho ou prototipo de uma função ficam definidos os identificadores e os tipos dos parâmetros que a função recebe e a ordem em que eles devem ser enviados. Python conta com alguns mecanismos que permitem criar chamadas a funções muito mais flexíveis.

#Em adição ao mecanismo tradicional (posicional), podem-se destacar outros dois:

#Uso dos identificadores dos parâmetros
#Valores predefinidos
# A funçãoY tem três parâmetros de entrada. Pela sua ordem eles são a, b e c
def funçãoY(a, b, c):
    print("a=", a, "b=", b, "c=", c)

# Posso chamar colocando apenas os valores 
# Neste caso a associação dos parâmetros com os valores é posicional
funçãoY(1, 2, 3) # isto significa que a recebe 1, b recebe 2 e c recebe 3

# Usando os identificadores dos parâmetros
# posso especificar o valor que cada parâmetro vai receber
funçãoY(c = 4, a = 7, b = 1) # isto significa que a recebe 7 b recebe 1 e c recebe 4

# Posso utilizar parcialmente a ordem e os identificadores        
funçãoY(4, c = 2, b = 5) # isto significa que a recebe 4, b recebe 5 e c recebe 2

#Desta forma Python permite que você seja mais específico na hora de chamar a função. Identificar o que você está passando para uma função deixa seu código bem mais interessante e fácil de ler.

'''
A funçãoY tem três parâmetros de entrada. 
a: com valor padrão 1
b: com valor padrão 2 
c: com valor padrão 3
'''
def funçãoY(a = 1, b = 2, c = 3):
    print("a=", a, "b=", b, "c=", c)

# Posso chamar a função sem parâmetros   
funçãoY() # os parâmetros tem seus valores padrão

# Posso chamar a função passando valores explicitamente, pela ordem  
funçãoY(4, 5, 6) # isto significa que a recebe 4, b recebe 5 e c recebe 6

# Posso chamar a função passando valores explicitamente, pelo nome
funçãoY(c = 6, a = 4, b = 5) # isto significa que a recebe 4, b recebe 5 e c recebe 6

# Posso chamar a função passando valores explicitamente, pela ordem e pelo nome
funçãoY(1, c = 6, b = 5) # isto significa que a recebe 1, b recebe 5 e c recebe 6

# Posso chamar a função passando valores explicitamente, pela ordem e/ou pelo nome
funçãoY(a=7) # e deixar alguns parâmetros com seus valores implícitos

#Python ainda permite função com uma quantidade indeterminada de parâmetros. Com esta finalidade a função deve ser declarada da seguinte forma.

def funFlexL(*ListaDeParâmetros):
    print(len(ListaDeParâmetros))
    print(ListaDeParâmetros, "\n")
    
# ou

def funFlexD(**DicionarioDeParâmetros):
    print(DicionarioDeParâmetros, "\n")
    
# ou ainda

def funFlexLD(*ListaDeParâmetros, **DicionarioDeParâmetros):
    print(ListaDeParâmetros)
    print(DicionarioDeParâmetros, "\n")
    
    
#Podemos agora usar da seguinte forma

funFlexL(1, 'a', 2.0, [1,3])
funFlexD(a = 1, beta = 'a', y = 2.0, L = [1,3])
funFlexLD(1, 'a',y = 2.0, L = [1,3])
