#include <stdio.h>

void main(){
    //caracteres
    char nome_da_variavel_simples = 'a';
    
    printf("o valor da variavel do tipo char é: %c \n", nome_da_variavel_simples);

    //numeros inteiros
    short int nome_da_variavel2 =1 ;
    int nome_da_variavel3 = 2;
    long int nome_da_variavel4 = 3;

    printf("-----------------------------------\n");
    printf("o valor da variavel do tipo shot int é: %i \n", nome_da_variavel2);
    printf("o valor da variavel do tipo  int é: %i \n", nome_da_variavel3);
    printf("o valor da variavel do tipo long int é: %li \n", nome_da_variavel4);

    unsigned int nome_variavel_sem_valor_negativo = 4; //não armazena valor negativo
    unsigned long int nome_variavel_sem_valor_negativo2 = 5; //não armazena valor negativo
    printf("-----------------------------------\n");

    printf("o valor da variavel do tipo unsigned int é: %u \n", nome_variavel_sem_valor_negativo);
    printf("o valor da variavel do tipo unsigned long int é: %lu \n", nome_variavel_sem_valor_negativo2);

    //numeros reais
    float nome_da_variavel5 = 1.5f;
    double nome_da_variavel6 = 2.5;
    long double nome_da_variavel7 = 3.5L;
    printf("-----------------------------------\n");


    printf("o valor da variavel do tipo float é: %f \n", nome_da_variavel5);
    printf("o valor da variavel do tipo double é: %f \n", nome_da_variavel6);
    printf("o valor da variavel do tipo long double é: %e \n", (double)nome_da_variavel7);

    //contante nomeada - como se fosse o final, o valor declarado é imutavel
    printf("-----------------------------------\n");
    const int MAX = 100;
    printf("o valor da constante nomeada MAX é: %i \n", MAX);

    //impreção de endereços
    int a;
    printd("endereço da variavel: %p\n", &a  )
}