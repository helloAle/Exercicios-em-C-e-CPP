#include<stdio.h>
#include<locale.h>
float val,sel,res;
int final;

conta(){
	setlocale(LC_ALL, "Portuguese");
	
	printf("\n\n\t Selecione o metodo de conversão:\n\n\t 1.Metros para decimetros\n\t 2.Metros para centimetros\n\t 3.Metros para milimetros\n\t.......................");
	scanf("%f",&sel);
	printf("\n\t Digite um valor em metros: ");
	scanf("%f",&val);
	if(sel==1){
		res=val*10;
		printf("\n\t %0.2f metros equivale a %0.2f decimetros",val,res);
	}
	else if(sel==2){
		res=val*100;
		printf("\n\t %0.2f metros equivale a %0.2f centimetros",val,res);
	}
	else if(sel==3){
		res=val*1000;
		printf("\n\t %0.2f metros equivale a %0.2f milimetros",val,res);
	}
	else{
		return conta();
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
