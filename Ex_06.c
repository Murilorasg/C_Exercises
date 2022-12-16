#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <locale.h>
#define MAX_TAM 10

typedef struct sLista{
    char elem[MAX_TAM];
    int ultimo;
}Lista;

void iniciarLista(Lista *lista){

    lista->ultimo = -1;

}

int listaCheia(Lista *lista){

    if (lista->ultimo == (MAX_TAM - 1)){

        return 1;

    }

    return 0;

}

int inserirFim(Lista *lista, char elemento){

    if (listaCheia(lista)){

        printf("ERRO: lista cheia!\n");
        return 0;

    }


    lista->elem[lista->ultimo+1] = elemento;
    lista->ultimo++;
    return 1;

}

int modificarElemento(Lista *lista, int posicao, char elem){


    if(listaVazia(lista)){

        printf("\nERRO: Lista Vazia!\n");

        return 0;

    }

    if(!listaVazia(lista)){

        if (posicao >= 0 && posicao < lista->ultimo + 1){

            lista->elem[posicao] = elem;

            return 1;

        }

    }

    return 0;
}

int listaVazia(Lista *lista){

    if(lista->ultimo == -1){

        return 1;
    }

    return 0;
}

int removerElemento(Lista *lista, int posicao){

    int i;

    if(listaVazia(lista)){

        printf("\nERRO: Lista Vazia!\n");
        return 0;
    }

    if((posicao < 0) || (posicao > lista->ultimo)){

        printf("\nERRO: Posição Inválida!\n");
        return 0;

    }


    for(i=posicao; i<lista->ultimo;i++){

        lista->elem[i] = lista->elem[i+1];

    }

    lista->ultimo--;
    return 1;

}

char acessarElemento(Lista *lista, int posicao){

    if (listaVazia(lista)){

        printf("\nERRO: Lista Vazia!");
        return "";

    }

    if(posicao < 0 || posicao > lista->ultimo){

        printf("\nERRO: Posição Inválida!\n");
        return "";

}

    return lista->elem[posicao];

}

int pesquisarElemento(Lista *lista, char elem){

    int i;

      if (listaVazia(lista)){

        printf("\nERRO: Lista Vazia!");
        return -1;

    }

    for (i=0; i<=lista->ultimo;i++){

        if(lista->elem[i]==elem){

            return i;
        }
    }

    return -1;

}

int tamanhoLista(Lista *lista){

    return lista->ultimo+1;

}

int imprimeLista(Lista *lista){

    int i;

   if (listaVazia(lista)){

        printf("\nERRO: Lista Vazia!");
        return 0;

    }

    for(i=0;i<=lista->ultimo;i++){

        printf("%c%s",lista->elem[i],"\n");

    }

    return 1;
}

int inserirPosicao(Lista *lista, int posicao, char elem){

    if (listaVazia(lista)){

        printf("\nERRO: Lista Vazia!\n");

        return 0;

    }


    if (posicao >= 0 && posicao <= lista->ultimo+1){

        lista->elem[posicao] = elem;

        return 1;
    }

    printf("\nERRO: Posicao Invalida!\n");

    return 0;

}

int inverteLista(Lista *lista){

    char aux;
    int i;

  if (listaVazia(lista)){

        printf("\nERRO: Lista Vazia!\n");

        return 0;

    }

    for(i=0;i<=(lista->ultimo/2);i++){

        aux = lista->elem[i];
        lista->elem[i] = lista->elem[lista->ultimo-i];
        lista->elem[lista->ultimo-i] = aux;

    }

    return 1;

}

int ordenaLista(Lista *lista){

    int i,c;
    char aux;

    if (listaVazia(lista)){

            printf("\nERRO: Lista Vazia!\n");

            return 0;
    }

    for (i=lista->ultimo;i>0;i--){

            for(c=0;c<i;c++){

                if(lista->elem[c]>lista->elem[c+1]){

                    aux=lista->elem[c];
                    lista->elem[c]=lista->elem[c+1];
                    lista->elem[c+1]=aux;

             }
        }
    }

    return 1;

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

void menu(Lista *lista){

int escolha,posicao;
char elemento;

printf("Olá, seja bem vindo! Selecione a funcao que deseja rodar:\n\n");
printf("0 - Sair do programa\n");
printf("1 - Verificar se a lista esta cheia\n");
printf("2 - Inserir elemento no fim da lista\n");
printf("3 - Modificar elemento de posicao especifica\n");
printf("4 - Verificar se a lista esta vazia\n");
printf("5 - Remover elemento de posicao especifica\n");
printf("6 - Acessar elemento em posicao especifica\n");
printf("7 - Pesquisar se elemento esta na lista\n");
printf("8 - Verificar tamanho da lista\n");
printf("9 - Imprimir lista\n");
printf("10 - Inserir elemento em posicao especifica da lista\n");
printf("11 - Inverter lista\n");
printf("12 - Ordenar lista do menor para o maior\n\n");

do{

scanf("%d", &escolha);

switch (escolha) {

case 0:
system("cls");
exit(EXIT_SUCCESS);
break;

case 1:
    system("cls");
if(listaCheia(lista)==1){

    printf("\nA lista está cheia\n");

}else{

    printf("\nA lista não está cheia\n");

}
break;

case 2:

    system("cls");

    printf("Digite o elemento que deseja adicionar ao final da lista:\n\n");

    fflush(stdin);

    scanf("%c",&elemento);

if(inserirFim(lista,elemento)==1){

    printf("\nElemento inserido com sucesso!\n");

}
break;

case 3:

    system("cls");

    printf("Digite a posicao do elemento que deseja alterar:\n\n");

    scanf("%d",&posicao);

    printf("\nDigite o elemento que deseja adicionar na posicao escolhida:\n\n");

    fflush(stdin);

    scanf("%c",&elemento);

if(modificarElemento(lista,posicao,elemento)==1){

    printf("\nElemento modificado com sucesso!\n");

}
break;

case 4:

    system("cls");

if(listaVazia(lista)==1){

    printf("\nA lista está vazia\n");

}else{

    printf("\nA lista não está vazia\n");

}
break;

case 5:

    system("cls");

    printf("Digite a posicao do elemento que deseja remover da lista:\n\n");

    scanf("%d",&posicao);

if(removerElemento(lista,posicao)==1){

    printf("\nElemento removido com sucesso!\n");

}
break;

case 6:

  system("cls");

    printf("Digite a posicao do elemento que deseja acessar:\n\n");

    scanf("%d",&posicao);

    if(acessarElemento(lista,posicao)==1){

    printf("\nEste e o elemento da posicao solicitada: %c",acessarElemento(lista,posicao));

    }

break;

case 7:
system("cls");

    printf("Digite o elemento que deseja pesquisar na lista:\n\n");

    fflush(stdin);

    scanf("%c",&elemento);

    if(pesquisarElemento(lista,elemento)!=-1){

        printf("\nO elemento que pesquisou encontra-se na posicao nº: %d",pesquisarElemento(lista,elemento));

    }else{

    printf("\nO elemento que pesquisou não encontra-se na lista");
    }

break;

case 8:

system("cls");

printf("A lista esta com %d%s",tamanhoLista(lista)," posicoes");
break;

case 9:
    system("cls");
imprimeLista(lista);
break;

case 10:
    system("cls");

    printf("Digite a posicao na qual deseja inserir o elemento:\n\n");

    scanf("%d",&posicao);

    printf("\nDigite o elemento que deseja inserir na posicao escolhida:\n\n");

    fflush(stdin);

    scanf("%c",&elemento);

if(inserirPosicao(lista,posicao,elemento)==1){

    printf("\nElemento inserido com sucesso!\n");

}
break;

case 11:
system("cls");

if(inverteLista(lista)==1){

    printf("\nLista invertida com sucesso!\n\n");

    imprimeLista(lista);

}
break;

case 12:
system("cls");

if(ordenaLista(lista)==1){

    printf("\nLista ordenada com sucesso!\n\n");

    imprimeLista(lista);

}
break;

default:

system("cls");

printf("Olá, seja bem vindo! Selecione a funcao que deseja rodar:\n\n");
printf("0 - Sair do programa\n");
printf("1 - Verificar se a lista esta cheia\n");
printf("2 - Inserir elemento no fim da lista\n");
printf("3 - Modificar elemento de posicao especifica\n");
printf("4 - Verificar se a lista esta vazia\n");
printf("5 - Remover elemento de posicao especifica\n");
printf("6 - Acessar elemento em posicao especifica\n");
printf("7 - Pesquisar se elemento esta na lista\n");
printf("8 - Verificar tamanho da lista\n");
printf("9 - Imprimir lista\n");
printf("10 - Inserir elemento em posicao especifica da lista\n");
printf("11 - Inverter lista\n");
printf("12 - Ordenar lista do menor para o maior\n\n");

}

} while (escolha < 0 && escolha > 12);

}

int main(){

    setlocale (LC_ALL, "");

    Lista *lista = (Lista *) malloc (sizeof(Lista));

    if(lista != NULL){
    iniciarLista(lista);
}

do {

    printf("\n");

    menu(lista);


}while (encerrar());

system("cls");


return 0;
}
