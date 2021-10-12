#include<stdio.h>
#include<conio.h>
#include<locale.h>
int i,j,opcao,select;
float c,f,k,result;

inicio(){
	switch(select){
		case 1:
			for(i=1;1<=1;i++){
				while(select==1){
					switch(opcao){
						
						case 1:
							printf("\n\t Digite a temperatura em Celsius: ");
							scanf("%f",&c);
							printf("\n\t Conversão para Kelvin\n\n");
								k=c+273;
							
							printf("\t %0.2f°C equivale á %0.2fK",c,k);
							select=0;
						break;
						
						case 2:
							printf("\n\t Digite a temperatura em Celsius: ");
							scanf("%f",&c);
							printf("\n\t Conversão para Fahrenheit\n\n");
								f=c*1.8+32;
							printf("\t %0.2f°C equivale á %0.2fF",c,f);
							
							select=0;
						break;
							
						default:
							return 0;
						break;
						
					}
					return 0;
				}
			}
		break;
		
		case 2:
			for(i=1;1<=1;i++){
				while(select==2){
					switch(opcao){
						
						case 1:
							printf("\n\t Digite a temperatura em Kelvin: ");
							scanf("%f",&k);
							printf("\n\t Conversão para Celsius\n\n");
								c=k-273;
							
							printf("\t %0.2fK equivale á %0.2f°C",k,c);
							select=0;
						break;
						
						case 2:
							printf("\n\t Digite a temperatura em Kelvin: ");
							scanf("%f",&k);
							printf("\n\t Conversão para Fahrenheit\n\n");
								f=(k-273)*1.8+32;
							printf("\t %0.2fK equivale á %0.2f°F",k,f);
							
							select=0;
						break;
							
						default:
							return 0;
						break;
						
					}
					return 0;
				}
			}
		break;
		
		case 3:
			for(i=1;1<=1;i++){
				while(select==3){
					switch(opcao){
						
						case 1:
							printf("\n\t Digite a temperatura em Fahrenheit: ");
							scanf("%f",&f);
							printf("\n\t Conversão para Kelvin\n\n");
								k=(f-32)*5/9+273;
							printf("\t %0.2f°f equivale á %0.2fK",f,k);
							
							select=0;
						break;
						
						case 2:
							printf("\n\t Digite a temperatura em Fahrenheit: ");
							scanf("%f",&f);
							printf("\n\t Conversão para Celsius\n\n");
								c=(f-32)/1.8;
							printf("\t %0.2f°f equivale á %0.2f°C",f,c);
							
							select=0;
						break;
							
						default:
							return 0;
						break;
						
					}
					return 0;
				}
			}
		break;
		
	}
	
}

celsius(){
	printf("\n\t Para qual unidade deseja converter?\n\t 1.Kelvin\n\t 2.Fahrenheit\n\t .............");
	scanf("%i",&opcao);
	inicio();
}

kelvin(){
	printf("\n\t Para qual unidade deseja converter?\n\t 1.Celsius\n\t 2.Fahrenheit\n\t .............");
	scanf("%i",&opcao);
	inicio();
}

fahrenheit(){
	printf("\n\t Para qual unidade deseja converter?\n\t 1.Kelvin\n\t 2.Celsius\n\t .............");
	scanf("%i",&opcao);
	inicio();
}

int main(){
	setlocale(LC_ALL,"Portuguese");
	printf("\n\n\t Selecione a unidade de medida: \n\t 1.Celcius\n\t 2.Kelvin\n\t 3.Fahrenheit\n\t .............");
	scanf("%i",&select);
	
	switch(select){
		
		case 1:
			celsius();
		break;
			
		case 2:
			kelvin();
		break;
			
		case 3:
			fahrenheit();
		break;
			
		default:
			return main();
		break;
	}
}
