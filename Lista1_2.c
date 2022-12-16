#include <stdio.h>
#include <locale.h>
#include<stdbool.h>

void menu(){

int escolha;

printf("Ol�, seja bem vindo! Selecione o exerc�cio que deseja verificar:\n\n");
printf("1 - Fatorial\n");
printf("2 - N�meros primos\n");
printf("3 - Meia �rvore\n\n");

do{

scanf("%d", &escolha);

switch (escolha) {

case 1:
fatorial();
break;

case 2:
num_primos();
break;

case 3:
arvore();
break;

default:
printf ("\nEscolha inv�lida. Favor selecionar uma das 3 op��es abaixo:\n");
printf("1 - Fatorial\n");
printf("2 - N�meros primos\n");
printf("3 - Meia �rvore\n\n");
}

} while ((escolha !=1) && (escolha !=2) && (escolha !=3));

}

bool encerrar(){
int resposta;

     do {

    printf ("\n\nDeseja encerrar o programa?\n\n");
    printf ("0-Sim\n");
    printf ("1-N�o\n\n");

    scanf("%d",&resposta);

if((resposta != 0)&&(resposta != 1)){

        printf ("\nN�o entendi sua resposta. Deseja encerrar o programa?\n\n");
        }


} while((resposta != 0)&&(resposta != 1));

if(resposta == 0)

    return false;

    else

    return true;
}

int fatorial(){

int numero,i,resultado;

printf("\nBem vindo ao exerc�cio de fatorial. Por favor, digite um n�mero inteiro para iniciarmos:\n\n");

scanf("%d", &numero);

i=(numero-1);

/*
while (i > 0){

   numero = numero*i;

   i=i-1;
}

*/

/*
do {

   numero = numero*i;

   i=i-1;

} while (i > 0);

*/

for (;i > 0 ;i--){

    numero = numero*i;

}


printf("\nO resultado fatorial do n�mero escolhido �: %d",numero);

}

int num_primos(){

int qnt,i,primo=0,cont,aux;


printf("\nBem vindo ao exerc�cio de n�meros primos. Por favor, digite um n�mero inteiro e positivo, para iniciarmos:\n\n");

scanf("%d", &qnt);

i=qnt;

printf("\nOs %d%s",qnt," primeiros n�meros primos s�o:\n\n");

do {
    primo++;
    cont=0;

    for(aux=1; aux<primo;aux++)
        if (primo%aux==0)
        cont++;
        if(cont==1){
            printf("\n%d",primo);
            i--;
        }
}
        while(i!=0);

}

int arvore(){

int linhas, aux, i, cont;

printf("\nBem vindo ao exerc�cio de �rvore. Por favor, digite um n�mero inteiro e positivo, que definir� o tamanho da sua meia-�rvore:\n\n");

scanf("%d", &linhas);

printf("\nAqui est� sua bela meia-�rvore :)\n\n");

i=(linhas*(-1));

for(;i<0;i++){

    cont=0+i;

    do{
        printf("%s","*");
        cont++;
    }while (cont<0);

    printf("\n");

}

}



int main (){

int shut;

setlocale (LC_ALL, "");

do {

    printf("\n");

    menu();

    printf("\n\n");

}while (encerrar());

system("cls");

return 0;

}
