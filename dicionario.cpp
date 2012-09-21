#include"dicionario.h"
#include<stdlib.h>
#include<stdio.h>

void inicializa(Dicionario *first ,Dicionario *aux ){
  
  first = aux = (Dicionario *)malloc(sizeof(Dicionario));
  first->prox = NULL ;
}

Dicionario * aloca(){
  
  Dicionario * dic = (Dicionario *)malloc(sizeof(Dicionario));
  dic->prox = NULL;  
  return dic;  
}

void adicionaPalavra(Dicionario *ultimo){
  
  printf("Digite a palavra a ser adicionada : ");

  debug( 's' , "adiciona palavra : scanf");

  ultimo->prox = aloca();
  
  ultimo = ultimo->prox;

  debug( 's',"adiciona palavra : scanf");
  
  scanf("%s", ultimo->palavra );
}

void imprimeDicionario(Dicionario *dic){
  
  Dicionario *aux = dic;
  
  if(aux==NULL){
    printf("Nao existem palavras na lista\n");
  }else while(aux!=NULL){
    printf("%s\n",aux->palavra);  
    aux = aux->prox;  
  }
}

int moveToNext(Dicionario *dic){
  
  if(dic->prox == NULL)return 0;
  else return (int)( dic = dic->prox);  
  
}

void debug(char op , int param){
  if(DEBUG && op=='d')fprintf(stderr,"Debug: %d\n",param);
}

void debug(char op , char *param){
  if(DEBUG && op=='s')fprintf(stderr,"Debug: %s\n",param);
}

