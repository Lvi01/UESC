//Aluno: Levi Silva Freitas
//Matrícula: 202210351  Matéria: LPI

//BIBLIOTECAS UTILIZADAS:

#include<time.h>
#include<stdio.h>
#include<stdlib.h>

//COMANDOS PARA AS CORES UTILIZADAS NO LABIRINTO:

#define RESET          "\x1b[0m"

#define RED            "\x1b[31m"
#define YELLOW         "\033[33m"
#define GREEN          "\033[32m"

#define FUNDO_GRAY     "\033[47m"
#define FUNDO_MAGENTA  "\033[45m"
#define FUNDO_RED      "\033[41m"
#define FUNDO_GREEN    "\033[42m"

//CONSTANTES UTILIZADAS NA MATRIZ:

#define TAM_NOME 100
#define TAM_LINHA 15
#define TAM_COLUNA 22


int main(void)
{
    int resposta=0, estrelas=0, energia=100, x, y; //Onde x é a linha da matriz e y é a coluna.
    char  nome[TAM_NOME], comando, posx, posy;

    char mapa2[TAM_LINHA][TAM_COLUNA]={
      {1,1,1,1,1,1,1,1,1,1},
      {1,3,0,0,0,0,0,0,8,1},
      {1,1,1,1,1,1,1,1,0,1},
      {1,8,0,0,0,0,0,0,0,1},
      {1,0,1,1,1,1,1,1,1,1},
      {1,0,0,0,0,8,0,0,0,4},
      {1,1,1,1,1,1,1,1,1,1}};

    char mapa3[TAM_LINHA][TAM_COLUNA]={
      {1,1,1,1,1,1,1,1,1,1},
      {1,8,0,0,0,0,0,0,8,1},
      {1,0,1,1,1,1,1,1,0,1},
      {1,0,1,3,0,0,0,5,0,1},
      {1,0,1,1,1,1,1,1,0,1},
      {1,8,0,0,0,0,0,0,0,4},
      {1,1,1,1,1,1,1,1,1,1}};

    char mapa[TAM_LINHA][TAM_COLUNA]={
      {1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1},
      {1,3,0,0,1,0,0,0,0,1,0,1,8,1,0,0,0,1,0,0,0,4},
      {1,0,1,0,1,1,1,0,1,1,0,1,0,1,1,0,1,1,0,1,1,1},
      {1,0,1,0,0,0,0,0,0,1,0,0,0,0,0,0,0,1,0,7,0,1},
      {1,0,1,1,1,1,1,1,0,1,1,1,0,1,1,1,0,1,0,1,0,1},
      {1,0,0,0,0,0,0,1,0,1,0,1,0,1,0,1,0,1,0,1,0,1},
      {1,1,1,1,1,1,1,1,0,1,0,0,6,0,0,1,0,1,8,1,0,1},
      {1,0,1,0,0,0,0,0,0,1,0,1,0,1,0,1,0,1,1,1,0,1},
      {1,0,1,0,1,1,1,1,0,1,0,1,0,1,1,1,0,0,0,1,0,1},
      {1,0,1,0,1,0,0,0,0,1,0,1,0,1,0,1,0,1,0,1,0,1},
      {1,0,1,0,1,1,1,1,1,1,1,1,0,1,0,1,0,1,0,1,0,1},
      {1,0,0,5,0,0,0,0,0,0,0,0,0,1,0,1,0,1,0,1,0,1},
      {1,0,1,1,1,1,1,1,1,1,0,1,1,1,0,1,1,1,0,1,0,1},
      {1,8,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,0,0,0,1},
      {1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1}};

      char mapaD[TAM_LINHA][TAM_COLUNA]={
      {1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1},
      {1,3,0,0,1,9,0,0,0,1,0,1,8,1,0,0,12,1,0,0,0,4},
      {1,0,1,0,1,1,1,0,1,1,0,1,0,1,1,0,1,1,0,1,1,1},
      {1,0,1,0,0,0,0,0,0,1,0,0,0,0,0,0,0,1,0,7,0,1},
      {1,0,1,1,1,1,1,1,0,1,1,1,0,1,1,1,0,1,0,1,0,1},
      {1,0,0,0,0,0,2,1,0,1,0,1,0,1,0,1,0,1,0,1,0,1},
      {1,1,1,1,1,1,1,1,0,1,0,0,6,0,0,1,11,1,8,1,0,1},
      {1,0,1,0,0,0,0,0,0,1,0,1,0,1,0,1,0,1,1,1,0,1},
      {1,0,1,10,1,1,1,1,0,1,0,1,0,1,1,1,0,0,0,1,0,1},
      {1,0,1,0,1,0,0,0,0,1,0,1,0,1,0,1,0,1,0,1,0,1},
      {1,0,1,0,1,1,1,1,1,1,1,1,0,1,0,1,0,1,0,1,0,1},
      {1,0,0,5,0,0,0,0,0,0,0,0,0,1,0,1,0,1,0,1,0,1},
      {1,0,1,1,1,1,1,1,1,1,0,1,1,1,0,1,1,1,0,1,0,1},
      {1,8,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,0,0,0,1},
      {1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1}};


    do{
        printf("\n\n\n\t\t\t\tSEJA BEM VINDO\n");
        printf("\n\t\t\t\tO que gostaria de fazer?");
        printf("\n\t\t\t\t1. Jogar Modo campanha");
        printf("\n\t\t\t\t2. Jogar Desafio");
        printf("\n\t\t\t\t3. Sair do jogo\n");
        printf("\n\t\t\t\tDigite o NUMERO de sua resposta: ");
        scanf("%c", &resposta);
        scanf("%*[^\n]");
        scanf("%*c");

        system("clear||cls");

    } while (resposta != '1' && resposta!= '2' && resposta!= '3');

    //TUTÓRIAL

    if(resposta=='1'){
        do{
        printf("\n\n\n\t\tBem vindo ao tutorial escrito:");
        printf("\n\t\tAqui voce ira aprender os comandos necessarios para jogar.\n");
        printf("\n\t\t1. No que diz respeito a movimentacao:");
        printf("\n\t\t\tPara se mover para CIMA aperte ---"); printf(RED " W " RESET); printf("--- E depois confirme seu comando com a tecla ENTER.");
        printf("\n\t\t\tPara se mover para BAIXO aperte ---"); printf(RED " S " RESET); printf("--- E depois confirme seu comando com a tecla ENTER.");
        printf("\n\t\t\tPara se mover para DIREITA aperte ---"); printf(RED " D " RESET); printf("--- E depois confirme seu comando com a tecla ENTER.");
        printf("\n\t\t\tPara se mover para ESQUERDA aperte ---"); printf(RED " A " RESET); printf("--- E depois confirme seu comando com a tecla ENTER.");
        printf("\n\t\t2. No que diz respeito aos comandos gerais: ");
        printf("\n\t\t\tA tecla ENTER tem como objetivo confimar qualquer comando dado pelo usuario.");
        printf("\n\t\t\tDentro do jogo, voce pode apertar a tecla SPACE e depois confimar seu comando para sair do jogo.");
        printf(RED "\n\n\t\t\tOBS 1: APENAS TECLAS VALIDAS SAO ACEITAS COMO COMANDOS." RESET);
        printf(RED "\n\t\t\tOBS 2: APENAS A PRIMEIRA LETRA DO SEU COMANDO SERA CONSIDERADA PELO CONSOLE.\n\n\n" RESET);
        printf("\t\tUma vez que voce esteja confortavel com os comandos, aperte 0.");
        printf("\n\t\tVoce esta pronto: ");
        scanf("%c", &resposta);
        scanf("%*[^\n]");
        scanf("%*c");

        system("clear||cls");

        } while(resposta!= '0');

        //HISTÓRIA

        printf("\n\n\n\t\tSeja bem vindo, "); printf(RED "Experimento#3784001\n" RESET);
        printf("\n\t\tAqui suas habilidades de raciocinio logico serao colocadas a teste.\n");
        printf("\n\t\tO nivel de dificuldade dos desafios ira aumentar a medida que voce avance.\n");
        printf("\n\t\tMas antes de darmos inico ao experimento, diga-me, como vc gostaria de ser chamado?\n");
        printf("\n\n\t\t\t> ");
        scanf("%s", nome);
        scanf("%*[^\n]");
        scanf("%*c");

        system("clear||cls");


        do{
            printf("\n\n\n\t\tTudo bem, ");

            printf(RED "%s." RESET , &nome);


            //HISTÓRIA

            printf("\n\n\t\tVamos dar inicio a FASE#01 de nosso experimento.\n");
            printf("\n\t\tControle seu personagem com base nas regras que foram apresentadas a voce anteriormente.\n");
            printf("\n\t\tNao se preocupe, irei te acompanhar durante nossa jornada.\n");
            printf("\n\t\tUma vez que voce esteja pronto, aperte 0.\n");
            printf("\n\t\tPois bem, voce esta pronto?\n");
            printf("\n\n\t\t\t> ");
            scanf("%c", &resposta);
            scanf("%*[^\n]");
            scanf("%*c");
            system("clear||cls");

        } while(resposta!= '0');

        //RESETANDO AS VARIAVEIS:

        energia=10;

        //FASE#02

        do{
            printf("\n\n");
            printf("\tJOGADOR: %s\n", nome);

            if(energia>6){

                printf(GREEN "\tENERGIA: %3d/10" RESET, energia);
                printf("\n\n");
            }
            else if (energia<3){
                printf(RED "\tENERGIA: %3d/10" RESET, energia);
                printf("\n\n");
            }
                else{
                    printf(YELLOW "\tENERGIA: %3d/10" RESET, energia);
                    printf("\n\n");
                }

        //EXIBINDO OS ELEMENTOS NA TELA

            for(x=0;x<TAM_LINHA;x++){
                printf("\t");
                for(y=0;y<TAM_COLUNA;y++){
                        if(mapa2[x][y] == 3){
                            printf(FUNDO_RED "  " RESET); //Representação do jogador
                            posx=x;
                            posy=y;
                        }

                        else switch(mapa2[x][y]){
                                case 0: printf("  "); break;                       // Espaço em branco
                                case 1: printf(FUNDO_GRAY "  " RESET); break;      // Parede
                                case 2: printf("  "); break;                       // Armadilha
                                case 5: printf(FUNDO_MAGENTA "  " RESET); break;   // Puzzle
                                case 6: printf(FUNDO_MAGENTA "  " RESET); break;   // Puzzle
                                case 7: printf(FUNDO_MAGENTA "  " RESET); break;   // Puzzle
                                case 8: printf(YELLOW "**" RESET); break;          // Estrela
                                case 4: printf(FUNDO_GREEN "  " RESET); break;     // Saida
                        }
                }
                printf("\n");
            }

            //REGISTRO DA PONTUAÇÃO:

            if(estrelas==3){
                printf(YELLOW "\n\tESTRELAS: %d/3" RESET, estrelas);
                printf("\n\n");
            }
            else{
                printf("\n\tESTRELAS: %d/3", estrelas);
                printf("\n\n");
            }

            //RECEBENDO O COMANDO O JOGADOR:

            printf("\t>");
            scanf("%c",&comando);
            scanf("%*[^\n]");
            scanf("%*c");
            printf("\n");

            //VALIDANDO E TESTANDO O COMANDO DO JOGADOR:
            //Testa as 4 direções, e as possiveis interações com elementos do labirinto.

            if (comando=='d' || comando=='D'){
                mapa2[posx][posy]=0;

                if(mapa2[posx][posy+1]==0 || mapa2[posx][posy+1]==4){
                    mapa2[posx][posy+1]=3;
                    energia-=1;
                }

                else if(mapa2[posx][posy+1]==8){
                        mapa2[posx][posy+1]=3;
                        energia+=5;
                        estrelas+=1;
                }

                            else {
                                mapa2[posx][posy]=3;
                                energia-=2;
                                printf("\t\t\t  OUTCH!!!\n\t\t  Voce bateu em uma parede!\n\t   Aperte ENTER novamente para continuar...");
                                scanf("%*[^\n]");
                                scanf("%*c");
                            }
            }

            else if (comando=='w' || comando=='W'){

                    mapa2[posx][posy]=0;

                    if(mapa2[posx-1][posy]==0){
                        mapa2[posx-1][posy]=3;
                        energia-=1;
                    }

                    else {
                        mapa2[posx][posy]=3;
                        energia-=2;
                        printf("\t\t\t  OUTCH!!!\n\t\t  Voce bateu em uma parede!\n\t   Aperte ENTER novamente para continuar...");
                        scanf("%*[^\n]");
                        scanf("%*c");
                        }
            }

                 else if (comando=='s' || comando=='S'){
                        mapa2[posx][posy]=0;

                        if(mapa2[posx+1][posy]==0){
                            mapa2[posx+1][posy]=3;
                            energia-=1;
                        }

                                else {
                                    mapa2[posx][posy]=3;
                                    energia-=2;
                                    printf("\t\t\t  OUTCH!!!\n\t\t  Voce bateu em uma parede!\n\t   Aperte ENTER novamente para continuar...");
                                    scanf("%*[^\n]");
                                    scanf("%*c");
                                }
                    }



                      else if (comando=='a' || comando=='A'){
                                mapa2[posx][posy]=0;

                            if(mapa2[posx][posy-1]==0){
                                mapa2[posx][posy-1]=3;
                                energia-=1;
                            }

                            else if(mapa2[posx][posy-1]==8){
                                mapa2[posx][posy-1]=3;
                                energia+=5;
                                estrelas+=1;
                            }


                                else {
                                    mapa2[posx][posy]=3;
                                    energia-=2;
                                    printf("\t\t\t  OUTCH!!!\n\t\t  Voce bateu em uma parede!\n\t   Aperte ENTER novamente para continuar...");
                                    scanf("%*[^\n]");
                                    scanf("%*c");
                                }
                        }


                            else if(comando==' '){

                                printf("\n\tVoce se rende?\n\t1. Sim...\n\t2. So tava testando mesmo kkk");
                                printf("\n\tDiga o numero de sua resposta: ");
                                scanf("%d%*c",&resposta);

                                if(resposta==1){
                                    printf("\n\n\t\t---- LEVI: 1 x VOCE: 0 ----\n\n\n");
                                    return 0;
                                }
                                if(resposta==2) {
                                    printf("\n\tTudo bem, mas se lembre esse nao e um labirinto normal...\n\tAperte ENTER novamente para continuar...");
                                    scanf("%*[^\n]");
                                    scanf("%*c");
                                }

                            }
                                else{

                                    printf("\t\t    ERRO: COMANDO INVALIDO\n\t    Aperte ENTER novamente para continuar...");
                                    scanf("%*[^\n]");
                                    scanf("%*c");
                                }

            if(energia<=0){
                printf("\n\tTao perto... Mas tao longe...");
                printf("\n\tParece que o jogo acaba aqui para voce...");
                printf("\n\tTenha mais cuidado na proxima vez...");
                printf("\n");
                return 0;
            }

            system("clear||cls");

        } while (mapa2[5][9] != 3); // <- CONDIÇÃO DE PARADA CASO O JOGADOR CHEGUE AO FIM DO LABIRINTO.

        //HISTÓRIA

        printf("\n\n\t\tParabens!! Voce consegiu completar a FASE#01\n");
        printf("\n\n\n\t\tEstou muito orgulhoso, ");
        printf(RED "%s.\n" RESET , &nome);
        printf("\n\t\tEspero que nessa fase voce tenha entendido a importancia da energia.\n");
        printf("\n\t\tAlem disso, percebeu que coletar estrelas recupera um pouco de sua energia.\n");
        printf("\n\t\tAlem de chegar ao fim das fases, busque coletar todas as estrelas pelo mapa.\n");
        printf("\n\t\tIsso e o que difere um bom explorador de um iniciante.\n");
        printf("\n\t\tPois bem, uma vez que voce esteja pronto para ir para nova fase, aperte 0.\n");
        printf("\n\t\tVoce esta pronto?\n");
        printf("\n\n\t\t\t> ");
        scanf("%c", &resposta);
        scanf("%*[^\n]");
        scanf("%*c");

        system("clear||cls");

        //RESETANDO AS VARIAVEIS:

        energia=10;
        estrelas=0;

        //FASE#02

        do{
        printf("\n\n");
        printf("\tJOGADOR: %s\n", nome);

            if(energia>6){

                printf(GREEN "\tENERGIA: %3d/10" RESET, energia);
                printf("\n\n");
            }
            else if (energia<3){
                printf(RED "\tENERGIA: %3d/10" RESET, energia);
                printf("\n\n");
            }
                else{
                    printf(YELLOW "\tENERGIA: %3d/10" RESET, energia);
                    printf("\n\n");
                }

        //EXIBINDO OS ELEMENTOS NA TELA

            for(x=0;x<TAM_LINHA;x++){
                printf("\t");
                for(y=0;y<TAM_COLUNA;y++){
                        if(mapa3[x][y] == 3){
                            printf(FUNDO_RED "  " RESET); //Representação do jogador
                            posx=x;
                            posy=y;
                        }

                        else switch(mapa3[x][y]){
                                case 0: printf("  "); break;                       // Espaço em branco
                                case 1: printf(FUNDO_GRAY "  " RESET); break;      // Parede
                                case 5: printf(FUNDO_MAGENTA "  " RESET); break;   // Puzzle
                                case 8: printf(YELLOW "**" RESET); break;          // Estrela
                                case 4: printf(FUNDO_GREEN "  " RESET); break;     // Saida
                        }
                }
                printf("\n");
            }

            //REGISTRO DA PONTUAÇÃO:

            if(estrelas==3){
                printf(YELLOW "\n\tESTRELAS: %d/3" RESET, estrelas);
                printf("\n\n");
            }
            else{
                printf("\n\tESTRELAS: %d/3", estrelas);
                printf("\n\n");
            }

            //RECEBENDO O COMANDO O JOGADOR:

            printf("\t>");
            scanf("%c",&comando);
            scanf("%*[^\n]");
            scanf("%*c");
            printf("\n");

            //VALIDANDO E TESTANDO O COMANDO DO JOGADOR:
            //Testa as 4 direções, e as possiveis interações com elementos do labirinto.

            if (comando=='d' || comando=='D'){
                mapa3[posx][posy]=0;

                if(mapa3[posx][posy+1]==0 || mapa3[posx][posy+1]==4){
                    mapa3[posx][posy+1]=3;
                    energia-=1;
                }

                else if(mapa3[posx][posy+1]==8){
                        mapa3[posx][posy+1]=3;
                        energia+=5;
                        estrelas+=1;
                }

                else if(mapa3[posx][posy+1]==5){

                        printf("\tVoce se encontra diante de um puzzle.\n");
                        printf("\tNele esta gravada a seguinte charada: \n");
                        printf("\t0 + 7 = 7\n");
                        printf("\t1 + 8 = 16\n");
                        printf("\t2 + 9 = 27\n");
                        printf("\t5 + 7 = ?\n");
                        printf("\t1. 49\n"); printf("\t2. 102\n"); printf("\t3. 13\n");
                        printf("\tDigite o NUMERO de sua resposta: ");
                        scanf("%d", &resposta);
                        scanf("%*[^\n]");
                        scanf("%*c");

                        if(resposta==3){
                            printf(GREEN "\n\tRESPOSTA CORRETA\n\tAperte ENTER novamente para continuar..." RESET);
                            scanf("%*[^\n]");
                            scanf("%*c");
                            mapa3[posx][posy+1]=3;
                            energia+=3;
                        }

                        else{
                            mapa3[posx][posy]=3;
                            printf(RED "\n\tRESPOSTA ERRADA\n\tAperte ENTER novamente para continuar..." RESET);
                            scanf("%*[^\n]");
                            scanf("%*c");
                            energia-=5;
                        }
                }

                    else {
                        mapa3[posx][posy]=3;
                        energia-=2;
                        printf("\t\t\t  OUTCH!!!\n\t\t  Voce bateu em uma parede!\n\t   Aperte ENTER novamente para continuar...");
                        scanf("%*[^\n]");
                        scanf("%*c");
                    }
            }

            else if (comando=='w' || comando=='W'){

                    mapa3[posx][posy]=0;

                    if(mapa3[posx-1][posy]==0){
                        mapa3[posx-1][posy]=3;
                        energia-=1;
                    }

                    else if(mapa3[posx-1][posy]==8){
                        mapa3[posx-1][posy]=3;
                        energia+=2;
                        estrelas+=1;
                    }

                        else {
                            mapa3[posx][posy]=3;
                            energia-=2;
                            printf("\t\t\t  OUTCH!!!\n\t\t  Voce bateu em uma parede!\n\t   Aperte ENTER novamente para continuar...");
                            scanf("%*[^\n]");
                            scanf("%*c");
                            }
            }

                 else if (comando=='s' || comando=='S'){
                        mapa3[posx][posy]=0;

                        if(mapa3[posx+1][posy]==0){
                            mapa3[posx+1][posy]=3;
                            energia-=1;
                        }

                        else if(mapa3[posx+1][posy]==8){
                            mapa3[posx+1][posy]=3;
                            energia+=4;
                            estrelas+=1;
                        }

                            else {
                                mapa3[posx][posy]=3;
                                energia-=2;
                                printf("\t\t\t  OUTCH!!!\n\t\t  Voce bateu em uma parede!\n\t   Aperte ENTER novamente para continuar...");
                                scanf("%*[^\n]");
                                scanf("%*c");
                            }
                    }



                      else if (comando=='a' || comando=='A'){
                                mapa3[posx][posy]=0;

                            if(mapa3[posx][posy-1]==0){
                                mapa3[posx][posy-1]=3;
                                energia-=1;
                            }

                            else if(mapa3[posx][posy-1]==8){
                                mapa3[posx][posy-1]=3;
                                energia+=5;
                                estrelas+=1;
                            }


                                else {
                                    mapa3[posx][posy]=3;
                                    energia-=2;
                                    printf("\t\t\t  OUTCH!!!\n\t\t  Voce bateu em uma parede!\n\t   Aperte ENTER novamente para continuar...");
                                    scanf("%*[^\n]");
                                    scanf("%*c");
                                }
                        }


                            else if(comando==' '){

                                printf("\n\tVoce se rende?\n\t1. Sim...\n\t2. So tava testando mesmo kkk");
                                printf("\n\tDiga o numero de sua resposta: ");
                                scanf("%d%*c",&resposta);

                                if(resposta==1){
                                    printf("\n\n\t\t---- LEVI: 1 x VOCE: 0 ----\n\n\n");
                                    return 0;
                                }
                                if(resposta==2) {
                                    printf("\n\tTudo bem, mas se lembre esse nao e um labirinto normal...\n\tAperte ENTER novamente para continuar...");
                                    scanf("%*[^\n]");
                                    scanf("%*c");
                                }

                            }
                                else{

                                    printf("\t\t    ERRO: COMANDO INVALIDO\n\t    Aperte ENTER novamente para continuar...");
                                    scanf("%*[^\n]");
                                    scanf("%*c");
                                }

            if(energia<=0){
                printf("\n\tTao perto... Mas tao longe...");
                printf("\n\tParece que o jogo acaba aqui para voce...");
                printf("\n\tTenha mais cuidado na proxima vez...");
                printf("\n");
                return 0;
            }

            system("clear||cls");

        } while (mapa3[5][9] != 3); // <- CONDIÇÃO DE PARADA CASO O JOGADOR CHEGUE AO FIM DO LABIRINTO.

        //HISTÓRIA:

        printf("\n\n\t\tParabens!! Voce consegiu completar a FASE#02\n");
        printf("\n\n\n\t\tNao esperava menos de voce, ");
        printf(RED "%s.\n" RESET , &nome);
        printf("\n\t\tAqui voce aprendeu como passar por caminhos bloqueados\n");
        printf("\n\t\tNote que, ao errar a resposta, uma pena e aplicada, entao tenha cuidado.\n");
        printf("\n\t\tEntretanto, muitas vezes sera impossivel ignorar os Puzzles.\n");
        printf("\n\t\tCom isso, voce ja esta pronto para iniciar o desafio final. Tome cuidado! \n");
        printf("\n\n\t\tVamos dar inicio a FASE#03 de nosso experimento.\n");
        printf("\n\n\t\tEle sera um conjunto de tudo que voce viu ate aqui. Te desejo boa sorte!\n");
        printf("\n\t\tPois bem, uma vez que voce esteja pronto para ir para nova fase, aperte 0.\n");
        printf("\n\t\tVoce esta pronto?\n");
        printf("\n\n\t\t\t> ");
        scanf("%c", &resposta);
        scanf("%*[^\n]");
        scanf("%*c");

        system("clear||cls");

        //RESENTANDO AS VARIAVEIS:

        energia=100;
        estrelas=0;

        //FASE#03:

        do{

            printf("\n\n");
            printf("\t\t\tJOGADOR: %s\n", nome);

            if(energia>66){

                printf(GREEN "\t\t\tENERGIA: %3d/100" RESET, energia);
                printf("\n\n");
            }
            else if (energia<33){
                printf(RED "\t\t\tENERGIA: %3d/100" RESET, energia);
                printf("\n\n");
            }
                else{
                    printf(YELLOW "\t\t\tENERGIA: %3d/100" RESET, energia);
                    printf("\n\n");
                }

            //EXIBINDO OS ELEMENTOS NA TELA

            for(x=0;x<TAM_LINHA;x++){
                printf("\t");
                for(y=0;y<TAM_COLUNA;y++){
                        if(mapa[x][y] == 3){
                            printf(FUNDO_RED "  " RESET); //Representação do jogador
                            posx=x;
                            posy=y;
                        }

                        else switch(mapa[x][y]){
                                case 0: printf("  "); break;                       // Espaço em branco
                                case 1: printf(FUNDO_GRAY "  " RESET); break;      // Parede
                                case 2: printf("  "); break;                       // Armadilha
                                case 5: printf(FUNDO_MAGENTA "  " RESET); break;   // Puzzle
                                case 6: printf(FUNDO_MAGENTA "  " RESET); break;   // Puzzle
                                case 7: printf(FUNDO_MAGENTA "  " RESET); break;   // Puzzle
                                case 8: printf(YELLOW "**" RESET); break;          // Estrela
                                case 4: printf(FUNDO_GREEN "  " RESET); break;     // Saida
                        }
                }
                printf("\n");
            }

            //REGISTRO DA PONTUAÇÃO:

            if(estrelas==3){
                printf(YELLOW "\n\t\t\tESTRELAS: %d/3" RESET, estrelas);
                printf("\n\n");
            }
            else{
                printf("\n\t\t\tESTRELAS: %d/3", estrelas);
                printf("\n\n");
            }

            //RECEBENDO O COMANDO O JOGADOR:

            printf("\t\t\t    >");
            scanf("%c",&comando);
            scanf("%*[^\n]");
            scanf("%*c");
            printf("\n");

            //VALIDANDO E TESTANDO O COMANDO DO JOGADOR:
            //Testa as 4 direções, e as possiveis interações com elementos do labirinto.

            if (comando=='d' || comando=='D'){
                mapa[posx][posy]=0;

                if(mapa[posx][posy+1]==0 || mapa[posx][posy+1]==4){
                    mapa[posx][posy+1]=3;
                    energia-=1;
                }

                else if(mapa[posx][posy+1]==8){
                        mapa[posx][posy+1]=3;
                        energia+=5;
                        estrelas+=1;
                }

                            else {
                                mapa[posx][posy]=3;
                                energia-=2;
                                printf("\t\t\t  OUTCH!!!\n\t\t  Voce bateu em uma parede!\n\t   Aperte ENTER novamente para continuar...");
                                scanf("%*[^\n]");
                                scanf("%*c");
                            }
            }

            else if (comando=='w' || comando=='W'){

                    mapa[posx][posy]=0;

                    if(mapa[posx-1][posy]==0){
                        mapa[posx-1][posy]=3;
                        energia-=1;
                    }

                    else if(mapa[posx-1][posy]==8){
                            mapa[posx-1][posy]=3;
                            energia+=5;
                            estrelas+=1;
                            }

                            else if(mapa[posx-1][posy]==6){

                                    printf("\tVoce se encontra diante de um puzzle.\n");
                                    printf("\tNele esta gravada a seguinte charada: \n");
                                    printf("\tA mae dividiu 20 balas entre as duas filhas. Que horas são?\n");
                                    printf("\t1. 10:02\n"); printf("\t2. 20:02\n"); printf("\t3. 13:50\n");
                                    printf("\tDigite o NUMERO de sua resposta: ");
                                    scanf("%d", &resposta);
                                    scanf("%*[^\n]");
                                    scanf("%*c");

                                    if(resposta==3){
                                        printf(GREEN "\n\tRESPOSTA CORRETA\n\tAperte ENTER novamente para continuar..." RESET);
                                        scanf("%*[^\n]");
                                        scanf("%*c");
                                        mapa[posx-1][posy]=3;
                                        energia+=5;
                                    }
                                    else{
                                        mapa[posx][posy]=3;
                                        printf(RED "\n\tRESPOSTA ERRADA\n\tAperte ENTER novamente para continuar..." RESET);
                                        scanf("%*[^\n]");
                                        scanf("%*c");
                                        energia-=10;
                                    }
                            }

                        else {
                            mapa[posx][posy]=3;
                            energia-=2;
                            printf("\t\t\t  OUTCH!!!\n\t\t  Voce bateu em uma parede!\n\t   Aperte ENTER novamente para continuar...");
                            scanf("%*[^\n]");
                            scanf("%*c");
                        }
            }

                 else if (comando=='s' || comando=='S'){
                        mapa[posx][posy]=0;

                        if(mapa[posx+1][posy]==0){
                            mapa[posx+1][posy]=3;
                            energia-=1;
                        }

                        else if(mapa[posx+1][posy]==8){
                                mapa[posx+1][posy]=3;
                                energia+=5;
                                estrelas+=1;
                            }

                            else if(mapa[posx+1][posy]==5){

                                    printf("\tVoce se encontra diante de um puzzle.\n");
                                    printf("\tNele esta gravada a seguinte charada: \n");
                                    printf("\tMeu avo tem 5 filhos, cada filho tem 3 filhos. Quantos primos eu tenho?\n");
                                    printf("\t1. 15\n"); printf("\t2. 12\n"); printf("\t3. 14\n");
                                    printf("\tResposta: ");
                                    scanf("%d", &resposta);
                                    scanf("%*[^\n]");
                                    scanf("%*c");

                                    if(resposta==2 || resposta==12){
                                        printf(GREEN "\n\tRESPOSTA CORRETA\n\tAperte ENTER novamente para continuar..." RESET);
                                        scanf("%*[^\n]");
                                        scanf("%*c");
                                        mapa[posx+1][posy]=3;
                                        energia+=5;
                                    }
                                    else{
                                        mapa[posx][posy]=3;
                                        printf(RED "\n\tRESPOSTA ERRADA\n\tAperte ENTER novamente para continuar..." RESET);
                                        scanf("%*[^\n]");
                                        scanf("%*c");
                                        energia-=10;
                                    }
                            }

                                else {
                                    mapa[posx][posy]=3;
                                    energia-=2;
                                    printf("\t\t\t  OUTCH!!!\n\t\t  Voce bateu em uma parede!\n\t   Aperte ENTER novamente para continuar...");
                                    scanf("%*[^\n]");
                                    scanf("%*c");
                                }
                    }



                      else if (comando=='a' || comando=='A'){
                                mapa[posx][posy]=0;

                            if(mapa[posx][posy-1]==0){
                                mapa[posx][posy-1]=3;
                                energia-=1;
                            }

                            else if(mapa[posx][posy-1]==8){
                                mapa[posx][posy-1]=3;
                                energia+=5;
                                estrelas+=1;
                            }

                            else if(mapa[posx][posy-1]==7){

                                    printf("\tVoce se encontra diante de um puzzle.\n");
                                    printf("\tNele esta gravada a seguinte charada: \n");
                                    printf("\tQual o número da sequência 3, 13, 30 ...?\n");
                                    printf("\t1. 1\n"); printf("\t2. 31\n"); printf("\t3. 200\n");
                                    printf("\tDigite o NUMERO de sua resposta: ");
                                    scanf("%d", &resposta);
                                    scanf("%*[^\n]");
                                    scanf("%*c");

                                    if(resposta==2){
                                        printf(GREEN "\n\tRESPOSTA CORRETA\n\tAperte ENTER novamente para continuar..." RESET);
                                        scanf("%*[^\n]");
                                        scanf("%*c");
                                        mapa[posx][posy-1]=3;
                                        energia+=5;
                                    }
                                    else{
                                        mapa[posx][posy]=3;
                                        printf(RED "\n\tRESPOSTA ERRADA\n\tAperte ENTER novamente para continuar..." RESET);
                                        scanf("%*[^\n]");
                                        scanf("%*c");
                                        energia-=10;
                                    }
                            }

                                else {
                                    mapa[posx][posy]=3;
                                    energia-=2;
                                    printf("\t\t\t  OUTCH!!!\n\t\t  Voce bateu em uma parede!\n\t   Aperte ENTER novamente para continuar...");
                                    scanf("%*[^\n]");
                                    scanf("%*c");
                                }
                        }


                            else if(comando==' '){

                                printf("\n\tVoce se rende?\n\t1. Sim...\n\t2. So tava testando mesmo kkk");
                                printf("\n\tDiga o numero de sua resposta: ");
                                scanf("%d%*c",&resposta);

                                if(resposta==1){
                                    printf("\n\n\t\t---- LEVI: 1 x VOCE: 0 ----\n\n\n");
                                    return 0;
                                }
                                if(resposta==2) {
                                    printf("\n\tTudo bem, mas se lembre esse nao e um labirinto normal...\n\tAperte ENTER novamente para continuar...");
                                    scanf("%*[^\n]");
                                    scanf("%*c");
                                }

                            }
                                else{

                                    printf("\t\t    ERRO: COMANDO INVALIDO\n\t    Aperte ENTER novamente para continuar...");
                                    scanf("%*[^\n]");
                                    scanf("%*c");
                                }

            //CONDIÇÃO DE PARADA PARA MORTE DO JOGADOR:

            if(energia<=0){
                printf("\t\t   Tao perto... Mas tao longe...");
                printf("\n\t     Parece que o jogo acaba aqui para voce...");
                printf("\n\t\tTenha mais cuidado na proxima vez...");
                printf("\n");
                return 0;
            }

            system("clear||cls");

        } while (mapa[1][21]!= 3); // <- CONDIÇÃO DE PARADA CASO O JOGADOR CHEGUE AO FIM DO LABIRINTO.

        printf("\n\n\t\tPARABENS, VOCE CONSEGUIU CHEGAR A SAIDA!!!");
        printf("\n\n\t\t   OBRIGADO POR JOGAR, VOLTE SEMPRE!\n\n\n");

        return 0;
        }

        //DESAFIO:

        else if(resposta=='2'){

            printf("\n\n\n\t\t\t\tDigite o nome que sera usado: ");
        scanf("%s", nome);
        scanf("%*[^\n]");
        scanf("%*c");

        system("clear||cls");

        do{

            printf("\n\n");
            printf("\t\t\tJOGADOR: %s\n", nome);

            if(energia>66){

                printf(GREEN "\t\t\tENERGIA: %3d/100" RESET, energia);
                printf("\n\n");
            }
            else if (energia<33){
                printf(RED "\t\t\tENERGIA: %3d/100" RESET, energia);
                printf("\n\n");
            }
                else{
                    printf(YELLOW "\t\t\tENERGIA: %3d/100" RESET, energia);
                    printf("\n\n");
                }

            //EXIBINDO OS ELEMENTOS NA TELA

            for(x=0;x<TAM_LINHA;x++){
                printf("\t");
                for(y=0;y<TAM_COLUNA;y++){
                        if(mapaD[x][y] == 3){
                            printf(FUNDO_RED "  " RESET); //Representação do jogador
                            posx=x;
                            posy=y;
                        }

                        else switch(mapaD[x][y]){
                                case 0: printf("  "); break;                       // Espaço em branco
                                case 1: printf(FUNDO_GRAY "  " RESET); break;      // Parede
                                case 2: printf("  "); break;                       // Atalho
                                case 5: printf(FUNDO_MAGENTA "  " RESET); break;   // Puzzle
                                case 6: printf(FUNDO_MAGENTA "  " RESET); break;   // Puzzle
                                case 7: printf(FUNDO_MAGENTA "  " RESET); break;   // Puzzle
                                case 8: printf(YELLOW "**" RESET); break;          // Estrela
                                case 9: printf("  "); break;                       // Atalho
                                case 10: printf("  "); break;                      // Armadilha
                                case 11: printf("  "); break;                      // Armadilha
                                case 12: printf("  "); break;                       // Atalho
                                case 4: printf(FUNDO_GREEN "  " RESET); break;     // Saida
                        }
                }
                printf("\n");
            }

            //REGISTRO DA PONTUAÇÃO:

            if(estrelas==3){
                printf(YELLOW "\n\t\t\tESTRELAS: %d/3" RESET, estrelas);
                printf("\n\n");
            }
            else{
                printf("\n\t\t\tESTRELAS: %d/3", estrelas);
                printf("\n\n");
            }

            //RECEBENDO O COMANDO O JOGADOR:

            printf("\t\t\t    >");
            scanf("%c",&comando);
            scanf("%*[^\n]");
            scanf("%*c");
            printf("\n");

            //VALIDANDO E TESTANDO O COMANDO DO JOGADOR:
            //Testa as 4 direções, e as possiveis interações com elementos do labirinto.

            if (comando=='d' || comando=='D'){
                mapaD[posx][posy]=0;

                if(mapaD[posx][posy+1]==0 || mapaD[posx][posy+1]==4){
                    mapaD[posx][posy+1]=3;
                    energia-=1;
                }

                else if(mapaD[posx][posy+1]==8){
                        mapaD[posx][posy+1]=3;
                        energia+=5;
                        estrelas+=1;
                }

                        else if(mapaD[posx][posy+1]==2){
                            mapaD[posx][posy+1]==0;
                            mapaD[1][10]=3;
                            printf("\tVoce encontrou um atalho...\n\tAperte ENTER novamente para continuar...");
                            scanf("%*[^\n]");
                            scanf("%*c");
                        }

                        else if(mapaD[posx][posy+1]==12){
                            mapaD[posx][posy+1]==0;
                            mapaD[11][16]=3;
                            printf("\tVoce encontrou um atalho...\n\tAperte ENTER novamente para continuar...");
                            scanf("%*[^\n]");
                            scanf("%*c");
                        }

                         else if(mapaD[posx][posy+1]==6){

                                    printf("\tVoce se encontra diante de um puzzle.\n");
                                    printf("\tNele esta gravada a seguinte charada: \n");
                                    printf("\tA mae dividiu 20 balas entre as duas filhas. Que horas são?\n");
                                    printf("\t1. 10:02\n"); printf("\t2. 20:02\n"); printf("\t3. 13:50\n");
                                    printf("\tDigite o NUMERO de sua resposta: ");
                                    scanf("%d", &resposta);
                                    scanf("%*[^\n]");
                                    scanf("%*c");

                                    if(resposta==3){
                                        printf(GREEN "\n\tRESPOSTA CORRETA\n\tAperte ENTER novamente para continuar..." RESET);
                                        scanf("%*[^\n]");
                                        scanf("%*c");
                                        mapaD[posx][posy+1]=3;
                                        energia+=5;
                                    }
                                    else{
                                        mapaD[posx][posy]=3;
                                        printf(RED "\n\tRESPOSTA ERRADA\n\tAperte ENTER novamente para continuar..." RESET);
                                        scanf("%*[^\n]");
                                        scanf("%*c");
                                        energia-=10;
                                    }
                            }

                            else {
                                mapaD[posx][posy]=3;
                                energia-=2;
                                printf("\t\t\t  OUTCH!!!\n\t\t  Voce bateu em uma parede!\n\t   Aperte ENTER novamente para continuar...");
                                scanf("%*[^\n]");
                                scanf("%*c");
                            }
            }

            else if (comando=='w' || comando=='W'){

                    mapaD[posx][posy]=0;

                    if(mapaD[posx-1][posy]==0){
                        mapaD[posx-1][posy]=3;
                        energia-=1;
                    }

                    else if(mapaD[posx-1][posy]==8){
                            mapaD[posx-1][posy]=3;
                            energia+=5;
                            estrelas+=1;
                            }

                            else if(mapaD[posx-1][posy]==6){

                                    printf("\tVoce se encontra diante de um puzzle.\n");
                                    printf("\tNele esta gravada a seguinte charada: \n");
                                    printf("\tA mae dividiu 20 balas entre as duas filhas. Que horas são?\n");
                                    printf("\t1. 10:02\n"); printf("\t2. 20:02\n"); printf("\t3. 13:50\n");
                                    printf("\tDigite o NUMERO de sua resposta: ");
                                    scanf("%d", &resposta);
                                    scanf("%*[^\n]");
                                    scanf("%*c");

                                    if(resposta==3){
                                        printf(GREEN "\n\tRESPOSTA CORRETA\n\tAperte ENTER novamente para continuar..." RESET);
                                        scanf("%*[^\n]");
                                        scanf("%*c");
                                        mapaD[posx-1][posy]=3;
                                        energia+=5;
                                    }
                                    else{
                                        mapaD[posx][posy]=3;
                                        printf(RED "\n\tRESPOSTA ERRADA\n\tAperte ENTER novamente para continuar..." RESET);
                                        scanf("%*[^\n]");
                                        scanf("%*c");
                                        energia-=10;
                                    }
                            }

                        else {
                            mapaD[posx][posy]=3;
                            energia-=2;
                            printf("\t\t\t  OUTCH!!!\n\t\t  Voce bateu em uma parede!\n\t   Aperte ENTER novamente para continuar...");
                            scanf("%*[^\n]");
                            scanf("%*c");
                        }
            }

                 else if (comando=='s' || comando=='S'){
                        mapaD[posx][posy]=0;

                        if(mapaD[posx+1][posy]==0){
                            mapaD[posx+1][posy]=3;
                            energia-=1;
                        }

                        else if(mapaD[posx+1][posy]==8){
                                mapaD[posx+1][posy]=3;
                                energia+=5;
                                estrelas+=1;
                            }

                            else if(mapaD[posx+1][posy]==10){
                            mapaD[posx+1][posy]==0;
                            mapaD[1][1]=3;
                            energia-=20;
                            printf("\tVoce caiu em um buraco...\n");
                            printf("\tVoce foi atacado por ratos nesse tunel... \n\tAperte ENTER novamente para continuar...");
                            scanf("%*[^\n]");
                            scanf("%*c");
                        }

                        else if(mapaD[posx+1][posy]==11){
                            mapaD[posx+1][posy]==0;
                            mapaD[9][10]=3;
                            energia-=10;
                            printf("\tVoce caiu em um buraco...\n");
                            printf("\tAlgumas baratas te assustaram... \n\tAperte ENTER novamente para continuar...");
                            scanf("%*[^\n]");
                            scanf("%*c");
                        }

                        else if(mapaD[posx+1][posy]==6){

                                    printf("\tVoce se encontra diante de um puzzle.\n");
                                    printf("\tNele esta gravada a seguinte charada: \n");
                                    printf("\tA mae dividiu 20 balas entre as duas filhas. Que horas são?\n");
                                    printf("\t1. 10:02\n"); printf("\t2. 20:02\n"); printf("\t3. 13:50\n");
                                    printf("\tDigite o NUMERO de sua resposta: ");
                                    scanf("%d", &resposta);
                                    scanf("%*[^\n]");
                                    scanf("%*c");

                                    if(resposta==3){
                                        printf(GREEN "\n\tRESPOSTA CORRETA\n\tAperte ENTER novamente para continuar..." RESET);
                                        scanf("%*[^\n]");
                                        scanf("%*c");
                                        mapaD[posx+1][posy]=3;
                                        energia+=5;
                                    }
                                    else{
                                        mapaD[posx][posy]=3;
                                        printf(RED "\n\tRESPOSTA ERRADA\n\tAperte ENTER novamente para continuar..." RESET);
                                        scanf("%*[^\n]");
                                        scanf("%*c");
                                        energia-=10;
                                    }
                            }

                            else if(mapaD[posx+1][posy]==5){

                                    printf("\tVoce se encontra diante de um puzzle.\n");
                                    printf("\tNele esta gravada a seguinte charada: \n");
                                    printf("\tMeu avo tem 5 filhos, cada filho tem 3 filhos. Quantos primos eu tenho?\n");
                                    printf("\t1. 15\n"); printf("\t2. 12\n"); printf("\t3. 14\n");
                                    printf("\tResposta: ");
                                    scanf("%d", &resposta);
                                    scanf("%*[^\n]");
                                    scanf("%*c");

                                    if(resposta==2 || resposta==12){
                                        printf(GREEN "\n\tRESPOSTA CORRETA\n\tAperte ENTER novamente para continuar..." RESET);
                                        scanf("%*[^\n]");
                                        scanf("%*c");
                                        mapaD[posx+1][posy]=3;
                                        energia+=5;
                                    }
                                    else{
                                        mapaD[posx][posy]=3;
                                        printf(RED "\n\tRESPOSTA ERRADA\n\tAperte ENTER novamente para continuar..." RESET);
                                        scanf("%*[^\n]");
                                        scanf("%*c");
                                        energia-=10;
                                    }
                            }

                                else {
                                    mapaD[posx][posy]=3;
                                    energia-=2;
                                    printf("\t\t\t  OUTCH!!!\n\t\t  Voce bateu em uma parede!\n\t   Aperte ENTER novamente para continuar...");
                                    scanf("%*[^\n]");
                                    scanf("%*c");
                                }
                    }



                      else if (comando=='a' || comando=='A'){
                                mapaD[posx][posy]=0;

                            if(mapaD[posx][posy-1]==0){
                                mapaD[posx][posy-1]=3;
                                energia-=1;
                            }

                            else if(mapaD[posx][posy-1]==8){
                                mapaD[posx][posy-1]=3;
                                energia+=5;
                                estrelas+=1;
                            }

                            else if(mapaD[posx][posy-1]==5){

                                    printf("\tVoce se encontra diante de um puzzle.\n");
                                    printf("\tNele esta gravada a seguinte charada: \n");
                                    printf("\tMeu avo tem 5 filhos, cada filho tem 3 filhos. Quantos primos eu tenho?\n");
                                    printf("\t1. 15\n"); printf("\t2. 12\n"); printf("\t3. 14\n");
                                    printf("\tResposta: ");
                                    scanf("%d", &resposta);
                                    scanf("%*[^\n]");
                                    scanf("%*c");

                                    if(resposta==2 || resposta==12){
                                        printf(GREEN "\n\tRESPOSTA CORRETA\n\tAperte ENTER novamente para continuar..." RESET);
                                        scanf("%*[^\n]");
                                        scanf("%*c");
                                        mapaD[posx][posy-1]=3;
                                        energia+=5;
                                    }
                                    else{
                                        mapaD[posx][posy]=3;
                                        printf(RED "\n\tRESPOSTA ERRADA\n\tAperte ENTER novamente para continuar..." RESET);
                                        scanf("%*[^\n]");
                                        scanf("%*c");
                                        energia-=10;
                                    }
                            }

                            else if(mapaD[posx][posy-1]==9){
                            mapaD[posx][posy-1]==0;
                            mapaD[13][3]=3;
                            printf("\tVoce encontrou um atalho...\n\tAperte ENTER novamente para continuar...");
                            scanf("%*[^\n]");
                            scanf("%*c");
                        }

                            else if(mapaD[posx][posy-1]==7){

                                    printf("\tVoce se encontra diante de um puzzle.\n");
                                    printf("\tNele esta gravada a seguinte charada: \n");
                                    printf("\tQual o número da sequência 3, 13, 30 ...?\n");
                                    printf("\t1. 1\n"); printf("\t2. 31\n"); printf("\t3. 200\n");
                                    printf("\tDigite o NUMERO de sua resposta: ");
                                    scanf("%d", &resposta);
                                    scanf("%*[^\n]");
                                    scanf("%*c");

                                    if(resposta==2){
                                        printf(GREEN "\n\tRESPOSTA CORRETA\n\tAperte ENTER novamente para continuar..." RESET);
                                        scanf("%*[^\n]");
                                        scanf("%*c");
                                        mapaD[posx][posy-1]=3;
                                        energia+=5;
                                    }
                                    else{
                                        mapaD[posx][posy]=3;
                                        printf(RED "\n\tRESPOSTA ERRADA\n\tAperte ENTER novamente para continuar..." RESET);
                                        scanf("%*[^\n]");
                                        scanf("%*c");
                                        energia-=10;
                                    }
                            }

                                else {
                                    mapaD[posx][posy]=3;
                                    energia-=2;
                                    printf("\t\t\t  OUTCH!!!\n\t\t  Voce bateu em uma parede!\n\t   Aperte ENTER novamente para continuar...");
                                    scanf("%*[^\n]");
                                    scanf("%*c");
                                }
                        }


                            else if(comando==' '){

                                printf("\n\tVoce se rende?\n\t1. Sim...\n\t2. So tava testando mesmo kkk");
                                printf("\n\tDiga o numero de sua resposta: ");
                                scanf("%d%*c",&resposta);

                                if(resposta==1){
                                    printf("\n\n\t\t---- LEVI: 1 x VOCE: 0 ----\n\n\n");
                                    return 0;
                                }
                                if(resposta==2) {
                                    printf("\n\tTudo bem, mas se lembre esse nao e um labirinto normal...\n\tAperte ENTER novamente para continuar...");
                                    scanf("%*[^\n]");
                                    scanf("%*c");
                                }

                            }
                                else{

                                    printf("\t\t    ERRO: COMANDO INVALIDO\n\t    Aperte ENTER novamente para continuar...");
                                    scanf("%*[^\n]");
                                    scanf("%*c");
                                }

            //CONDIÇÃO DE PARADA PARA MORTE DO JOGADOR:

            if(energia<=0){
                printf("\t\t   Tao perto... Mas tao longe...");
                printf("\n\t     Parece que o jogo acaba aqui para voce...");
                printf("\n\t\tTenha mais cuidado na proxima vez...");
                printf("\n");
                return 0;
            }

            system("clear||cls");

        } while (mapaD[1][21]!= 3); // <- CONDIÇÃO DE PARADA CASO O JOGADOR CHEGUE AO FIM DO LABIRINTO.

        printf("\n\n\t\tPARABENS, VOCE CONSEGUIU CHEGAR A SAIDA!!!");
        printf("\n\n\t\t   OBRIGADO POR JOGAR, VOLTE SEMPRE!\n\n\n");

        return 0;
        }

        else if(resposta=='3'){
            printf("Obrigado por participar!");
            return 0;
        }

    return 0;
        }
