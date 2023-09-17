#include <stdio.h>

int main(){
	
	int senha = 0;
	int Loop = 1;
	int senhacrrt = 2002;
	
	
	while (Loop == 1){
		printf("Digite a senha de 4 dig.: ");
		scanf("%d", &senha);
		if (senha != senhacrrt){
			printf("Senha invalida\n");
		}
		else if (senha == senhacrrt){
			printf("Acesso Permitido.\n");
			Loop = 0;
		}
	}
	return 0;
}
