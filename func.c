#include "biblio.h"

//STRUCT--------------------------------------

struct alfa
{
	
	
};



// FUNÇÕES------------------------------------
 
 int Tam()
 {
 	int tam;
 	
 	printf("DIGITE O TAMANHO MAXIMO DE CADASTRO NO SISTEMA: ");
 	scanf("%d",&tam);
 	
 	
 	return tam;
 }
 
void subConsutar()
{
	char op1[1];
	int op;
	do
	{
		printf("\t-------------Menu Consutar------------\n");
		printf("[1] - Consutar Prato\n[2] - Consutar Garcon\n[3] - Consutar Vendas\n}");
		scanf("%s", op1);
		op = atoi(op1);
	}while(op <=0 || op > 3);
}
void subCadastar()
{
	char op1[1];
	int op;
	do
	{
	   printf("\t---------Menu Cadastrar--------\n");
	   printf("[1] - Cadastrar Prato\n[2] - Cadastrar Funcionario\n}");
	   scanf("%s", op1);
	   op = atoi(op1);  
	}while(op <=0 || op > 2);	   	
}

void menu()
{
	char op[1];
	int op1;
	printf("\t-------------MENU-------------\n");
	do
	{
		printf("[1] - Cadastrar\n[2] - Consultar\n[3] - Alterar\n[4] - Excluir\n[5] - Venda\n[6] - Sair\n}");
		scanf("%s", op);
		op1 = atoi(op); 
	}while(op1 <=0 || op1 > 6);
	switch(op1)
	{
	case 1:
		subCadastar();
		break;
	case 2:
		subConsutar();
		break;
	default:
		break;
	}
	
}