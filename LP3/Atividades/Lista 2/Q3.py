import random


def main():

  i, ponto = 1, 0
  print("Bem vindo ao Craps")
  print("Partida: ")

  jogada1 = random.randint(1, 6)
  jogada2 = random.randint(1, 6)

  print("Dado 1: " + str(jogada1) + " Dado 2: " + str(jogada2))
  resultado = jogada1 + jogada2
  print("Pontuacao inicial: ", resultado)

  if (resultado == 7 or resultado == 11):
    print("Parabens voce venceu!")
    return
  elif (resultado == 2 or resultado == 3 or resultado == 12):
    print("Que pena, voce perdeu! Craps!")
    return

  while (resultado != ponto and ponto != 7):

    print("Rodada ", i)
    i += 1

    jogada1 = random.randint(1, 6)
    jogada2 = random.randint(1, 6)

    ponto = jogada1 + jogada2

    print("Dado 1: " + str(jogada1) + " Dado 2: " + str(jogada2))
    print("Pontuação da rodada: ", ponto)
    print("Pontuação desejada: ", resultado)

  if (ponto == resultado): print("Parabens, voce venceu")
  else: print("Que pena, voce perdeu! Craps!!")

  return


main()