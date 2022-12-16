#include <stdio.h>
#include <locale.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>


void menu(){

int escolha;

printf("Olá, seja bem vindo! Selecione o exercício que deseja verificar:\n\n");
printf("0 - Sair do programa\n");
printf("1 - Distância Euclidiana\n");
printf("2 - Fatorial de N\n");
printf("3 - Somatório de N\n");
printf("4 - Somatório de Algoritmos\n\n");

do{

scanf("%d", &escolha);

switch (escolha) {

case 0:
system("cls");
exit(EXIT_SUCCESS);
break;

case 1:
distancia_euclidiana();
break;

case 2:
fatorial_n();
break;

case 3:
somatorio_n();
break;

case 4:
somatorio_algarismos();
break;

default:
printf("Olá, seja bem vindo! Selecione o exercício que deseja verificar:\n\n");
printf("0 - Sair do programa\n");
printf("1 - Distância Euclidiana\n");
printf("2 - Fatorial de N\n");
printf("3 - Somatório de N\n");
printf("4 - Somatório de Algoritmos\n\n");

}

} while ((escolha !=0) && (escolha !=1) && (escolha !=2) && (escolha !=3) && (escolha !=4));

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

if(resposta == 0){

    system("crs");

    return false;
}

    else

    system("cls");

    return true;
}

float calcula_distancia(x1,y1,x2,y2){

float resultado;

resultado = sqrt(((x1-x2)^2)+((y1-y2)^2));

return resultado;

}

void distancia_euclidiana(){

int x1,y1,x2,y2,verifica;

system("cls");

do{

    printf("\nBem vindo ao exercício de cálculo de distância euclidiana\n\n");
    printf("Por favor, digite os dois números da coordenada do plano cartesiano (X1 e Y1)\n\n");

    scanf("%d",&x1);
    scanf("%d",&y1);

    printf("\n\Agora, digite os dois números da segunda coordenada do plano cartesiano (X2 e Y2)\n\n");

    scanf("%d",&x2);
    scanf("%d",&y2);

    printf("\nA distância entre os dois pontos é de: %.2f%s",calcula_distancia(x1,y2,x2,y2),".\n\n ");

    do{

    printf("\n\nDeseja realizar a medida de outra distância?\n");
    printf("\n0-Não. Quero voltar ao menu de exercícios");
    printf("\n1-Sim\n\n");

        fflush(stdin);

    scanf("%d",&verifica);



    if((verifica!=0)&&(verifica!=1)){

        printf("\n\nResposta inválida. Por favor, selecione uma das opções abaixo\n");
        printf("\n0-Não. Quero voltar ao menu de exercícios");
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

int calcula_fatorial(n){

int fatorial=1;

while(n>0){

    fatorial = fatorial*n;
    n--;
}

    return fatorial;

}

void fatorial_n(){

int n,verifica;

system("cls");

do{

    printf("\nBem vindo ao exercício de cálculo de fatorial de N\n\n");
    printf("Por favor, digite o número que terá seu fatorial calculado:\n\n");

    scanf("%d",&n);

    if (n<0){

        do{

        printf("\nNúmero inválido. Favor digitar um número positivo:\n\n");
        scanf("%d",&n);

        }while(n<0);
    }

    if (n==0){

    printf("O fatorial de %d%s",n," é : 0\n ");

    }

    if(n>0){

    printf("O fatorial de %d%s%d%s",n," é :",calcula_fatorial(n),"\n");

    }

    do{

    printf("\n\nDeseja verificar outro número?\n");
    printf("\n0-Não. Quero voltar ao menu de exercícios");
    printf("\n1-Sim\n\n");

    fflush(stdin);

    scanf("%d",&verifica);



    if((verifica!=0)&&(verifica!=1)){

        printf("\n\nResposta inválida. Por favor, selecione uma das opções abaixo\n");
        printf("\n0-Não. Quero voltar ao menu de exercícios");
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

int calcula_somatorio(n){

int somatorio=0;
int i=1;

while(i<=n){

    somatorio = somatorio+i;
    i++;
}

    return somatorio;

}

void somatorio_n(){

int n,verifica;

system("cls");

do{

    printf("\nBem vindo ao exercício de cálculo de somatório de N\n\n");
    printf("Por favor, digite o número que terá o somatório calculado:\n\n");

    scanf("%d",&n);

    if (n<0){

        do{

        printf("\nNúmero inválido. Favor digitar um número positivo:\n\n");
        scanf("%d",&n);

        }while(n<0);
    }

    if (n==0){

    printf("O fatorial de %d%s",n," é : 0\n ");

    }

    if(n>0){

    printf("\nO somatório de %d%s%d%s",n," é :",calcula_somatorio(n),"\n");

    }

    do{

    printf("\n\nDeseja verificar outro número?\n");
    printf("\n0-Não. Quero voltar ao menu de exercícios");
    printf("\n1-Sim\n\n");

    fflush(stdin);

    scanf("%d",&verifica);



    if((verifica!=0)&&(verifica!=1)){

        printf("\n\nResposta inválida. Por favor, selecione uma das opções abaixo\n");
        printf("\n0-Não. Quero voltar ao menu de exercícios");
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

int calcula_somadigito(char n[2],char n2[2],char n3[2]){

int somatorio=0;
int ni=0,ni2=0,ni3=0;

sscanf(n,"%d",&ni);
sscanf(n2,"%d",&ni2);
sscanf(n3,"%d",&ni3);

somatorio = ni+ni2+ni3;

    return somatorio;

}

void somatorio_algarismos(){

int verifica;
char n[2],n2[2],n3[2],auxs[2]="2";
int i,soma=0,aux=0;

system("cls");

do{

    printf("\nBem vindo ao exercício de soma de algoritmos\n\n");
    printf("Por favor, digite um número de 3 algorismos:\n\n");

    fflush(stdin);

    scanf("%c%c%c",n,n2,n3);

    printf("\nA soma dos algarismos %d, %d, %d, é igual a: %d",n[0]-'0',n2[0]-'0',n3[0]-'0',calcula_somadigito(n,n2,n3));


    do{

    printf("\n\nDeseja verificar outro número?\n");
    printf("\n0-Não. Quero voltar ao menu de exercícios");
    printf("\n1-Sim\n\n");

    fflush(stdin);

    scanf("%d",&verifica);



    if((verifica!=0)&&(verifica!=1)){

        printf("\n\nResposta inválida. Por favor, selecione uma das opções abaixo\n");
        printf("\n0-Não. Quero voltar ao menu de exercícios");
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
