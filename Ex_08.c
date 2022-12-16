#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <locale.h>
#define TAM 5

typedef struct stack{

    int elem[TAM];
    int topo;
}PILHA;

void inicialzarPilha(PILHA *pilha){

    pilha->topo = -1;
}

int pilhaVazia(PILHA *pilha){

    if (pilha->topo == -1){

        return 1;

    }

    return 0;
}

int pilhaCheia(PILHA *pilha){

    if(pilha->topo == (TAM-1)){

        return 1;
    }

    return 0;
}

//push - empilhar
int push(PILHA *pilha, int elemento){

    if(pilhaCheia(pilha)){

        printf("\nErro! Pilha cheia");

        return 0;
    }

    pilha->elem[pilha->topo+1]=elemento;
    pilha->topo++;

    return 1;
}

int pop(PILHA *pilha){

    int removido = -1;

    if(pilhaVazia(pilha)){

        printf("\nNão há elementos para remover!");
        return removido;
    }

    removido = pilha->elem[pilha->topo];
    pilha->topo--;
    return removido;
}

int topoEl(PILHA *pilha){

    int topo = -1;

    if(pilhaVazia(pilha)){

        printf("\nNão há elemento");

        return topo;
    }

    topo = pilha->elem[pilha->topo];
    return topo;
}

int pesquisaEl(PILHA *pilha, int elemento){

    int i;


     if(pilhaVazia(pilha)){

        printf("\nNão há elementos na pilha!");
        return -1;
    }

    for(i=0;i<=pilha->topo;i++){

        if(pilha->elem[i]==elemento){

        return i;
        }
    }

    printf("\nO elemento não existe na pilha");

    return -1;
}

void imprimePilha(PILHA *pilha){

    int i;

      if(pilhaVazia(pilha)){

        printf("\Pilha Vazia!");
        return 0;
    }

    for(i=0;i<=pilha->topo;i++){

        printf("%d\n",pilha->elem[i]);

    }
    return;
}

bool encerrar(){

int resposta;

     do {

    printf ("\n\nDeseja encerrar o programa?\n\n");
    printf ("0-Sim\n");
    printf ("1-Não\n\n");

    fflush(stdin);

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

int main(){

    setlocale (LC_ALL, "");

    PILHA p;
    int elemento,escolha;

    inicialzarPilha(&p);

do {


printf("Olá, seja bem vindo! Selecione a funcao que deseja rodar:\n\n");
printf("0 - Sair do programa\n");
printf("1 - Verificar se vazia\n");
printf("2 - Verificar se cheia\n");
printf("3 - Adicionar elemento no topo\n");
printf("4 - Remover elemento do topo\n");
printf("5 - Verificar elemento do topo\n");
printf("6 - Pesquisa elemento na pilha\n");
printf("7 - Imprimir pilha\n\n");

scanf("%d", &escolha);

switch (escolha) {

case 0:
system("cls");
exit(EXIT_SUCCESS);
break;

case 1:

    system("cls");

if(pilhaVazia(&p)==1){

    printf("\nA lista está vazia\n");

}else{

    printf("\nA lista não está vazia\n");

}
break;

case 2:

    system("cls");

if(pilhaCheia(&p)==1){

    printf("\nA lista está cheia\n");

}else{

    printf("\nA lista não está cheia\n");
}
break;

case 3:

    system("cls");

    printf("Digite o elemento para adicionar ao topo:\n\n");

    scanf("%d",&elemento);

if(push(&p,elemento)==1){

    printf("\nElemento inserido com sucesso!\n");

}
break;

case 4:

    system("cls");

    if(pop(&p)!=-1){

        printf("\nElemento removido com sucesso!\n");
}
break;

case 5:

    system("cls");

    printf("%d",topoEl(&p));
break;

case 6:

    system("cls");

    printf("\nDigite o elemento que deseja buscar na pilha:\n\n");

    fflush(stdin);

    scanf("%d",&elemento);

    if(pesquisaEl(&p,elemento)!=-1){

        printf("%s%d%s","\nO elemento está na posição ",pesquisaEl(&p,elemento)," da pilha");
    }
break;

case 7:

    system("cls");

    imprimePilha(&p);
break;

default:

system("cls");

printf("Olá, seja bem vindo! Selecione a funcao que deseja rodar:\n\n");
printf("0 - Sair do programa\n");
printf("1 - Verificar se vazia\n");
printf("2 - Verificar se cheia\n");
printf("3 - Adicionar elemento no topo\n");
printf("4 - Remover elemento do topo\n");
printf("5 - Verificar elemento do topo\n");
printf("6 - Pesquisa elemento na pilha\n");
printf("7 - Imprimir pilha\n\n");


} while (escolha < 0 && escolha > 7);


}while (encerrar());

system("cls");


return 0;

}
