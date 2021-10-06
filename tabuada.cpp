#include<stdio.h>
#include<locale.h>
int a,k,sel,i,j,result, final;

int main(){
	setlocale(LC_ALL, "Portuguese");
	
	printf("\n\n\t\t Selecione a tabuada: ");
	scanf("%i",&sel);
	printf("\n\n\t\t Selecione o numero limite para a tabuada: ");
	scanf("%i",&a);
	
	for(k=sel;k<=sel;k++){
	    printf("\n\n\t Tabuada de %i: \n\n\t",sel);
	    for(i=1;i<=a;i++){
	        result = i*sel;
	        printf("    %i x %i = %i \n\t",i,sel,result);
	    }
	}
	
	printf("\n\t_________________________________\n\t Deseja realizar outra pesquisa? \n\t\t  1.Sim |  2.N�o \n\t\t.....................");
	scanf("%i",&final);
	if(final==2){
		return 0;
	}
	else{
		return main();
	}
}
