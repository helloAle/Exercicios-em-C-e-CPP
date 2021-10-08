#include<stdio.h>
#include<conio.h>
#include<locale.h>

int sel,final;

hex(){
	long decimalnum, quotient, remainder;
    int i, j = 0;
    char hexadecimalnum[100];
 
    printf("\n\tDigite um numero em decimal: ");
    scanf("%ld", &decimalnum);
 
    quotient = decimalnum;
 
    while (quotient != 0)
    {
        remainder = quotient % 16;
        if (remainder < 10)
            hexadecimalnum[j++] = 48 + remainder;
        else
            hexadecimalnum[j++] = 55 + remainder;
        quotient = quotient / 16;
    }
 	printf("\n\t O valor em hexadecimal correspondente ao valor digitado é: ");
    
    for (i = j; i >= 0; i--)
            printf("%c", hexadecimalnum[i]);
}

octal(){
	long decimalnum, remainder, quotient;
    int octalNumber[100], i = 1, j;
	
	printf("\n\tDigite um numero em decimal: ");
		    scanf("%ld", &decimalnum);
		    quotient = decimalnum;
		    while (quotient != 0)
		    {
		        octalNumber[i++] = quotient % 8;
		        quotient = quotient / 8;
		    }
		    printf("\n\tvalor Octar equivalente ao decimal digitado: %d: ", decimalnum);
		    for (j = i - 1; j > 0; j--)
		        printf("%d", octalNumber[j]);
		    return 0;
}

int main(){
	setlocale(LC_ALL,"Portuguese");
	printf("\n\n\tSelecione o metodo de conversão: \n\n\t 1.decimal para hexadecimal\n\t 2.decimal para octal\n\t....................... ");
	scanf("%i",&sel);
	
	switch(sel){
		
		case 1:
			hex();
			printf("\n\n\t Deseja finalizar?\n\t 1. Sim | 2. Não\n\t ");
			scanf("%i",&final);
			if(final==1){
				return 0;
			}
			else if(final==2){
				return main();
			}
			else{
				printf("\n\n\t Erro");
			}
			break;
		
		case 2:
		    octal();
		    printf("\n\n\t Deseja finalizar?\n\t 1. Sim | 2. Não\n\t ");
			scanf("%i",&final);
			if(final==1){
				return 0;
			}
			else if(final==2){
				return main();
			}
			else{
				printf("\n\n\t Erro");
			}
			break;
			
		default:
			return main();
			break;
		
		getch();
			return 0;
		
	}
}
