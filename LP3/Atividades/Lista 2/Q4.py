l0 = ['-','-','-','-','-']
l1 = ['-','-','-','-','-']
l2 = ['-','-','-','-','-']
l3 = ['-','-','-','-','-']
l4 = ['-','-','-','-','-']
mapa1 = [l0,l1,l2,l3,l4]
l0 = ['-','-','-','-','-']
l1 = ['-','-','-','-','-']
l2 = ['-','-','-','-','-']
l3 = ['-','-','-','-','-']
l4 = ['-','-','-','-','-']
mapa2 = [l0,l1,l2,l3,l4]
l0 = ['-','-','-','-','-']
l1 = ['-','-','-','-','-']
l2 = ['-','-','-','-','-']
l3 = ['-','-','-','-','-']
l4 = ['-','-','-','-','-']
tiro1 = [l0,l1,l2,l3,l4]
l0 = ['-','-','-','-','-']
l1 = ['-','-','-','-','-']
l2 = ['-','-','-','-','-']
l3 = ['-','-','-','-','-']
l4 = ['-','-','-','-','-']
tiro2 = [l0,l1,l2,l3,l4]

vida1 = 5
vida2 = 5


print("WELCOMO TO BATTLESHIP!!",end="\n\n")
print("Para posicionar seus 5 navios, diga primeiro em que Linha voce deseja o colocar, confirme a posicao e depois digite o numero de sua Coluna")

for i in range(10):
  if(i<5):
    print("Player 1, digite as cordenadas do seu navio: ")
    x = int(input("Linha: "))
    y = int(input("Coluna: "))
    while(x<0 or y<0 or x>4 or y>4):
      print("Invalid coordinates. Choose different coordinates.")
      print("Player 1, digite as cordenadas do seu navio: ")
      x = int(input("Linha: "))
      y = int(input("Coluna: "))
      
      
    while(mapa1[x][y]=='@'):
      print("You already have a ship there. Choose different coordinates.")
      print("Player 1, digite as cordenadas do seu navio: ")
      x = int(input("Linha: "))
      y = int(input("Coluna: "))
      
    mapa1[x][y]='@'      
  
    for j in range(5):
      for i in range(5):
        print(mapa1[j][i], end= "    ")
      print(end="\n\n")
    
  else:
    print("Player 2, digite as cordenadas do seu navio: ")
    x = int(input("Linha: "))
    y = int(input("Coluna: "))
    while(x<0 or y<0 or x>4 or y>4):
      print("Invalid coordinates. Choose different coordinates.")
      print("Player 2, digite as cordenadas do seu navio: ")
      x = int(input("Linha: "))
      y = int(input("Coluna: "))
      
    while(mapa2[x][y]=='@'):
      print("You already have a ship there. Choose different coordinates.")
      print("Player 2, digite as cordenadas do seu navio: ")
      x = int(input("Linha: "))
      y = int(input("Coluna: "))
      
    mapa2[x][y]='@'

    for j in range(5):
      for i in range(5):
        print(mapa2[j][i], end= "    ")
      print(end="\n\n")

print("DADOS COLETADOS, QUE COMECE A BATALHA!")

for i in range(625):
  if(i%2 == 0):
    print("Player 1, digite as cordenadas do seu tiro: ")
    x = int(input("Linha: "))
    y = int(input("Coluna: "))
    while(x<0 or y<0 or x>4 or y>4):
      print("Invalid coordinates. Choose different coordinates.")
      print("Player 1, digite as cordenadas do seu tiro: ")
      x = int(input("Linha: "))
      y = int(input("Coluna: "))
    while(tiro1[x][y] == 'O' or tiro1[x][y] == 'X'):
      print("You already fired on this spot. Choose different coordinates.")
      print("Player 1, digite as cordenadas do seu tiro: ")
      x = int(input("Linha: "))
      y = int(input("Coluna: "))
    if(mapa2[x][y]=='@'):
      tiro1[x][y] = 'X'
      mapa2[x][y] = 'X' 
      vida2-=1
      print("Player 1 hit Player 2’s Ship!!!")
    else:
      tiro1[x][y] = 'O'
      print("Player 1 MISSED!")
      
    for j in range(5):
      for i in range(5):
        print(tiro1[j][i], end= "    ")
      print(end="\n\n")
      
  else:
    print("Player 2, digite as cordenadas do seu tiro: ")
    x = int(input("Linha: "))
    y = int(input("Coluna: "))
    while(x<0 or y<0 or x>4 or y>4):
      print("Invalid coordinates. Choose different coordinates.")
      print("Player 2, digite as cordenadas do seu tiro: ")
      x = int(input("Linha: "))
      y = int(input("Coluna: "))
    while(tiro2[x][y] == 'O' or tiro2[x][y] == 'X'):
      print("You already fired on this spot. Choose different coordinates.")
      print("Player 2, digite as cordenadas do seu tiro: ")
      x = int(input("Linha: "))
      y = int(input("Coluna: "))
    if(mapa1[x][y]=='@'):
      tiro2[x][y] = 'X'
      mapa1[x][y] = 'X' 
      vida1-=1
      print("Player 2 hit Player 1’s Ship!!!")
    else:
      tiro2[x][y] = 'O'
      print("Player 2 MISSED!")
      
    for j in range(5):
      for i in range(5):
        print(tiro2[j][i], end= "    ")
      print(end="\n\n")
  if(vida1 == 0 or vida2==0): break

print()

if(vida1 == 0):
   print("Player 2 WINS! You sunk all of your opponent’s ships!")
else:
  print("Player 1 WINS! You sunk all of your opponent’s ships!")

print("Navios do Player 1: ")
print()

for j in range(5):
      for i in range(5):
        print(mapa1[j][i], end= "    ")
      print(end="\n\n")

print("Navios do Player 2: ")
print()

for j in range(5):
      for i in range(5):
        print(mapa2[j][i], end= "    ")
      print(end="\n\n")
    