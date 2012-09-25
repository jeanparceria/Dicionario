#include<stdio.h>
#include<stdlib.h>
#include"dicionario.h"

char imprimeMenu();

int main(){

  Dicionario *prim=NULL , *atual = NULL ;
  char opcao;
  
  printf("size of dicionario %d\n",sizeof(Dicionario));
  printf("size of palavra %d\n",sizeof(prim->palavra));
  printf("size of prox %d\n",sizeof(prim->prox));
  printf("size of prim %d\n",sizeof(prim));
  system("pause");
  
  while(opcao != '0'){
    
    opcao = imprimeMenu();
//    system("cls");
    switch(opcao){
      
      case '1': imprimeDicionario(&prim);
      break;
      case '2': {   
        printf("atual %d\n", (int)atual );
        adicionaPalavra(&prim , &atual);
        printf("atual %d\n", (int)atual );
      }
      break;
      case '3':;
      break;      
    } 
  }
}

char imprimeMenu(){
  
  fflush(stdin);
  
  system("cls");
  
  printf(
    "Digite 1 para listar\n"
    "Digite 2 para adicionar\n"
    "Digite 3 para adicionar automaticamente\n"
    "Digite 0 para sair\n"
    "Digite: ");
    
  return getc(stdin);  
}

