#include <stdio.h>
#include <stdlib.h>

void *pbuffer;

int main(){
	
	char *pes;
	int *quant;
	int *opcao;
	int *i;
	
	pbuffer=malloc(3*sizeof(int) + 20*sizeof(char));
	if(pbuffer==NULL){
			printf("erro");
			exit(1);
		}
	quant=pbuffer;
	*quant=0;
	opcao=quant+sizeof(int);	
	i=opcao+sizeof(int);
	*i=0;
	
	do{
		printf("digite 1 para inserir\n");
		printf("digite 2 para apagar\n");
		printf("digite 3 para buscar\n");
		printf("digite 4 para listar\n");
		printf("digite 0 para sair\n");
		
		scanf("%d",opcao);
			
		if(*opcao==1){
			
			
			
			
	
		}
			if(*opcao==2){
			}
				if(*opcao==3){
				}
					if(*opcao==4){
					}
	
	}
	while(*opcao!=0);
	
	
	free(pbuffer);
	return 0;
}

