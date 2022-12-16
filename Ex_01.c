#include <stdio.h>
#include <locale.h>
#include <stdbool.h>
#include <stdlib.h>


void menu(){

int escolha;

printf("Ol�, seja bem vindo! Selecione o exerc�cio que deseja verificar:\n\n");
printf("0 - Sair do programa\n");
printf("1 - Conversor de notas\n");
printf("2 - Jogo dos n�meros aleat�rios\n");
printf("3 - Soma de fatoriais\n");
printf("4 - Suprimentos de Blobs\n");
printf("5 - Aritm�tica Prim�ria\n\n");


do{

scanf("%d", &escolha);

switch (escolha) {

case 0:
system("cls");
exit(EXIT_SUCCESS);
break;

case 1:
conversor();
break;

case 2:
jogodosnumeros();
break;

case 3:
soma_fatoriais();
break;

case 4:
blobs();
break;

case 5:
aritmetica_primaria();
break;

default:
printf ("\nEscolha inv�lida. Favor selecionar uma das 3 op��es abaixo:\n");
printf("1 - Conversor de notas\n");
printf("2 - Jogo dos n�meros aleat�rios\n");
printf("3 - Soma de fatoriais\n");
printf("4 - Suprimentos de Blobs\n");
printf("5 - Aritm�tica Prim�ria\n\n");

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

int conversor(){

float nota;
int verifica;

system("cls");

do{

    printf("\nBem vindo ao exerc�cio de convers�o de notas. Por favor, digite uma nota para iniciarmos:\n\n");

    scanf("%f",&nota);

    printf("\n");

    if ((nota < 0)||(nota > 100)){

    do{

        printf("Nota inv�lida. Por favor, insira uma nota entre 0 e 100\n\n");

        scanf("%f",&nota);

        printf("\n");

    } while ((nota < 0)||(nota > 100));

    }

    if (nota==0){
        printf("Conceito E");
    }
    if ((nota>=1)&&(nota <36)){
        printf("Conceito D");
    }
    if ((nota >=36)&&(nota<61)){
        printf("Conceito C");
    }
    if ((nota >=61)&&(nota<86)){
        printf("Conceito B");
    }
    if ((nota >=86)&&(nota<=100)){
        printf("Conceito B");
    }

do{

    printf("\n\nDeseja converter outra nota?\n");
    printf("\n0-N�o. Quero voltar ao menu de exerc�cios");
    printf("\n1-Sim\n\n");

    scanf("%d",&verifica);

    if((verifica!=0)&&(verifica!=1)){

        printf("\n\nResposta inv�lida. Por favor, selecione uma das op��es abaixo\n");
        printf("\n0-N�o. Quero voltar ao menu de exerc�cios");
        printf("\n1-Sim\n\n");

        }

    if (verifica==1){

        system("cls");

    }

    if (verifica ==0){

        system("cls");
        menu();
    }


} while ((verifica!=0)&&(verifica!=1));

} while (verifica!=0);

}

int jogodosnumeros(){

int numero,soma,n_random,dificuldade,cont,j_novamente;

srand((unsigned) time(NULL));

system("cls");

do{

printf("\nBem vindo ao exerc�cio do jogo de soma de valores.\n");
printf("As regras s�o simples: Os n�meros que voc� adicionar ser�o somados, at� atingirem o n�mero correto\n");
printf("O n�mero correto � aleat�rio e muda cada vez que voc� inicia o jogo. Est� preparado?\n\n");
printf("Para come�ar, selecione a dificuldade que deseja:\n\n");
printf("0-Sair do jogo [Voc� pode fazer isso � qualquer momento � partir de agora]\n");
printf("1-F�cil [0 - 100]\n");
printf("2-M�dio [0 - 500]\n");
printf("3-Dif�cil[0 - 1000]\n\n");

scanf("%d",&dificuldade);

if((dificuldade!=0)&&(dificuldade!=1)&&(dificuldade!=2)&&(dificuldade!=3)){


    do{

        printf("Op��o inv�lida. Por favor, escolha uma das op��es abaixo:\n");
        printf("0-Sair do jogo\n");
        printf("1-F�cil [0 - 100]\n");
        printf("2-M�dio [0 - 500]\n");
        printf("3-Dif�cil[0 - 1000]\n\n");

        scanf("%d",&dificuldade);

    } while((dificuldade!=0)&&(dificuldade!=1)&&(dificuldade!=2)&&(dificuldade!=3));

}

switch (dificuldade){

    case 0:
        system("cls");
        menu();
        break;
    case 1:
        n_random=(rand())%101;
        system("cls");
        break;
    case 2:
        n_random=(rand())%501;
        system("cls");
        break;
    case 3:
        n_random=(rand())%1001;
        system("cls");
        break;

}

printf("Legal! Voc� selecionou sua dificuldade. Pronto para come�ar?! :) \n");
printf("Por favor, digite seu primeiro n�mero:\n\n");

scanf("%d", &numero);

cont=0;

do{

    soma = soma+numero;

    cont++;

    if (soma < n_random){

    printf("\nO n�mero aleat�rio � mais alto que a sua soma at� o momento\n");
    printf("Digite seu pr�ximo n�mero:\n\n");

    scanf("%d", &numero);

    }

    if (soma > n_random){

    printf("\nO n�mero aleat�rio � mais baixo que a sua soma at� o momento\n");
    printf("Digite seu pr�ximo n�mero:\n\n");

    scanf("%d", &numero);

    }

} while(soma!=n_random);

    system("cls");

    printf("Parab�ns, jogador! Voc� venceu o jogo em: %d%s",cont," jogadas!\n\n");

    printf("Deseja jogar novamente?\n\n");
    printf("0-N�o\n");
    printf("1-Sim\n\n");

    scanf("%d",&j_novamente);

    if((j_novamente!=0)&&(j_novamente!=1)){


    do{

        system("cls");
        printf("Op��o inv�lida. Por favor, escolha uma das op��es abaixo:\n\n");
        printf("Deseja jogar novamente?\n\n");
        printf("0-N�o\n");
        printf("1-Sim\n\n");

        scanf("%d",&j_novamente);

    } while((j_novamente!=0)&&(j_novamente!=1));
}

    system("cls");

}while((dificuldade!=0)||(numero!=0)||(j_novamente!=0));

}

void soma_fatoriais(){

double m, n, soma;
int verifica,aux;
FILE *arq;

do{

system("cls");


    printf("\nBem vindo ao exerc�cio de soma autom�tica de fatoriais\n\n");

    arq = fopen("teste.txt", "rt");

    while (!feof(arq)){

    if ((fscanf(arq,"%lf",&m)!= EOF)&&(fscanf(arq,"%lf",&n)!= EOF)){


    printf("\nPrimeiro n�mero:%.0lf%s",m,"\n\n");

    printf("\nSegundo n�mero:%.0lf%s",n,"\n\n");


    if (m==0){

        m=1;
    }

    aux=(m-1);

    while (aux>1){

        m = m*aux;
        aux--;
    }

    if (n==0){

        n=1;
    }

    aux=(n-1);

    while (aux>1){

        n = n*aux;
        aux--;
    }

    soma=m+n;

    printf("\nA soma do fatorial dos n�meros escolhidos �: %.0lf%s",soma,"\n\n");

    }

}

    printf("\nFim do arquivo!\n\n");


    do{

    printf("\n\nDeseja ler novamente o arquivo?\n");
    printf("\n0-N�o. Quero voltar ao menu de exerc�cios");
    printf("\n1-Sim\n\n");

    scanf("%d",&verifica);

    if((verifica!=0)&&(verifica!=1)){

        printf("\n\nResposta inv�lida. Por favor, selecione uma das op��es abaixo\n");
        printf("\n0-N�o. Quero voltar ao menu de exerc�cios");
        printf("\n1-Sim\n\n");

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

int blobs(){

int N,cont,dias,verifica;
float C;

do{

system("cls");

printf("\nBem vindo ao exerc�cio do c�lculo de suprimentos para Blobs\n\n");



printf("\nPor favor, digite o n�mero de testes que pretende realizar:\n\n");

scanf("%d",&N);


if ((N<1)||(N>1000)){

    do{

        printf("\nO valor digitado � inv�lido. Por favor, digite uma op��a entre 1 e 1000\n\n");
        scanf("%d",&N);

    }while((N<1)||(N>1000));

}

cont=1;
dias=0;

do{

dias=0;

printf("\nDigite quantos Kgs de comida Blobs ter� no teste n� %d%s", cont," :\n\n");

scanf("%f",&C);

if ((C<1)||(C>1000)){

    do{

        printf("\nO valor digitado � inv�lido. Por favor, digite uma op��a entre 1 e 1000\n\n");
        scanf("%f",&C);

    }while((C<1)||(C>1000));

}

while(C>1){
    C=C/2;
    dias++;
}

printf("\nNesta situa��o, Blobs sobreviveria %d%s", dias," dias\n\n");

cont++;
N--;

}while (N>0);

do{

    printf("\n\nDeseja repetir o exerc�cio?\n");
    printf("\n0-N�o. Quero voltar ao menu de exerc�cios");
    printf("\n1-Sim\n\n");

    scanf("%d",&verifica);

    if((verifica!=0)&&(verifica!=1)){

        printf("\n\nResposta inv�lida. Por favor, selecione uma das op��es abaixo\n");
        printf("\n0-N�o. Quero voltar ao menu de exerc�cios");
        printf("\n1-Sim\n\n");

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

int aritmetica_primaria(){

unsigned int valorA, valorB, cont, vaium;
int verifica;

system("cls");

printf("Bem vindo ao exerc�cio de Aritm�tica Prim�ria\n\n");

do{

    do{

    printf("\nPor favor, digite os primeiros n�meros para a opera��o:\n\n");

    scanf("%u", &valorA);

    printf("\nAgora, digite os pr�ximos n�meros para a opera��o:\n\n");

    scanf("%u",&valorB);

    if((valorA!=0) || (valorB!=0)){

    cont=0;
    vaium=0;

    while(valorA || valorB){

        if (((valorA % 10) + (valorB % 10) + vaium) > 9){

            cont++;
            vaium=1;

        }

        else

            vaium =0;

        valorA /= 10;
        valorB /= 10;

    }

    if (cont == 0)
			printf("\nNo carry operation.\n");

		else
			printf("\n%d%s",cont," carry operations.\n");
    }

    }while((valorA!=0) && (valorB!=0));

        do{

    printf("\n\nDeseja repetir o exerc�cio?\n");
    printf("\n0-N�o. Quero voltar ao menu de exerc�cios");
    printf("\n1-Sim\n\n");

    scanf("%d",&verifica);

    if((verifica!=0)&&(verifica!=1)){

        printf("\n\nResposta inv�lida. Por favor, selecione uma das op��es abaixo\n");
        printf("\n0-N�o. Quero voltar ao menu de exerc�cios");
        printf("\n1-Sim\n\n");

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
