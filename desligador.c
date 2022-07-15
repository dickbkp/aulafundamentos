#include <stdio.h>

  
int main (){
	int opt;
printf("******Desligador de Computador ******\n*************************************\n*************************************\n******** Digite a opcao desejada*****\n*************************************\n***1 = Desligar o Computador*********\n*************************************\n***2 = Reiniciar o Computador********\n*************************************\n***3 = Anular  o Desligamento********\n*************************************\n***4 = Fechar o Programa ************\n*************************************\n	");

	scanf("%d", &opt);
	
	printf("A opcao selecionada foi %d! ", opt);
	switch (opt){
		case 1:
			system("shutdown -s -t 1200");
			//system("shutdown -h +1200");
			break;
		case 2: 
			system("shutdown -r -t 1200");
			//system("reboot -h +1200");
		case 3: 
			system("shutdown -a");
			//system("reboot -c");
			//system("shutdown -c");
		default: 
			system("exit");
	}
		return 0;

}
