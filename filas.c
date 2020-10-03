#include <stdio.h>
#include <stdlib.h>

#define MAX 201
 
int array[MAX];
int inicio = 0;
int fim = 0;
 
void inserir(int elemento)
{
    if((fim+1)%MAX==inicio)
    {
        printf("Tamanho máximo de 200 denúncias na Fila \n");

    }
    else
    {
        array[fim]=elemento;
        fim=(fim+1)%MAX;
        printf("Denúncia incluída na fila com sucesso\n");
    }
}
void listar()
{
    int i=inicio;
    if(inicio==fim)
    {
        printf("Fila vazia \n");

    }
    else
    {
        while(i!=fim)
        {
            if(i+1==fim)
            {
                printf("%d",array[i]);
            }
            else
            {
                printf("%d - ",array[i]);
            }
            i=(i+1)%MAX;
        }
        printf("\n");

    }
}
 
void remover()
{
    int resp, m;
    if(inicio==fim)
    {
        printf("Fila vazia\n");

    }
    else
    {
        printf("Denúncia da vez: %d \n", array[inicio] );

        printf("1: Remove da lista / 2: Voltar sem remover / Opção? ");
        scanf("%d", &m);
        if (m==1)
        {
        resp=array[inicio];
        inicio=(inicio+1)%MAX;
        printf("Denúncia removida da fila com sucesso \n");
        }
    }
}
 
void menuzinho()
{
    printf("\n");
    printf("1: Inserir na Fila \n 2: Próximo da Fila \n 3: Listar todas \n 4: Sair \n Opção? ");
}
 
void Menu()
{
    int op, n, a;
 
    
        menuzinho();
        scanf("%d",&op);
        
        if(op==1)
        {
            printf("Digite o código da denúncia: ");
            scanf("%d",&n);
            inserir(n);
            Menu();
        }
        else if(op==2)
        {
            remover();      
            Menu();
        }
        else if(op==3)
        {
            listar();
            Menu();
        }
        else if(op==4)
        {
            printf("Obrigado por usar Zer@Dengue \n");
        }
        else
        {
            printf("Opção inválida \n");
            Menu();
        }
}
 
int main()
{
    system ("clear");
    printf("Controle da Fila de Tratativa de Denuncias\n");
    printf("Sistema Zer@Dengue\n\n");
    Menu();
}
