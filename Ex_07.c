#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <locale.h>
#define MAX_TAM 10

typedef struct sPessoa{

    char nome[50];
    int matricula;
}PESSOA;

typedef struct sCell{

    PESSOA info;
    struct sCell *next;
}CELULA;

CELULA* criarCelula(){

    CELULA *nova = (CELULA *) malloc(sizeof(CELULA));
    return nova;
}

void inicializarLista(CELULA **lista){

    (*lista)=NULL;

}

int listaVazia(CELULA **lista){

    if((*lista)==NULL){

        return 1;
    }

    return 0;
}

int inserirFim(CELULA **lista, PESSOA elemento){

    CELULA *novaCelula;
    CELULA *auxiliar;

    novaCelula = criarCelula();

    if (novaCelula == NULL){

        printf("Erro: Memória cheia!\n");
        return 0;
    }

    novaCelula->info = elemento;
    novaCelula->next = NULL;

    if(listaVazia(lista)){
        (*lista) = novaCelula;
        return 1;
            }

    auxiliar = (*lista);

    while(auxiliar->next !=NULL){

        auxiliar = auxiliar->next;
    }

    auxiliar->next = novaCelula;
        return 1;
}

int inserirInicio(CELULA **lista, PESSOA elemento){

    CELULA *novaCelula = criarCelula();

    if(novaCelula == NULL){

        printf("Erro: Memória cheia!\n");
        return 0;

    }

    if(listaVazia(lista)==1){

        return inserirFim(lista, elemento);
    }

    novaCelula->info = elemento;

    novaCelula->next = (*lista);

    (*lista) = novaCelula;

    return 1;
}

void imprimirElemento(PESSOA elemento){

    printf("\nMatricula:%d", elemento.matricula);
    printf("\nNome:%s", elemento.nome);
    printf("\n");

}

void imprimirLista(CELULA **lista){

    CELULA *auxiliar = (*lista);

    if(listaVazia(lista)==1){

        printf("Lista Vazia");
    }else{


    printf("\nLista: \n");

    while(auxiliar != NULL){

        imprimirElemento(auxiliar->info);
        auxiliar = auxiliar->next;
    }

        printf("\n");

    }

}

PESSOA removerInicio(CELULA **lista){

    CELULA *removida;

    PESSOA removido;

    strcpy(removido.nome," ");
    removido.matricula = -1;

    if (listaVazia(lista)){

        printf("ERRO: Lista vazia\n");
        return removido;
    }

    removida = (*lista);
    removido = removida->info;

    (*lista) = (*lista)->next;

    free(removida);

    return removido;

}

PESSOA criarPessoa(char elemento, int matr){

    PESSOA newPessoa;

    newPessoa.matricula = matr;
    strcpy(newPessoa.nome,"nome");

    return newPessoa;
}

PESSOA removerFinal(CELULA **lista){

    CELULA *removida;
    CELULA *anterior;
    PESSOA removido = criarPessoa("",-1);

    if(listaVazia(lista)){

       printf("ERRO: Lista vazia\n");
        return removerInicio(lista);
    }

    if((*lista)->next == NULL){

        return removerInicio(lista);
    }

    removida = (*lista);

    while(removida->next != NULL){

        anterior = removida;
        removida = removida->next;
    }

    removido = removida->info;
    anterior->next = NULL;

    free(removida);

    return removido;

}

CELULA *pesquisarMatr(CELULA **lista, int matr){

    CELULA *auxiliar;

    if(listaVazia(lista)){

        printf("ERRO: lista vazia \n");
        return NULL;
    }

    auxiliar = (*lista);

    while (auxiliar !=NULL){

        if(auxiliar->info.matricula == matr){

            return auxiliar;

            }

            auxiliar = auxiliar->next;

    }

        return NULL;


}

PESSOA removeMatr(CELULA **lista, int matr){

    CELULA *removida;
    CELULA *anterior;
    PESSOA pRemover = criarPessoa("",-1);


     if(listaVazia(lista)){

        printf("\nERRO: lista vazia \n");
        return pRemover;
    }

    removida = pesquisarMatr(lista, matr);

    if(removida==NULL){

        printf("\nERRO: Matricula não encontrada\n");

        return pRemover;
    }

    if(removida == (*lista)){

        return removerInicio(lista);
    }

    pRemover = removida->info;

    anterior = (*lista);

    while(anterior->next!=removida){

        anterior = anterior->next;

    }

    anterior->next = removida->next;

    free(removida);

    return pRemover;

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

int main(){

    setlocale (LC_ALL, "");

    CELULA *lista;
    int escolha,matr;
    PESSOA elemento;

    inicializarLista(&lista);

do {


printf("Olá, seja bem vindo! Selecione a funcao que deseja rodar:\n\n");
printf("0 - Sair do programa\n");
printf("1 - Verificar se vazia\n");
printf("2 - Inserir pessoa no fim\n");
printf("3 - Inserir pessoa no início\n");
printf("4 - Imprimir lista de pessoas\n");
printf("5 - Remover pessoa no início\n");
printf("6 - Remover pessoa no fim\n");
printf("7 - Pesquisar por matrícula\n");
printf("8 - Remover por matrícula\n\n");

do{

scanf("%d", &escolha);

switch (escolha) {

case 0:
system("cls");
exit(EXIT_SUCCESS);
break;

case 1:

    system("cls");

if(listaVazia(&lista)==1){

    printf("\nA lista está vazia\n");

}else{

    printf("\nA lista não está vazia\n");

}
break;

case 2:

    system("cls");

    printf("Digite o nome do aluno que deseja adicionar ao final da lista:\n\n");

    fflush(stdin);

    scanf("%s",&elemento.nome);

    printf("\nDigite o número de matrícula do aluno que deseja adicionar ao final da lista:\n\n");

    fflush(stdin);

    scanf("%d",&elemento.matricula);

if(inserirFim(&lista,elemento)==1){

    printf("\nPessoa inserida com sucesso!\n");

}
break;

case 3:

    system("cls");

    printf("Digite o nome do aluno que deseja adicionar ao início da lista:\n\n");

    fflush(stdin);

    scanf("%s",&elemento.nome);

    printf("\nDigite o número de matrícula do aluno que deseja adicionar ao início da lista:\n\n");

    fflush(stdin);

    scanf("%d",&elemento.matricula);

if(inserirInicio(&lista,elemento)==1){

    printf("\nPessoa inserida com sucesso!\n");

}
break;

case 4:

    system("cls");

    imprimirLista(&lista);

break;

case 5:

    system("cls");

    printf("Removido do início com sucesso\n\n");

    printf("%s",removerInicio(&lista));

break;

case 6:

    system("cls");

    printf("Removido do final com sucesso:\n\n");

    printf("%s",removerFinal(&lista));


break;

case 7:

    system("cls");

    printf("Digite número de matrícula que deseja pesquisar:\n\n");

    scanf("%d",&matr);

    if(pesquisarMatr(&lista,matr)==NULL){

        printf("\nMatrícula não existente\n");

    }else

    printf("\n%s",pesquisarMatr(&lista,matr));

break;

case 8:

    system("cls");

    printf("Digite número de matrícula que deseja remover da lista:\n\n");

    scanf("%d",&matr);

    removeMatr(&lista,matr);

break;

default:

system("cls");

printf("Olá, seja bem vindo! Selecione a funcao que deseja rodar:\n\n");
printf("0 - Sair do programa\n");
printf("1 - Verificar se vazia\n");
printf("2 - Inserir pessoa no fim\n");
printf("3 - Inserir pessoa no início\n");
printf("4 - Imprimir lista de pessoas\n");
printf("5 - Remover pessoa no início\n");
printf("6 - Remover pessoa no fim\n");
printf("7 - Pesquisar por matrícula\n");
printf("8 - Remover por matrícula\n\n");

}

} while (escolha < 0 && escolha > 8);


}while (encerrar());

system("cls");


return 0;
}
