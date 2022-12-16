#include <stdio.h>
#include <locale.h>
#include <stdbool.h>
#include <stdlib.h>


void menu(){

int escolha;

printf("Ol�, seja bem vindo! Selecione o exerc�cio que deseja verificar:\n\n");
printf("0 - Sair do programa\n");
printf("1 - Vetor de 50 pos���es\n");
printf("2 - Matriz 10x10 transposta\n");
printf("3 - Matriz 5x5 - Soma de n�meros\n\n");

do{

scanf("%d", &escolha);

switch (escolha) {

case 0:
system("cls");
exit(EXIT_SUCCESS);
break;

case 1:
vetor_50();
break;

case 2:
matriz_10();
break;

case 3:
matriz_5();
break;

default:
printf ("\nEscolha inv�lida. Favor selecionar uma das 3 op��es abaixo:\n");
printf("0 - Sair do programa\n");
printf("1 - Vetor de 50 pos���es\n");
printf("2 - Matriz 10x10 transposta\n");
printf("3 - Matriz 5x5 - Soma de n�meros\n\n");

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

if(resposta == 0){

    system("crs");

    return false;
}

    else

    system("cls");

    return true;
}

int vetor_50(){

int vetor[50],verifica,num,i;

system("cls");

do{

srand((unsigned) time(NULL));

for(i=0;i<50;i++){

   vetor[i]=(rand())%101;

   //  printf("\n%s%d%s%d%s","Posi��o n�mero ",i,": ",vetor[i],"\n\n");

}

printf("\nBem vindo ao exerc�cio de vetor. Por favor, digite um n�mero para ser verificado se est� contido no vetor.\n\n");

fflush(stdin);
scanf("%d",&num);

for(i=0;i<50;i++){

    if(vetor[i]==num){

        printf("\n\nParab�ns, voc� acertou o n�mero na posi��o %d%s",i,"\n");
    }
}

printf("\n\nFim de jogo\n\n");

    do{

    printf("\n\nDeseja tentar novamente?\n");
    printf("\n0-N�o. Quero voltar ao menu de exerc�cios");
    printf("\n1-Sim\n\n");

        fflush(stdin);

    scanf("%d",&verifica);



    if((verifica!=0)&&(verifica!=1)){

        printf("\n\nResposta inv�lida. Por favor, selecione uma das op��es abaixo\n");
        printf("\n0-N�o. Quero voltar ao menu de exerc�cios");
        printf("\n1-Sim\n\n");


         fflush(stdin);
        scanf("%d",&verifica);


        }

    if (verifica==1){

        system("cls");

    }

    if (verifica ==0){

        system("cls");
        menu();
    }


} while ((verifica!=0)&&(verifica!=1));

    }while(verifica!=0);

}

int matriz_10(){

int matriz[10][10], matriz_t[10][10], i, u, verifica;

i=0;
u=0;

system("cls");

do{

srand((unsigned) time(NULL));

for(i=0;i<10;i++){

    for(u=0;u<10;u++){

        matriz[i][u]=(rand())%100;

    }
}

printf("\nBem vindo ao exerc�cio de transposi��o de matriz randomica 10x10.\n\nEsta � a matriz original:\n\n");

for (i=0;i<10;i++){


     for(u=0;u<10;u++){

        printf("%2d%s",(matriz[i][u])," ");

    }

    printf("\n");
}



printf("\n\nAgora, esta � a matriz transposta:\n\n");

for (u=0;u<10;u++){


     for(i=0;i<10;i++){

        printf("%2d%s",(matriz[i][u])," ");

    }

    printf("\n");
}

    do{

    printf("\n\nDeseja verificar novamente?\n");
    printf("\n0-N�o. Quero voltar ao menu de exerc�cios");
    printf("\n1-Sim\n\n");

    fflush(stdin);

    scanf("%d",&verifica);



    if((verifica!=0)&&(verifica!=1)){

        printf("\n\nResposta inv�lida. Por favor, selecione uma das op��es abaixo\n");
        printf("\n0-N�o. Quero voltar ao menu de exerc�cios");
        printf("\n1-Sim\n\n");


         fflush(stdin);
        scanf("%d",&verifica);


        }

    if (verifica==1){

        system("cls");

    }

    if (verifica ==0){

        system("cls");
        menu();
    }


} while ((verifica!=0)&&(verifica!=1));

    }while(verifica!=0);

}

int matriz_5(){

int matriz[5][5], i, u, pares, impares, verifica;

i=0;
u=0;

system("cls");

do{

pares=0;
impares=0;

srand((unsigned) time(NULL));

for(i=0;i<5;i++){

    for(u=0;u<5;u++){

        matriz[i][u]=(rand())%100;

    }
}

printf("\nBem vindo ao exerc�cio de soma de numeros de matriz randomica 5x5.\n\nEsta � a matriz original:\n\n");

for (i=0;i<5;i++){


     for(u=0;u<5;u++){

        printf("%2d%s",(matriz[i][u])," ");

    }

    printf("\n");
}



printf("\n\nAgora, esta � a soma de seus n�meros pares e �mpares:\n\n");

for (u=0;u<5;u++){

     for(i=0;i<5;i++){

     if(matriz[i][u]%2==0){

        pares=pares+(matriz[i][u]);

     }

        if(matriz[i][u]%2!=0){

        impares=impares+(matriz[i][u]);

     }

    }
}

    printf("Pares: %d%s",pares,"\n");
    printf("�mpares: %d%s",impares,"\n\n");

    do{

    printf("\n\nDeseja verificar novamente?\n");
    printf("\n0-N�o. Quero voltar ao menu de exerc�cios");
    printf("\n1-Sim\n\n");

    fflush(stdin);

    scanf("%d",&verifica);



    if((verifica!=0)&&(verifica!=1)){

        printf("\n\nResposta inv�lida. Por favor, selecione uma das op��es abaixo\n");
        printf("\n0-N�o. Quero voltar ao menu de exerc�cios");
        printf("\n1-Sim\n\n");


         fflush(stdin);
        scanf("%d",&verifica);


        }

    if (verifica==1){

        system("cls");

    }

    if (verifica ==0){

        system("cls");
        menu();
    }


} while ((verifica!=0)&&(verifica!=1));

    }while(verifica!=0);

}

int main (){

setlocale (LC_ALL, "");

do {

    printf("\n");

    menu();


}while (encerrar());

system("cls");

return 0;

}



