#include <stdio.h>


int pregunta (void);
void copa(int numerofilas);
void tronco (int numerofilas);

int main() {

int entradafilas;

entradafilas=pregunta();
copa (entradafilas);
tronco (entradafilas);

return 0;
}

int pregunta(void){

  int respuesta;
  printf("Introduce la altura del abeto: " );
  scanf("%d",&respuesta );
  return respuesta;
}

void copa(int numerofilas){
printf("\n" );
  for (int i=0;i<numerofilas;i++){

    for(int k=0;k<numerofilas-i;k++){
      printf(" " );
    }

    for (int j=0;j<2*i+1;j++){
      printf("*");
    }

  printf("\n" );
  }
}

void tronco (int numerofilas){
for(int e=0;e<=numerofilas/6;e++){
  for(int t=0;t<numerofilas-numerofilas/4;t++)
  printf(" ");

    for(int m=0;m<numerofilas/2;m++)
    printf("|");
  printf("\n");
  }
}
