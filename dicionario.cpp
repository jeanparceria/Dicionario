#include"dicionario.h"
#include<stdlib.h>
#include<stdio.h>

Dicionario * aloca(){
  
  Dicionario * dic = (Dicionario *)malloc(sizeof(Dicionario));
  dic->prox = NULL;  
  return dic;  
}



void adicionaPalavra(Dicionario **primeiro,Dicionario **ultimo){
  
//  printf("ultimo %d\t*ultimo %d\t&(**ultimo) %d\n", (int)ultimo , (int)*ultimo, (int)&(**ultimo));
  
  fflush(stdin);
  
  printf("Digite a palavra a ser adicionada : ");
  
  if(*ultimo==NULL){
    *primeiro = *ultimo = aloca();
    
  }else {
    (*ultimo)->prox = aloca();
    *ultimo = (*ultimo)->prox;
  }
  
  gets( (*ultimo)->palavra );
  
// printf("ultimo %d\t*ultimo %d\t&(**ultimo) %d\n", (int)ultimo , (int)*ultimo, (int)&(**ultimo));
  
}

void imprimeDicionario(Dicionario **param){
  
  Dicionario *aux = *param;
  
  printf("aux %d\n", (int)aux);
  
  if(aux==NULL){
    printf("Nao existem palavras na lista\n");
  }else do{
    
    printf("%d\t%s\n",aux->palavra,aux->palavra);          
  }while(moveToNext(&aux));
  system("pause");
}

int moveToNext(Dicionario **dic){
  
  if((*dic)->prox == NULL)return 0;
  else return (int)( *dic = (*dic)->prox);  
  
}

void debug(char *param1 , int param2){
  debug(param1);
  debug(param2);
}

void debug(int param){
  if(DEBUG)fprintf(stderr,"Debug: %d\n",param);
}

void debug(char *param){
  if(DEBUG)fprintf(stderr,"Debug: %s\n",param);
}

