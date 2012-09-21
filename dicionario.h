#define MAX_PALAVRA 50
#define DEBUG 1

typedef struct dicionario { 

  char palavra[MAX_PALAVRA]; 
  struct dicionario *prox; 

}Dicionario;

Dicionario * aloca();

void inicializa(Dicionario *first ,Dicionario *aux );

void adicionaPalavra(Dicionario **primeiro,Dicionario **ultimo);

void imprimeDicionario(Dicionario **aux);

int moveToNext(Dicionario *dic);

void debug(int param);
void debug(char *param);
void debug(char *param1 , int param2);
