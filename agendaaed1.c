#include <stdio.h>
#include <stdlib.h>

void *pbuffer;

typedef struct pessoa{
	char nome[20];
	int tel;

} pessoa;

void ordenarinsercao(int data[]);

int main(){
	int data[100];
	char *pes;
	int *quant;
	int *opcao;
	int *i;
	int *tmp,*k,*j;
	
	pbuffer=malloc(6*sizeof(int) + 20*sizeof(char));
	if(pbuffer==NULL){
			printf("erro");
			exit(1);
		}
	quant=pbuffer;
	opcao=quant+sizeof(int);	
	i=opcao+sizeof(int);

	tmp=i+sizeof(int);	
	k=tmp+sizeof(int);
	j=k+sizeof(int);
	
	
	*quant=0;
	*i=0;
	*tmp=0;
	*k=0;
	*j=0;
	
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


void ordenarinsercao(int data[]){

 int *tmp,*k,*j,*quant;

for (*j=1; *j<*quant; (*j)++) { 
		*k =*j-1;
		*tmp = data[j]; 
		while ( (*k>=0) && (*tmp < data[*k]) ) { 
			data[*k+1] = data[*k];
			 (*k)--; 
		}

		data[*k+1] = *tmp; 
	}
}



