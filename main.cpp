#include<stdio.h>
#include<stdlib.h>
#include"dicionario.h"

char imprimeMenu();

Dicionario *prim , *atual ;

int main(){
  
  char opcao;
  
  inicializa(prim , atual);
  
  while(opcao != '0'){
    
    opcao = imprimeMenu();
    
    switch(opcao){
      
      case '1': imprimeDicionario(prim);
      break;
      
      case '2': {
        adicionaPalavra(atual);
      }
      break;
      
      case '3':;
      break;      
    } 
  }
  
}

char imprimeMenu(){
  
  fflush(stdin);
  printf(
    "Digite 1 para listar\n"
    "Digite 2 para adicionar\n"
    "Digite 3 para adicionar automaticamente\n"
    "Digite 0 para sair\n"
    "Digite: ");
    
  return getc(stdin);  
}

