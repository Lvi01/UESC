import java.util.Random;
import java.util.Scanner;


class Main {
  public static void main(String[] args) {
  Scanner sc = new Scanner(System.in);

  int jogada1, jogada2, resultado, ponto=0, i=1;

  Random random = new Random();

  System.out.println("Bem vindo ao Craps");
  System.out.println("Partida: ");

  jogada1 = random.nextInt(6)+1;
  jogada2 = random.nextInt(6)+1;  

  System.out.println("Dado 1: "+jogada1+" Dado 2: "+jogada2);

  resultado = jogada1 + jogada2;

  System.out.println("Pontuação inicial: "+resultado);

  if(resultado == 7 || resultado==11) {
    System.out.println("Parabens voce venceu!");
    return;
  }
  else if(resultado==2 || resultado==3 || resultado==12) {
    System.out.println("Que pena, voce perdeu! Craps!");
    return;
  }

  while(resultado != ponto && ponto != 7){
    
    System.out.println("Rodada "+i);
    i++;
    
    jogada1 = random.nextInt(6)+1;
    jogada2 = random.nextInt(6)+1;  
  
    System.out.println("Dado 1: "+jogada1+" Dado 2: "+jogada2);
  
    ponto = jogada1 + jogada2;
    System.out.println("Pontuação da rodada: "+ponto);
    System.out.println("Pontuação desejada: "+resultado);
  }

  if(ponto==resultado) System.out.println("Parabens voce venceu!");
  else System.out.println("Que pena, voce perdeu! Craps!");

  sc.close();
    
  }
  
}
