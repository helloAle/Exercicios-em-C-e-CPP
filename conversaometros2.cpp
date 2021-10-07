#include<stdio.h>
#include<conio.h>
#include<locale.h>
float val,res;
int final,sel;

conta(){
	setlocale(LC_ALL, "Portuguese");
	
	printf("\n\n\t Selecione o metodo de conversão:\
	\n\n\t 1.Metros para decimetros\
	\n\t 2.Metros para centimetros\
	\n\t 3.Metros para milimetros\
	\n\t.......................");
	scanf("%i",&sel);
	printf("\n\t Digite um valor em metros: ");
	scanf("%f",&val);
	
	switch(sel){
		case 1:
			res=val*10;
			printf("\n\t %0.2f metros equivale a %0.2f decimetros",val,res);
			break;
		
		case 2:
			res=val*100;
			printf("\n\t %0.2f metros equivale a %0.2f centimetros",val,res);
			break;
		
		case 3:
			res=val*1000;
			printf("\n\t %0.2f metros equivale a %0.2f milimetros",val,res);
			break;
		
		default:
			return conta();
			break;
			
		getch();
		return 0;
	}
	
	printf("\n\n\t Deseja finalizar?\n\t 1. Sim | 2. Não\n\t ");
	scanf("%i",&final);
	if(final==1){
		return 0;
	}
	else if(final==2){
		conta();
	}
	else{
		printf("\n\n\t Erro");
	}	
}

int main(){
	conta();
}
