#include<stdlib.h>
#include<stdio.h>
#include<time.h>


int main(){
  
  clock_t start, finish, aux=0;
	int duration, test;

	aux = start = clock();
	
	
		
	while( aux < start + 5000){
    aux=clock();  
  }
	
	finish= clock();

	duration = (int)(finish-start);
	
	printf("%d",duration);
	
	getchar();
	
	
	return 0;
}
