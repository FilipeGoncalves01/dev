#include <stdio.h>

     int main (){ 


      int Torre = 0, Rainha =0, Bispo=0;
      
      // optei por usar o while para o Torre.
      printf("Torre:\n");
      while (Torre <=4)
      {
        printf("Torre movel para a direita \n");

        Torre++;
      }
      
      printf("A torre se movel 5 casas para a direita\n");
      printf("\n");
      printf("Bispo:\n");
    //Saindo do loop optei por colocar a mensagem acima para ficar ao mais legal para o jogador.


     // Para o do-while escohi o bispo.
      do
      {
         printf("Cima,direita\n");
          Bispo++;


      } while (Bispo <=4);
      printf("o bispo se movel 5 casa para, cima,direita.\n");
      // por ultimo deixo a mais poderosa peça do nosso xadrez
      printf("Rainha:\n");
      for ( Rainha = 0; Rainha <=7 ; Rainha++)
      {
        printf("Rainha se movel para a esquerda\n");

      }
        printf("Rainha se movel 8 casas para a esquerda\n");

      //......................................................................
      //                          Desafio aventureiro
      //                          MOVIMENTO DO CAVALO
      
printf("\n");
printf("CAVALO:\n");
      int Cavalo = 1;

      while (Cavalo--)
      {
      for (int i= 0; i < 2; i++)
      {
        printf("Cima\n");
      }
         
       printf("direita\n");

      }
      printf("O cavalo se movimentou duas casas para cima e uma para a direita\n");

        }
        
         
  







