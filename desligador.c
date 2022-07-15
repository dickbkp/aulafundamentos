#include <stdio.h>


int main (){
	int opt;

    printf("Desligador de Computador \n\n\nDigite a opcao desejada \n\n1 = Desligar o Computador \n\n2 = Reiniciar o Computador \n\n3 = Anular  o Desligamento \n\n4 = Fechar o Programa \n\n	");

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
                break;
            case 3:
			system("shutdown -a");
			//system("reboot -c");
			//system("shutdown -c");
                break;
                    default:
			system("exit");
	}
		return 0;

}
