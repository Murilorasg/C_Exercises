#include <stdio.h>
#include <locale.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>


void menu(){

int escolha;

printf("Ol�, seja bem vindo! Selecione o exerc�cio que deseja verificar:\n\n");
printf("0 - Sair do programa\n");
printf("1 - N�meros 1 a 5\n");
printf("2 - Vetor de letras\n");
printf("3 - Somat�rio\n");
printf("4 - Busca bin�ria em vetor\n\n");

do{

scanf("%d", &escolha);

switch (escolha) {

case 0:
system("cls");
exit(EXIT_SUCCESS);
break;

case 1:
numeros_1_5();
break;

case 2:
vetor_letras();
break;

case 3:
somatorio();
break;

case 4:
busca_vetor();
break;

default:
printf("Ol�, seja bem vindo! Selecione o exerc�cio que deseja verificar:\n\n");
printf("0 - Sair do programa\n");
printf("1 - N�meros 1 a 5\n");
printf("2 - Vetor de letras\n");
printf("3 - Somat�rio\n");
printf("4 - Busca bin�ria em vetor\n\n");

}

} while ((escolha !=0) && (escolha !=1) && (escolha !=2) && (escolha !=3) && (escolha !=4));

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

int escrevenum(int num){

if (num == 5){

   return num;

}

else

    printf("\n%d",num);

    return escrevenum (num+1);


}

void numeros_1_5(){

int num=1,verifica;

system("cls");

do{

    printf("\nBem vindo ao exerc�cio de demonstra��o dos n�meros de 1 a 5 em fun��o recursiva\n\n");

    printf("\n%d",escrevenum(num));


    do{

    printf("\n\nDeseja verificar o exerc�cio novamente?\n");
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

char imprime_letras(char palavra[30], int cont){

if (cont == 0){

    return palavra[0];

}

else{


    printf("%c",palavra[cont]);
    return imprime_letras(palavra,cont-1);

    }

}

void vetor_letras(){

int cont=30,verifica;
char palavra[30];

system("cls");

do{

    printf("\nBem vindo ao exerc�cio de impress�o de elementos em um vetor\n\n");
    printf("Por favor, digite a palavra que ser� impressa ao contr�rio:\n\n");

    scanf("%s",palavra);

    cont=strlen(palavra);


    printf("%c",imprime_letras(palavra,cont));



    do{

    printf("\n\nDeseja verificar o exerc�cio novamente?\n");
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

int calcula_somatorio(max,min,soma){

if (max<min){

    return soma;

}

else

    soma += max;

    return calcula_somatorio(max-1,min,soma);

}

void somatorio(){

int soma=0,max,min,verifica;

system("cls");

do{

    printf("\nBem vindo ao exerc�cio de somat�rio de interv�los\n\n");
    printf("Por favor, digite o interv�lo a ter o somat�rio calculado(M�nimo e M�ximo):\n\n");

    scanf("%d%d",&min,&max);


    printf("\nO somat�rio de �: %d",calcula_somatorio(max,min,soma),"\n");



    do{

    printf("\n\nDeseja verificar outro intervalo?\n");
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

void busca_vetor(){

int verifica,vetor[50],chave,cont,cont2,aux;

system("cls");

do{

    srand((unsigned) time(NULL));

    for(cont=0;cont<50;cont++){

    vetor[cont]=(rand())%100;

    }


    printf("\nBem vindo ao exerc�cio de busca bin�ria em vetor\n\n");
    printf("Por favor, digite o n�mero a ser buscado:\n\n");



      for(cont=0;cont<50;cont++){

            for(cont2=0;cont2<50;cont2++){

        if(vetor[cont]<vetor[cont2]){

            aux = vetor[cont2];
            vetor[cont2]=vetor[cont];
            vetor[cont]=aux;

            }
        }
    }

    for(cont=0;cont<50;cont++){

    if(cont==49){

        printf("%d",vetor[cont]);

    }

    else

    printf("%d,",vetor[cont]);


    }

    printf("\n\n");


    scanf("%d",&chave);

    aux=50;

    while(aux/2!=0){

            cont2=(aux/2);

        if (vetor[cont2]==chave){

            printf("\nO n�mero que voc� digitou est� alocado no espa�o %d do vetor.",(aux/2));

        }

        if (vetor[cont2]>chave){

            for(cont=0;cont<(cont2);cont++){

                if (vetor[cont]==chave){

                   printf("\nO n�mero que voc� digitou est� alocado no espa�o %d do vetor.",cont);

                   aux=0;

                }
            }
        }


        if (vetor[cont2]<chave){

            for(cont=(cont2);cont<50;cont++){

                if (vetor[cont]== chave){

                   printf("\nO n�mero que voc� digitou est� alocado no espa�o %d do vetor.",cont);

                   aux=0;

                }
            }
        }

        if((cont2==1)&&(vetor[cont2]!=chave)){

            printf("\nO n�mero que voc� digitou n�o encontra-se no vetor.");

        }


        aux=aux/2;
    }


    do{

    printf("\n\nDeseja verificar outro n�mero?\n");
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
