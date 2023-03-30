import java.util.Scanner;
import java.lang.Math;

class Main {
  public static void main(String[] args) {
    System.out.println("Hello world!");

    Scanner sc = new Scanner(System.in);
    int i;
    double media = 0, dv=0;
    double[] m = new double[10];

    for(i=0;i<10;i++){
      m[i] = sc.nextDouble();
      media +=  m[i];
    }

    media /= 10;

    for(i=0;i<10;i++){
      dv += (Math.pow((m[i]-media),2));
    }

    dv /= 10;
    dv = Math.sqrt(dv);

    System.out.println("Medidas:");
    
    for(i=0;i<10;i++){
      System.out.println(m[i]+" ");
    }

    System.out.println("Media:");
    System.out.println(media);
    System.out.println("Desvio padrao:");
    System.out.println(dv);
    if((0.1*media)>dv) System.out.println("O multrimetro funcina devidamente");
    else  System.out.println("O multrimetro nao funcina devidamente");
    
  }
}