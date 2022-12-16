#include <stdio.h>
#include <locale.h>
#include<stdbool.h>

void menu(){

int escolha;

printf("Olá, seja bem vindo! Selecione o exercício que deseja verificar:\n\n");
printf("1 - Fatorial\n");
printf("2 - Números primos\n");
printf("3 - Meia árvore\n\n");

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
printf ("\nEscolha inválida. Favor selecionar uma das 3 opções abaixo:\n");
printf("1 - Fatorial\n");
printf("2 - Números primos\n");
printf("3 - Meia árvore\n\n");
}

} while ((escolha !=1) && (escolha !=2) && (escolha !=3));

}

bool encerrar(){
int resposta;

     do {

    printf ("\n\nDeseja encerrar o programa?\n\n");
    printf ("0-Sim\n");
    printf ("1-Não\n\n");

    scanf("%d",&resposta);

if((resposta != 0)&&(resposta != 1)){

        printf ("\nNão entendi sua resposta. Deseja encerrar o programa?\n\n");
        }


} while((resposta != 0)&&(resposta != 1));

if(resposta == 0)

    return false;

    else

    return true;
}

int fatorial(){

int numero,i,resultado;

printf("\nBem vindo ao exercício de fatorial. Por favor, digite um número inteiro para iniciarmos:\n\n");

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


printf("\nO resultado fatorial do número escolhido é: %d",numero);

}

int num_primos(){

int qnt,i,primo=0,cont,aux;


printf("\nBem vindo ao exercício de números primos. Por favor, digite um número inteiro e positivo, para iniciarmos:\n\n");

scanf("%d", &qnt);

i=qnt;

printf("\nOs %d%s",qnt," primeiros números primos são:\n\n");

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

printf("\nBem vindo ao exercício de árvore. Por favor, digite um número inteiro e positivo, que definirá o tamanho da sua meia-árvore:\n\n");

scanf("%d", &linhas);

printf("\nAqui está sua bela meia-árvore :)\n\n");

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
