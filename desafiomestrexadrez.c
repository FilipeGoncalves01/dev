#include <stdio.h>
// movimentação do cavalo em 5 casas para a direita
void torre (int casa){

    if (casa > 0)
    {
      printf("direita\n");

      torre(casa -1);
    }
   
}

void rainha(int casa){

    if (casa > 0)
    {
      printf("direita\n");

      rainha(casa -1);
    }
   
}

void Bispo(int i){

if (i  > 0)
{
  
  printf("\n");
  printf("BISPO\n");
  
  for ( i = 5; i > 0; i--)
  {
    printf("cima\n");

for (int j = 5; j >= i ; j--)
{
  printf("direita\n");
}


  }
  


}






}


    int main(){

        int quantidade = 5;
        int numero = 8;
        int jota=5 ;
        printf(" Torre:\n");
        torre(quantidade);
        printf("Torre percorreu 5 casas para a direita\n\n");
        printf("Rainha:\n");
        rainha(numero);
        Bispo( jota);
        printf("O Bispo se moveu  5 casas para diagonal direita. ");
       
        printf("\n");
        printf("\n");

        //Aqui dou espaço para movimentação do cavalo
        printf("Cavalo:\n");

          for (int i = 0; i < 10; i++) {
            if (i == 1) break; 
              printf("cima\n");
              printf("cima\n");
              if (i == 1) break;    // Sai do loop quando i é 8
              printf("direita\n");

          }
              printf("o cavalo se movel em L  para superior direito ");
          return 0;
      



        }
        
   
    
    

