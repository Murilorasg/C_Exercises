#include <stdio.h>
#include <locale.h>
#include <stdbool.h>
#include <stdlib.h>


void menu(){

int escolha;

printf("Olá, seja bem vindo! Selecione o exercício que deseja verificar:\n\n");
printf("0 - Sair do programa\n");
printf("1 - Conversor de notas\n");
printf("2 - Jogo dos números aleatórios\n");
printf("3 - Soma de fatoriais\n");
printf("4 - Suprimentos de Blobs\n");
printf("5 - Aritmética Primária\n\n");


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
printf ("\nEscolha inválida. Favor selecionar uma das 3 opções abaixo:\n");
printf("1 - Conversor de notas\n");
printf("2 - Jogo dos números aleatórios\n");
printf("3 - Soma de fatoriais\n");
printf("4 - Suprimentos de Blobs\n");
printf("5 - Aritmética Primária\n\n");

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

    printf("\nBem vindo ao exercício de conversão de notas. Por favor, digite uma nota para iniciarmos:\n\n");

    scanf("%f",&nota);

    printf("\n");

    if ((nota < 0)||(nota > 100)){

    do{

        printf("Nota inválida. Por favor, insira uma nota entre 0 e 100\n\n");

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
    printf("\n0-Não. Quero voltar ao menu de exercícios");
    printf("\n1-Sim\n\n");

    scanf("%d",&verifica);

    if((verifica!=0)&&(verifica!=1)){

        printf("\n\nResposta inválida. Por favor, selecione uma das opções abaixo\n");
        printf("\n0-Não. Quero voltar ao menu de exercícios");
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

printf("\nBem vindo ao exercício do jogo de soma de valores.\n");
printf("As regras são simples: Os números que você adicionar serão somados, até atingirem o número correto\n");
printf("O número correto é aleatório e muda cada vez que você inicia o jogo. Está preparado?\n\n");
printf("Para começar, selecione a dificuldade que deseja:\n\n");
printf("0-Sair do jogo [Você pode fazer isso à qualquer momento à partir de agora]\n");
printf("1-Fácil [0 - 100]\n");
printf("2-Médio [0 - 500]\n");
printf("3-Difícil[0 - 1000]\n\n");

scanf("%d",&dificuldade);

if((dificuldade!=0)&&(dificuldade!=1)&&(dificuldade!=2)&&(dificuldade!=3)){


    do{

        printf("Opção inválida. Por favor, escolha uma das opções abaixo:\n");
        printf("0-Sair do jogo\n");
        printf("1-Fácil [0 - 100]\n");
        printf("2-Médio [0 - 500]\n");
        printf("3-Difícil[0 - 1000]\n\n");

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

printf("Legal! Você selecionou sua dificuldade. Pronto para começar?! :) \n");
printf("Por favor, digite seu primeiro número:\n\n");

scanf("%d", &numero);

cont=0;

do{

    soma = soma+numero;

    cont++;

    if (soma < n_random){

    printf("\nO número aleatório é mais alto que a sua soma até o momento\n");
    printf("Digite seu próximo número:\n\n");

    scanf("%d", &numero);

    }

    if (soma > n_random){

    printf("\nO número aleatório é mais baixo que a sua soma até o momento\n");
    printf("Digite seu próximo número:\n\n");

    scanf("%d", &numero);

    }

} while(soma!=n_random);

    system("cls");

    printf("Parabéns, jogador! Você venceu o jogo em: %d%s",cont," jogadas!\n\n");

    printf("Deseja jogar novamente?\n\n");
    printf("0-Não\n");
    printf("1-Sim\n\n");

    scanf("%d",&j_novamente);

    if((j_novamente!=0)&&(j_novamente!=1)){


    do{

        system("cls");
        printf("Opção inválida. Por favor, escolha uma das opções abaixo:\n\n");
        printf("Deseja jogar novamente?\n\n");
        printf("0-Não\n");
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


    printf("\nBem vindo ao exercício de soma automática de fatoriais\n\n");

    arq = fopen("teste.txt", "rt");

    while (!feof(arq)){

    if ((fscanf(arq,"%lf",&m)!= EOF)&&(fscanf(arq,"%lf",&n)!= EOF)){


    printf("\nPrimeiro número:%.0lf%s",m,"\n\n");

    printf("\nSegundo número:%.0lf%s",n,"\n\n");


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

    printf("\nA soma do fatorial dos números escolhidos é: %.0lf%s",soma,"\n\n");

    }

}

    printf("\nFim do arquivo!\n\n");


    do{

    printf("\n\nDeseja ler novamente o arquivo?\n");
    printf("\n0-Não. Quero voltar ao menu de exercícios");
    printf("\n1-Sim\n\n");

    scanf("%d",&verifica);

    if((verifica!=0)&&(verifica!=1)){

        printf("\n\nResposta inválida. Por favor, selecione uma das opções abaixo\n");
        printf("\n0-Não. Quero voltar ao menu de exercícios");
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

printf("\nBem vindo ao exercício do cálculo de suprimentos para Blobs\n\n");



printf("\nPor favor, digite o número de testes que pretende realizar:\n\n");

scanf("%d",&N);


if ((N<1)||(N>1000)){

    do{

        printf("\nO valor digitado é inválido. Por favor, digite uma opçõa entre 1 e 1000\n\n");
        scanf("%d",&N);

    }while((N<1)||(N>1000));

}

cont=1;
dias=0;

do{

dias=0;

printf("\nDigite quantos Kgs de comida Blobs terá no teste nº %d%s", cont," :\n\n");

scanf("%f",&C);

if ((C<1)||(C>1000)){

    do{

        printf("\nO valor digitado é inválido. Por favor, digite uma opçõa entre 1 e 1000\n\n");
        scanf("%f",&C);

    }while((C<1)||(C>1000));

}

while(C>1){
    C=C/2;
    dias++;
}

printf("\nNesta situação, Blobs sobreviveria %d%s", dias," dias\n\n");

cont++;
N--;

}while (N>0);

do{

    printf("\n\nDeseja repetir o exercício?\n");
    printf("\n0-Não. Quero voltar ao menu de exercícios");
    printf("\n1-Sim\n\n");

    scanf("%d",&verifica);

    if((verifica!=0)&&(verifica!=1)){

        printf("\n\nResposta inválida. Por favor, selecione uma das opções abaixo\n");
        printf("\n0-Não. Quero voltar ao menu de exercícios");
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

printf("Bem vindo ao exercício de Aritmética Primária\n\n");

do{

    do{

    printf("\nPor favor, digite os primeiros números para a operação:\n\n");

    scanf("%u", &valorA);

    printf("\nAgora, digite os próximos números para a operação:\n\n");

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

    printf("\n\nDeseja repetir o exercício?\n");
    printf("\n0-Não. Quero voltar ao menu de exercícios");
    printf("\n1-Sim\n\n");

    scanf("%d",&verifica);

    if((verifica!=0)&&(verifica!=1)){

        printf("\n\nResposta inválida. Por favor, selecione uma das opções abaixo\n");
        printf("\n0-Não. Quero voltar ao menu de exercícios");
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
