import java.util.Scanner;

class Main {
  public static void main(String[] args) {

    Scanner sc = new Scanner(System.in);
    
    int x,y, vida1=5, vida2=5;
    char[][] mapa1={{'-','-','-','-','-'},
                    {'-','-','-','-','-'},
                    {'-','-','-','-','-'},
                    {'-','-','-','-','-'},
                    {'-','-','-','-','-'}};
    
    char[][] mapa2={{'-','-','-','-','-'},
                    {'-','-','-','-','-'},
                    {'-','-','-','-','-'},
                    {'-','-','-','-','-'},
                    {'-','-','-','-','-'}};

    char[][] tiro1={{'-','-','-','-','-'},
                    {'-','-','-','-','-'},
                    {'-','-','-','-','-'},
                    {'-','-','-','-','-'},
                    {'-','-','-','-','-'}};
    
    char[][] tiro2={{'-','-','-','-','-'},
                    {'-','-','-','-','-'},
                    {'-','-','-','-','-'},
                    {'-','-','-','-','-'},
                    {'-','-','-','-','-'}};
    
    System.out.println("WELCOMO TO BATTLESHIP!!");
    //Pego as entradas pras posições dos navios, quis usar função nao, trabalho dms;
    for(int i=0;i<10;i++){
      if(i<5){
        System.out.println("Player 1, digite as cordenadas do seu navio: ");
        x = sc.nextInt(); y = sc.nextInt();
        while(x<0 || y<0 || x>4 || y>4){
          System.out.println("Invalid coordinates. Choose different coordinates.");
          System.out.println("Player 1, digite as cordenadas do seu navio: ");
          x = sc.nextInt(); y = sc.nextInt();
        }
        while(mapa1[x][y]=='@'){
          System.out.println("You already have a ship there. Choose different coordinates.");
          System.out.println("Player 1, digite as cordenadas do seu navio: ");
          x = sc.nextInt(); y = sc.nextInt();
        }
        mapa1[x][y]='@';
        for(int j=0;j<5;j++){
          for(int k=0;k<5;k++){
            System.out.print(mapa1[j][k]+"  ");
          }
          System.out.print('\n');
        }
      }
      else{
        System.out.println("Player 2, digite as cordenadas do seu navio: ");
        x = sc.nextInt(); y = sc.nextInt();
        while(x<0 || y<0 || x>4 || y>4){
          System.out.println("Invalid coordinates. Choose different coordinates.");
          System.out.println("Player 2, digite as cordenadas do seu navio: ");
          x = sc.nextInt(); y = sc.nextInt();
        }
        while(mapa2[x][y]=='@'){
          System.out.println("You already have a ship there. Choose different coordinates.");
          System.out.println("Player 2, digite as cordenadas do seu navio: ");
          x = sc.nextInt(); y = sc.nextInt();
        }
        mapa2[x][y]='@';
        for(int j=0;j<5;j++){
          for(int k=0;k<5;k++){
            System.out.print(mapa2[j][k]+"  ");
          }
          System.out.print('\n');
        }
      }
    } //mapas feitos e testados

    /*for(int j=0;j<5;j++){
      for(int i=0;i<5;i++){
        System.out.print(mapa2[j][i]+"  ");
      }
      System.out.print('\n');
    }*/

    System.out.println("DADOS COLETADOS, QUE COMECE A BATALHA!");

    for(int i=1; vida1 != 0 && vida2 != 0; i++){
      if(i%2 != 0){
        System.out.println("Player 1, digite as cordenadas do seu ataque: ");
        x = sc.nextInt(); y = sc.nextInt();
        while(x<0 || y<0 || x>4 || y>4){
          System.out.println("Invalid coordinates. Choose different coordinates.");
          System.out.println("Player 1, digite as cordenadas do seu navio: ");
          x = sc.nextInt(); y = sc.nextInt();
        }
        while(tiro1[x][y] == 'O' || tiro1[x][y] == 'X'){
          System.out.println("You already fired on this spot. Choose different coordinates.");
          System.out.println("Player 1, digite as cordenadas do seu tiro: ");
          x = sc.nextInt(); y = sc.nextInt();
        }
        if(mapa2[x][y]=='@'){
          tiro1[x][y] = 'X';
          mapa2[x][y] = 'X'; 
          vida2--;
          System.out.println("Player 1 hit Player 2’s Ship!!!");
        }
        else{
          tiro1[x][y] = 'O';
          System.out.println("Player 1 MISSED!");
        }
        for(int j=0;j<5;j++){
          for(int k=0;k<5;k++){
            System.out.print(tiro1[j][k]+"  ");
          }
          System.out.print('\n');
        }
      }
      else{
        System.out.println("Player 2, digite as cordenadas do seu ataque: ");
        x = sc.nextInt(); y = sc.nextInt();
        while(x<0 || y<0 || x>4 || y>4){
          System.out.println("Invalid coordinates. Choose different coordinates.");
          System.out.println("Player 2, digite as cordenadas do seu navio: ");
          x = sc.nextInt(); y = sc.nextInt();
        }
        while(tiro2[x][y] == 'O' || tiro2[x][y] == 'X'){
          System.out.println("You already fired on this spot. Choose different coordinates.");
          System.out.println("Player 1, digite as cordenadas do seu tiro: ");
          x = sc.nextInt(); y = sc.nextInt();
        }
        if(mapa1[x][y]=='@'){
          tiro2[x][y] = 'X';
          mapa1[x][y] = 'X'; 
          vida1--;
          System.out.println("Player 2 hit Player 1’s Ship!!!");
        }
        else{
          tiro2[x][y] = 'O';
          System.out.println("Player 2 MISSED!");
        }
        for(int j=0;j<5;j++){
          for(int k=0;k<5;k++){
            System.out.print(tiro2[j][k]+"  ");
          }
          System.out.print('\n');
        }
      }
    }//testei nao

    if(vida1 == 0){
       System.out.println("Player 2 WINS! You sunk all of your opponent’s ships!");
    }
    else System.out.println("Player 1 WINS! You sunk all of your opponent’s ships!");

    System.out.println("Localização do Player 1: ");
    
    for(int j=0;j<5;j++){
      for(int k=0;k<5;k++){
         System.out.print(mapa1[j][k]+"  ");
      }
      System.out.print('\n');
    }
    
    System.out.println("Localização do Player 2: ");
    for(int j=0;j<5;j++){
      for(int k=0;k<5;k++){
         System.out.print(mapa2[j][k]+"  ");
      }
      System.out.print('\n');
    }
    
  }
}