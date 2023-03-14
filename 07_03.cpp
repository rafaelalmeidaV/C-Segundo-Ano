#include <stdio.h>
#include <locale.h>
#include <string.h>
#include <stdlib.h>

struct Conta{
	float valorConta;
	int numeroConta;
};

struct Cliente{
	char nomeCliente[100];
	int codigoCliente;
	Conta conta;	
};



int main(){
	//Programa para exemplificar 
	//o uso de struct deentro de structs
	
	Cliente *cliente; //tamanho indefinido de 
					  //clientes
				  
	int tamanho=0, i; 
	char enter, continua ='s';
	
	setlocale(LC_ALL,"");
	do{
		if(tamanho > 0){
			//imprimir o conteudo do vetor para ver
			//o que ele quarda
			for(i = 0; i < tamanho; i ++){
				printf("Cliente: %s", cliente[i].nomeCliente);
			}
		}
	
	
		printf("informe a quantidade de clientes: ");
		scanf("%d", &tamanho);
		//estrutura para demonstrar a quebra de codigo
		//com alocação estatica
		struct Cliente clientes2[tamanho];
		
		
		//definir o tamanho do vetor alocado
		//dinamicamente
		cliente = (struct Cliente *)malloc(tamanho*sizeof(struct Cliente));
		//definição de um vetor
		//struct Cliente cliente[tamanho]
		
		
		for(i = 0; i<tamanho; i++){
			fflush(stdin);
			printf("Nome: ");
			gets(cliente[i].nomeCliente);
			
			
			printf("Codigo: ");
			scanf("%d", &cliente[i].nomeCliente);
			
			printf("Numero da conta:");
				scanf("%d", &cliente[i].conta.numeroConta);
			
			printf("valor da conta: ");
			scanf("%f", &cliente[i].conta.valorConta);
	}
	
		printf("\nOs dados lidos são: ");
		
		for(i = 0; i<tamanho; i++ ){	
			printf("\n%s", cliente[i].nomeCliente);
			printf("\n%d", cliente[i].codigoCliente);
			printf("\n%d", cliente[i].conta.numeroConta);
			printf("\n%.2f", cliente[i].conta.valorConta);
	}
	fflush(stdin);
	printf("deseja continuar");
	scanf("%c", &continua);
	
}while(continua == 's');

}



