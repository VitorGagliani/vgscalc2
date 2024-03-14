#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(){
	
	
	int opcao; //HoraMin, HoraSeg, MinHora, MinSeg, SegHora, SegMin;
	
	printf("\n______Calculadora 2.0 VgS______\n");
	
	printf("\n Digite 1 para converter horas em minutos \n Digite 2 para converter horas em segundos \n Digite 3 para converter minutos em hora \n Digite 4 para converter minutos em segundos \n Digite 5 para converter segundos em horas \n Digite 6 para converter segundos em minutos \n ");
	
	fflush(stdin); //limpar teclado
	
	scanf("%d", &opcao); //escolher a opçao
	//printf("%c", opcao);
	
	float num1;
	
	
	//fflush(stdin);
	
	float result;
	
	if(opcao == 1){
		
		
		printf("Voce escolheu opcao 1\n Digite as horas: ");
		scanf("%f", &num1);

		result = num1*60;
		
		printf("%2.2f horas e equivalente a %2.2f minutos",num1, result);
	} else
	 if (opcao == 2){
	 	
			printf("Voce escolheu opcao 2\n Digite as horas: ");
			scanf("%f", &num1);
			result = num1*3600;
			
				printf("%2.2f horas e equivalente a %.0f segundos",num1, result);
			
	} else if(opcao == 3){
		
		printf("Voce escolheu opcao 3\n Digite os minutos: ");
			scanf("%f", &num1);
			result = num1/60;
		
			printf("%1.0f minutos e equivalente a %2.2f horas", num1, result);
		
	} else if (opcao == 4){
		
		printf("Voce escolheu opcao 4\n Digite os minutos: ");
			scanf("%f", &num1);
			result = num1*60;
			
		printf("%1.0f minutos e equivalente a %2.2f segundos", num1, result);
			
	} else if (opcao == 5){
		
		printf("Voce escolheu opcao 5\n Digite as horas: ");
			scanf("%f", &num1);
			result = num1/3600;
		
		printf("%1.0f segundos e equivalente a %2.2f horas", num1, result);
		
	} else if (opcao == 6){
		
		printf("Voce escolheu opcao 6\n Digite as horas: ");
			scanf("%f", &num1);
			result = num1/60;
		
		printf("%1.0f segundos e equivalente a %.2f minutos", num1, result);
		
	} else if (opcao >= 7){
		
		printf("opcao invalida");
		
	}
	
/*	switch(opcao){
		case 1:
		 		printf("Voce escolheu opcao 1\n Digite as horas: ");
				scanf("%f", num1);
				
				result = num1/60;
				
				printf("teste");

				//printf("%f em segundos e: ", num1/60);
				
				break;
		
		case 2:
			printf("Voce escolheu opcao 2\n Digite as horas: ");
			
			break;
		
	}
	*/
	return 0;
}
