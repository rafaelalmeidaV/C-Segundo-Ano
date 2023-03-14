#include <stdio.h>

int main(){
	int var1=  10;
	char var2 = 'a';
	float var3= 10.0;
	int vetor[]= {112, 15, 65};
	
	
	
	printf("o endereço de var1 eh: %p", &var1);
	printf("\n o endereco de var2 eh: %p", &var2);
	printf("\n o endereco de var3 eh: %p", &var3);
	
	int *pontdeInt = vetor; //ponteiro do vetor
	char *pontdeChar = &var2;
	float *pontdeFloat = &var3;
	
	printf("o conteudo de var1 eh: %d", var1);
	printf("\n o endereco de var1 eh: %p", &var1);
	printf("\n o conteudo de pontDeInt eh: %p", pontDeInt);
	printf("\n o endereco de pontDeInt eh: %p", &pontDeInt);
	printf("\n o conteudo da celular que pontDeInt aponta eh: %p", *pontDeInt);
	
	return 0;
}
