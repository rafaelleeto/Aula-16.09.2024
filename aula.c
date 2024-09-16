#include <stdio.h>

#define TAMFILA 10
int fila[TAMFILA] = {0,0,0,0,0,0,0,0,0,0};
int opcao;

int cabeca=0;
int calda=0;

void enfileirar(){
    int val;
    if(calda<TAMFILA){
        printf("informe um elemento: ");
        scanf("%d",&val);
        fila[calda] = val;
        calda++;
       
    }
    else{
        printf("fila está cheia");
    }
}

void desenfileirar(){
    if (cabeca < calda){
        fila[cabeca]=0;
        cabeca++;
        
    }
    else {
        printf("lista vazia");
    }
}

void limpar(){
    for (int i=0;i<TAMFILA;i++){
        fila [i] = 0;
    }
    

}

void menu(){
    
    do
    {
    printf ("\nDigite 1- Queue ");
    printf ("\nDigite 2- Enqueue ");
    printf ("\nDigite 3- Clear ");
    printf ("\nDigite 4- Exit ");
    scanf("%d",&opcao);
        switch (opcao)
        {
        case 1:
        enfileirar();
        mostrar();
            break;

        case 2:
        desenfileirar();
        mostrar();
            break;
        case 3:
        limpar();
        mostrar();
            break;

        default :
            break;  
        }
    } while (opcao!=4);
    
    
}
void mostrar(){
    for (int i=0;i<TAMFILA;i++){
        printf("%d\n",fila[i]);
    }

}

int main (){
    menu();

    return 0;
}