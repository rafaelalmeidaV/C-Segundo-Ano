#include <stdio.h>
#include <stdlib.h>

typedef struct cliente{
  int codigo;
  char nome[50];
}Cliente;

typedef struct conta{
  int numero;
  double valor;
  int codigo;
}Conta;

int main(void) { 
  int b;
  Cliente c[100];
  Conta ct[100];

  int i,j, repete =1;

  for (i=0; i < 2; i++){

	  do{
	   
    	printf("Digite o codigo do cliente:\n");
    	scanf("%d", &c[i].codigo);
    	for (j=0; j < i; j++){
    		  	repete = 1;
    		if(c[i].codigo == c[j].codigo){
      			printf("Codigo ja cadastrado, digite outro codigo:\n");
      					j=i;
					repete=0;
    		}
    	} 			
	}while(repete==0);
	 printf("Digite o nome do cliente:\n");
    scanf("%s", &c[i].nome); 
	 getchar();
}
   
   
  
  
  for(i=0; i < 2; i++){
    
    printf("Digite o codigo do cliente:\n");
    scanf("%d", &ct[i].numero);
    while(ct[i].codigo != c[i].codigo){
      printf("Cadatro invalido, digite o codigo do cliente:\n");
      scanf("%d", &ct[i].codigo);
    }
    printf("Digite o numero da conta:\n");
    scanf("%d", &ct[i].numero);
    printf("Digite o valor da conta:\n");
    scanf("%lf", &ct[i].valor);
  }
  
  do{ 
    printf("deseja remover uma conta?\n");
    printf("1 - sim , 2 - nao\n");  
    scanf("%d", &i);
    if(i == 1){
      for(j = 0; j < 2; j++){
        printf("digite o codigo do cliente a ser removido\n");
        scanf("%d", &b);
        while(b != c[j].codigo){
          printf("codigo invalido\n");
          printf("digite o codigo do cliente a ser removido\n");            
          scanf("%d", &b);
        }
        if(ct[j].valor != 0){
        printf("conta nao esta zerada, nao e possivel remover\n");
        j++;
        }else{ 
      printf("cliente removido!!\n");
      c[j].codigo = 0;
      c[j].nome[0] = '\0';
      ct[j].codigo = 0;
      ct[j].numero = 0;
      ct[j].valor = 0;
        }        
      }
    }
  }while(i != 2);
  

  for(i=0; i < 2; i++){
    printf("Codigo do cliente: %d\n", c[i].codigo);
    printf("Nome do cliente: %s\n", c[i].nome);
    printf("Codigo da conta: %d\n", ct[i].codigo);
    printf("Numero da conta: %d\n", ct[i].numero);
    printf("Valor da conta: %.2lf\n", ct[i].valor);
  }


  return 0;
}

