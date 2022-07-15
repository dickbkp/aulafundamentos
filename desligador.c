#include <stdio.h>

int main ()
{
	int opt;

    printf("******Desligador de Computador ******\n");
    printf("*************************************\n");
    printf("*************************************\n");
    printf("******** Digite a opcao desejada*****\n");
    printf("*************************************\n");
    printf("***1 = Desligar o Computador*********\n");
    printf("*************************************\n");
    printf("***2 = Reiniciar o Computador********\n");
    printf("*************************************\n");
    printf("***3 = Anular  o Desligamento********\n");
    printf("*************************************\n");
    printf("***4 = Fechar o Programa ************\n");
    printf("*************************************\n");

	scanf("%d", &opt);
	printf("A opcao selecionada foi %d!", opt);

	switch (opt)
	{
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
