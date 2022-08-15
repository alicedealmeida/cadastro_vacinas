#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <locale.h>

struct dados {
	int codigo;
	char nome[70];
	char cpf[15];
	char vacina[20];
	char data[11];
	int lote;
};


int main () {
	setlocale(LC_ALL, "Portuguese");
	struct dados ficha[300];
	int opcao = 0, i = 0, j, k, resposta = 1, qtdecadastros = 0, acha;
	char busca[15];
	
	
	
	while (opcao != 4) {
		printf("Escolha a operacão desejada: \n\n");
		printf("1 - Cadastrar vacina\n");  
		printf("2 - Listar Aplicações\n");
		printf("3 - Consultar por CPF\n");
		printf("4 - Sair\n\n");
	 	scanf("%d", &opcao);
		printf("\n");	 	
	 	fflush(stdin);
 	
	 	if (opcao == 1)
		{	resposta = 1;
			system("cls");		
	 		while (resposta == 1) 
			{
				printf("Digite o nome: ");
				scanf("%70[^\n]s", ficha[i].nome);
				fflush(stdin);
				printf("CPF: ");
				scanf("%s", ficha[i].cpf);
				fflush(stdin);
				printf("Vacina aplicada: ");
				scanf("%s", ficha[i].vacina);
				fflush(stdin);
				printf("Data: ");
				scanf("%s", ficha[i].data);
				fflush(stdin);
				printf("Lote: ");
				scanf("%d", &ficha[i].lote);
				fflush(stdin);	
				
				ficha[i].codigo = i;
				i++;
				qtdecadastros++;
				
				printf("Desejar continuar? Digite 1 para sim e 2 para não: ");
				scanf("%d", &resposta);
				printf("\n");		
				fflush(stdin);	
				system("cls"); 	
						
			}
		}
		 else 
		 {
			if  (opcao == 2) {
 				for (j=0; j<qtdecadastros;j++) {
				printf("Código: %d\n", ficha[j].codigo);
				fflush(stdin);	
				printf("Nome: %s\n", ficha[j].nome);
				fflush(stdin);
				printf("CPF: %s\n", ficha[j].cpf);
				fflush(stdin);		
				printf("Vacina: %s\n", ficha[j].vacina);
				fflush(stdin);		
				printf("Data: %s\n", ficha[j].data);
				fflush(stdin);		
				printf("Lote: %d\n", ficha[j].lote);
				fflush(stdin);			
				printf("==================================\n\n");
				}
		 	}			
			else
			{
			 	if (opcao == 3) 
				{
			 		system("cls");
			 		printf("Digite o CPF do cadastro desejado: ");
			 		scanf("%s", busca);
			 		fflush(stdin);
			 		k = 0;
			 		acha = 0;
			 		while ((k <= qtdecadastros) && (acha == 0)) 
			 		{
			 			if (strcmp(ficha[k].cpf, busca) == 0)
							acha = 1;
						else
							k++;		
					}
					
					if(acha == 1) 
					{
						printf("Código: %d\n", ficha[k].codigo);
						fflush(stdin);	
						printf("Nome: %s\n", ficha[k].nome);
						fflush(stdin);
						printf("CPF: %s\n", ficha[k].cpf);
						fflush(stdin);		
						printf("Vacina: %s\n", ficha[k].vacina);
						fflush(stdin);		
						printf("Data: %s\n", ficha[k].data);
						fflush(stdin);		
						printf("Lote: %d\n", ficha[k].lote);
						fflush(stdin);			
					}
					else
						printf("Pessoa não localizada.\n");
				}
			}		
 		} 
	}
  	return 0;
}
