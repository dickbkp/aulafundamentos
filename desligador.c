#include <stdio.h>


int main (){
	//Cria as vari�veis que utilizaremos:
	int opt;
	//Mostra e pede ao usu�rio que escolha uma op��o, e recebe a op��o na vari�rel opt:
    printf("******Desligador de Computador ******\n*************************************\n*************************************\n******** Digite a opcao desejada*****\n*************************************\n***1 = Desligar o Computador*********\n*************************************\n***2 = Reiniciar o Computador********\n*************************************\n***3 = Anular  o Desligamento********\n*************************************\n***4 = Fechar o Programa ************\n*************************************\n	");
	scanf("%d", &opt);


	//Mostra ao usu�rio a op��o selecionada e executa o comando correspondente:
	printf("A opcao selecionada foi %d! ", opt);
	switch (opt){
		case 1:
			system("shutdown -s -t 1200");
			break;
		case 2:
			system("shutdown -r -t 1200");
			break;
        case 3:
			system("shutdown -a");
			break;
		default:
			system("exit");
	}
		return 0;

}
