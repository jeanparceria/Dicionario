#define MAX_PALAVRA 50
#define DEBUG 0

typedef struct dicionario { 

  char palavra[MAX_PALAVRA]; 
  struct dicionario *prox; 

}Dicionario;

Dicionario * aloca();

void inicializa(Dicionario *first ,Dicionario *aux );

void adicionaPalavra(Dicionario *ultimo);

void imprimeDicionario(Dicionario *dic);

int moveToNext(Dicionario *dic);

void debug(char op , int param);
void debug(char op , char *param);
