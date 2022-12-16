#include <stdio.h>
#include <locale.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

struct sCliente{
    char nome[30];
    int idade;
    char telefone[10];
};

struct sAutomovel{
    int codigo;
    char nome [20];
    char marca [20];
    char tipo [15];
    char cor [15];
    int ano;
    int preco;
};

void menu(){

int escolha;

printf("Olá, seja bem vindo! Selecione o exercício que deseja verificar:\n\n");
printf("0 - Sair do programa\n");
printf("1 - Leitura e impressão de 2 números\n");
printf("2 - Vetor dinâmico\n");
printf("3 - Cadastro de Clientes\n");
printf("4 - Matriz Dinâmica\n");
printf("5 - Loja de automóveis\n\n");

do{

scanf("%d", &escolha);

switch (escolha) {

case 0:
system("cls");
exit(EXIT_SUCCESS);
break;

case 1:
numeros();
break;

case 2:
vetor_dinamico();
break;

case 3:
cadastro_clientes();
break;

case 4:
matriz_dinamica();
break;

case 5:
sistema_estacionamento();
break;

default:
printf("Olá, seja bem vindo! Selecione o exercício que deseja verificar:\n\n");
printf("0 - Sair do programa\n");
printf("1 - Leitura e impressão de 2 números\n");
printf("2 - Vetor dinâmico\n");
printf("3 - Cadastro de Clientes\n");
printf("4 - Matriz Dinâmica\n");
printf("5 - Loja de automóveis\n\n");

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

void numeros(){

int *num,*num2,verifica;

system("cls");

do{

    printf("\nBem vindo ao exercício de gravação e impressão de 2 números usando ponteiros\n\n");

    printf("Por favor, digite os dois números a serem impressos:\n\n");

    num = malloc(sizeof(int));
    num2 = malloc(sizeof(int));

    scanf("%d%d",num,num2);

    printf("\n\n%s%d%s%d","Os números escolhidos foram: ",*num," e ",*num2);


    do{

    printf("\n\nDeseja verificar o exercício novamente?\n");
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

void vetor_dinamico(){

int *vetor,qnt,cont,verifica;

system("cls");

do{

    printf("\nBem vindo ao exercício vetor dinâmico\n\n");
    printf("Por favor, digite quantos números inteiros deseja gravar:\n\n");

    scanf("%d",&qnt);

    vetor = malloc(qnt*sizeof(int));

    if  (vetor == NULL){
    printf("\nNao foi possivel alocar memoria \n");
    }

    else{

    for(cont=0; cont<qnt; cont++){

        printf("\n%s%d%s", "Digite o ",(cont+1)," número que deseja gravar: \n\n");

        scanf("%d",&vetor[cont]);

        printf("\n");

    }

    printf("\nEstes foram os números que você gravou: \n\n");

        for(cont=0; cont<qnt; cont++){

        printf("\n%d",vetor[cont]);

        printf("\n");

    }

}

    free(vetor);

    do{

    printf("\n\nDeseja verificar o exercício novamente?\n");
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

void cadastro_clientes(){

int qnt,cont,verifica;
struct sCliente *pt_cliente;

system("cls");

do{

    printf("\nBem vindo ao exercício de cadastro de clientes\n\n");
    printf("Por favor, digite quantos clientes você deseja cadastrar:\n\n");

    scanf("%d",&qnt);

    pt_cliente = (struct sCliente *) malloc(qnt*sizeof(struct sCliente));


  if  (pt_cliente == NULL){
    printf("\nNao foi possível alocar memoria \n");
    }

    else{

    for(cont=0; cont<qnt; cont++){

        system("cls");

        printf("\n%s%d%s", "Digite o Nome do ",(cont+1)," cliente: \n\n");

        scanf("%s",pt_cliente[cont].nome);

        printf("\n");

        printf("\n%s%d%s", "Digite a Idade do ",(cont+1)," cliente: \n\n");

        scanf("%d",&pt_cliente[cont].idade);

        printf("\n");

        printf("\n%s%d%s", "Digite o Telefone do ",(cont+1)," cliente: \n\n");

        scanf("%s",pt_cliente[cont].telefone);

        printf("\n");

    }

    system("cls");

    printf("\nEstes foram os clientes que você cadastrou: \n\n");

        for(cont=0; cont<qnt; cont++){

        printf("\n%s%s%s","Nome: ",pt_cliente[cont].nome,"\n");
        printf("\n%s%d%s","Idade: ",pt_cliente[cont].idade,"\n");
        printf("\n%s%s%s","Telefone: ",pt_cliente[cont].telefone,"\n");

        printf("\n\n");

    }

}


    do{

    printf("\n\nDeseja verificar o exercício novamente?\n");
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

void matriz_dinamica(){

int verifica,**matriz,aux,aux2,linhas,colunas;

system("cls");

do{

    printf("\nBem vindo ao exercício de matriz dinâmica\n\n");
    printf("Por favor, digite as dimensões da matriz:\n\n");

    scanf("%d%d",&linhas,&colunas);

    system("cls");

    printf("Matriz criada:\n\n");

    matriz = (int **) malloc(linhas*sizeof(int *));

    for(aux=0;aux<linhas;aux++){

        matriz[aux] = (int *) malloc(colunas*sizeof(int));

            for(aux2=0;aux2<colunas;aux2++){

                matriz[aux][aux2]=0;

            }
    }

     for(aux=0;aux<linhas;aux++){

            for(aux2=0;aux2<colunas;aux2++){

                printf("%2d%s",(matriz[aux][aux2])," ");

            }

            printf("\n");
    }




free(matriz);

matriz = NULL;


    do{

    printf("\n\nDeseja verificar o exercício novamente?\n");
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

void sistema_estacionamento(){

int verifica,*contador,opcao,teste;
struct sAutomovel *pt_automovel;

pt_automovel = (struct sAutomovel *) malloc(100*sizeof(struct sAutomovel));
contador = (int *) malloc(sizeof(int));
*contador = 0;


system("cls");

do{

    printf("\nGUIMARÃES & GUIMARÃES - NOVOS E USADOS\n\n");
    printf("O que deseja fazer?\n\n");

    printf("0 - Sair do programa e retornar ao menu\n");
    printf("1 - Cadastrar novo automóvel\n");
    printf("2 - Editar automóvel já cadastrado\n\n");



     fflush(stdin);

    scanf("%d",&opcao);


    if((opcao!=0)&&(opcao!=1)&&(opcao!=2)){

        system("cls");

        printf("\n\nResposta inválida. Por favor, selecione uma das opções abaixo\n");
        printf("0 - Sair do programa e retornar ao menu\n");
        printf("1 - Cadastrar novo automóvel\n");
        printf("2 - Editar automóvel já cadastrado\n\n");


         fflush(stdin);
        scanf("%d ",&opcao);


        }

    if (opcao==1){

        system("cls");
        cadastra_carro(pt_automovel,contador);

    }

    if (opcao ==2){

        system("cls");
       edita_carro(pt_automovel,contador);
    }
/*
    printf("%d",*contador);

    teste=0;

    while(teste<*contador){

    printf("Cadastro realizado:\n\n");
    printf("Código: %d%s",pt_automovel[teste].codigo,"\n");
    printf("Nome: %s%s",pt_automovel[teste].nome,"\n");
    printf("Marca: %s%s",pt_automovel[teste].marca,"\n");
    printf("Tipo: %s%s",pt_automovel[teste].tipo,"\n");
    printf("Cor: %s%s",pt_automovel[teste].cor,"\n");
    printf("Ano: %d%s",pt_automovel[teste].ano,"\n");
    printf("Preço: %d%s",pt_automovel[teste].preco,"\n");
    printf("\n\n");

    teste++;*/ // Teste de cadastro na função principal



    }while(opcao!=0);

        system("cls");
        menu();

}

void cadastra_carro(struct sAutomovel *pt_automovel, int *contador){

int verif;

system("cls");



printf("Bem vindo a página de cadastro de automóveis\n\n");


do{

    printf("Digite o Nome do automóvel:\n");
    scanf("%s",pt_automovel[*contador].nome);
    printf("\n\n");

    printf("Digite a Marca do automóvel:\n");
    scanf("%s",pt_automovel[*contador].marca);
    printf("\n\n");

    printf("Digite o Tipo do automóvel:\n");
    scanf("%s",pt_automovel[*contador].tipo);
    printf("\n\n");

    printf("Digite a Cor do automóvel:\n");
    scanf("%s",pt_automovel[*contador].cor);
    printf("\n\n");

    printf("Digite o Ano do automóvel:\n");
    scanf("%d",&pt_automovel[*contador].ano);
    printf("\n\n");

    printf("Digite o Preço do automóvel:\n");
    scanf("%d",&pt_automovel[*contador].preco);
    printf("\n\n");

    pt_automovel[*contador].codigo = *contador;


    system("cls");

    printf("Cadastro realizado:\n\n");
    printf("Código: %d%s",pt_automovel[*contador].codigo,"\n");
    printf("Nome: %s%s",pt_automovel[*contador].nome,"\n");
    printf("Marca: %s%s",pt_automovel[*contador].marca,"\n");
    printf("Tipo: %s%s",pt_automovel[*contador].tipo,"\n");
    printf("Cor: %s%s",pt_automovel[*contador].cor,"\n");
    printf("Ano: %d%s",pt_automovel[*contador].ano,"\n");
    printf("Preço: %d%s",pt_automovel[*contador].preco,"\n");

    *contador=*contador+1;


    printf("\n\nDeseja cadastrar outro automóvel?\n");
    printf("\n0-Não. Quero voltar ao menu da loja");
    printf("\n1-Sim\n\n");

    fflush(stdin);

    scanf("%d",&verif);

do{

    if((verif!=0)&&(verif!=1)){

        printf("\n\nResposta inválida. Por favor, selecione uma das opções abaixo\n");
        printf("\n0-Não. Quero voltar ao menu da loja");
        printf("\n1-Sim\n\n");


         fflush(stdin);
        scanf("%d",&verif);


        }

    if (verif==1){

        system("cls");
    }


      if (verif==0){

        system("cls");
        return;

    }



} while ((verif!=0)&&(verif!=1));



}while(verif!=0);


}

void edita_carro(struct sAutomovel *pt_automovel, int *contador){

int verif, seletor, cont, seguir;

do{

do{

system("cls");

printf("Bem vindo ao editor de cadastro.\n\n");

if(*contador==0){

    printf("Você ainda não tem itens cadastrados no sistema. Por favor, tecle 0 para voltar ao menu da loja.\n\n");

    scanf("%d",&cont);

    system("cls");

    return;

}

else

printf("Abaixo estão todos os automóveis cadastrados. Digite o código do automóvel cujo cadastro deseja editar:\n\n");

for(cont=0;cont<*contador;cont++){

    printf("Código: %d%s",pt_automovel[cont].codigo,"\n");
    printf("Nome: %s%s",pt_automovel[cont].nome,"\n");
    printf("Marca: %s%s",pt_automovel[cont].marca,"\n");
    printf("Tipo: %s%s",pt_automovel[cont].tipo,"\n");
    printf("Cor: %s%s",pt_automovel[cont].cor,"\n");
    printf("Ano: %d%s",pt_automovel[cont].ano,"\n");
    printf("Preço: %d%s",pt_automovel[cont].preco,"\n");
    printf("\n\n");

}

scanf("%d",&seletor);

printf("\n\n");

system("cls");

printf("Abaixo está o item que selecionou para editar. Deseja prosseguir com a edição?\n\n");

printf("Código: %d%s",pt_automovel[seletor].codigo,"\n");
printf("Nome: %s%s",pt_automovel[seletor].nome,"\n");
printf("Marca: %s%s",pt_automovel[seletor].marca,"\n");
printf("Tipo: %s%s",pt_automovel[seletor].tipo,"\n");
printf("Cor: %s%s",pt_automovel[seletor].cor,"\n");
printf("Ano: %d%s",pt_automovel[seletor].ano,"\n");
printf("Preço: %d%s",pt_automovel[seletor].preco,"\n");
printf("\n\n");

printf("0 - Voltar ao menu da loja\n");
printf("1 - Sim, prosseguir com a edição\n");
printf("2 - Não, verificar novamente os cadastros existentes\n\n");

scanf("%d",&seguir);

while((seguir!=0)&&(seguir!=1)&&(seguir!=2)){


                system("cls");

            printf("Opção inválida. Por favor, escolha uma das opções abaixo:\n\n");

                printf("0 - Voltar ao menu da loja\n");
                printf("1 - Sim, prosseguir com a edição\n");
                printf("2 - Não, verificar novamente os cadastros existentes\n\n");

                scanf("%d",&seguir);


}

            if(seguir==0){

            system("cls");
            return;

            }

}while(seguir!=1);

system("cls");

printf("Código: %d%s",pt_automovel[seletor].codigo,"\n");
printf("Nome: %s%s",pt_automovel[seletor].nome,"\n");
printf("Marca: %s%s",pt_automovel[seletor].marca,"\n");
printf("Tipo: %s%s",pt_automovel[seletor].tipo,"\n");
printf("Cor: %s%s",pt_automovel[seletor].cor,"\n");
printf("Ano: %d%s",pt_automovel[seletor].ano,"\n");
printf("Preço: %d%s",pt_automovel[seletor].preco,"\n");
printf("\n");

printf("Acima está o item a ser alterado. Por favor, informe os novos dados:\n\n");

printf("Nome: ");
scanf("%s",pt_automovel[seletor].nome);
printf("Marca: ");
scanf("%s",pt_automovel[seletor].marca);
printf("Tipo: ");
scanf("%s",pt_automovel[seletor].tipo);
printf("Cor: ");
scanf("%s",pt_automovel[seletor].cor);
printf("Ano: ");
scanf("%d",&pt_automovel[seletor].ano);
printf("Preço: ");
scanf("%d",&pt_automovel[seletor].preco);

system("cls");

printf("O item foi editado com sucesso!\n\n");

printf("Código: %d%s",pt_automovel[seletor].codigo,"\n");
printf("Nome: %s%s",pt_automovel[seletor].nome,"\n");
printf("Marca: %s%s",pt_automovel[seletor].marca,"\n");
printf("Tipo: %s%s",pt_automovel[seletor].tipo,"\n");
printf("Cor: %s%s",pt_automovel[seletor].cor,"\n");
printf("Ano: %d%s",pt_automovel[seletor].ano,"\n");
printf("Preço: %d%s",pt_automovel[seletor].preco,"\n");
printf("\n\n");


    printf("Deseja alterar outro cadastro?\n");
    printf("\n0-Não. Quero voltar ao menu da loja");
    printf("\n1-Sim\n\n");

    fflush(stdin);

    scanf("%d",&verif);

do{

    if((verif!=0)&&(verif!=1)){

        printf("\n\nResposta inválida. Por favor, selecione uma das opções abaixo\n");
        printf("\n0-Não. Quero voltar ao menu da loja");
        printf("\n1-Sim\n\n");


         fflush(stdin);
        scanf("%d",&verif);


        }

    if (verif==1){

        system("cls");
    }


      if (verif==0){

        system("cls");
        return;

    }



} while ((verif!=0)&&(verif!=1));



}while(verif!=0);



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
