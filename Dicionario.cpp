#include<stdio.h>
#include<stdlib.h>

typedef struct {
  char letras[50];
  
}Palavra;

typedef struct{
  Palavra palavras[50];
  
}Dicionario;

Dicionario dicionario;

int main(){
  
  char palav[] = "Hello World!!!";
  while(1){
  
    for(int i = 0; i< 14 ; i++)
    {
      printf("%c",palav[i]);  
      _sleep((200 * i )/ 2);
      
    }
    
    printf("\n");
  }
  return 0;
}
