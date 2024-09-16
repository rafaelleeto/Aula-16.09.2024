#include <stdio.h>

#define TAMPILHA 10
int pilha[TAMPILHA] = {0};
int opcao;
int topo=0;

void push(){
    int val;
    printf("\nDigite um valor:\n");
    scanf("%d",&val);
    
    if (topo<TAMPILHA){
        pilha[topo]=val;
        topo++;
    }
    else {
        printf("Pilha esta cheia\n");
    }
}
void pop (){
    if(topo >= 0){
        pilha[topo -1]=0;
        topo--;
    }
    else {
        printf("Pilha esta vazia.");
    }
}
void limpar(){
    for (int i=0;i<TAMPILHA;i++){
        pilha [i] = 0;
    }
    topo=0;
}
void mostrar(){
    for (int i=0;i<TAMPILHA;i++){
        printf("%d\n",pilha[i]);
    }

}
void menu(){
    
    do
    {
    printf ("\nDigite 1- Push ");
    printf ("\nDigite 2- Pop ");
    printf ("\nDigite 3- Clear ");
    printf ("\nDigite 4- Exit\n");
    scanf("%d",&opcao);
        switch (opcao)
        {
        case 1:
        push();
        mostrar();
            break;

        case 2:
        pop();
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
int main (){
    menu();
    return 0;
}