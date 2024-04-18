#include<stdio.h>
#include<locale.h>
int main(){
	int num;
	setlocale(LC_ALL, "portuguese");
	printf("Digite o numero: ");
	scanf("%d", &num);
    printf("o resultado ao cubo, é: %i", num * 3  );
	return(0);
}
