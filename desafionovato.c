
#include <stdio.h>



char nome1, nome2, nome3, nome4, nome5;
char cor1, cor2, cor3, cor4, cor5;
float numero1, numero2 , numero3, numero4, numero5;


    int main() {

    //cadastrando os 5 primeiros territorios iniciais do nosso mundo 
    printf("\n==== vamos cadastrar os 5 territorios do nosso mundo ====\n\n");

        printf("**** cadastrando o territorio 1 ****\n\n");
        printf("nome do territorio: ");
        scanf("%s", &nome1);

        printf("cor do exercito ex:(azul, amarelo, verde etc):  \n");
        scanf("%s", &cor1);

        printf("numero de tropas:  \n");
        scanf("%.2f", &numero1);



    printf("\n\n**** cadastrando o territorio 2 ****\n\n");
        printf("nome do territorio: ");
        scanf("%s", &nome2);

        printf("cor do exercito ex:(azul, amarelo, verde etc):  \n");
        scanf("%s", &cor2);

        printf("numero de tropas:  \n");
        scanf("%.2f", &numero2);



    printf("\n\n**** cadastrando o territorio 3 ****\n\n");
        printf("nome do territorio: ");
        scanf("%s", &nome3);

        printf("cor do exercito ex:(azul, amarelo, verde etc):  \n");
        scanf("%s", &cor3);

        printf("numero de tropas:  \n");
        scanf("%.2f", &numero3);


    printf("\n\n**** cadastrando o territorio 4 ****\n\n");
        printf("nome do territorio:  \n");
        scanf("%s", &nome4);

        printf("cor do exercito ex:(azul, amarelo, verde etc):  \n");
        scanf("%s", &cor4);

        printf("numero de tropas:  \n");
        scanf("%.2f", &numero4);




    printf("\n\n**** cadastrando o territorio 5 ****\n\n");
        printf("nome do territorio: ");
        scanf("%s", &nome5);

        printf("cor do exercito ex:(azul, amarelo, verde etc):  \n");
        scanf("%s", &cor5);

        printf("numero de tropas:  \n");
        scanf("%.2f", &numero5);


    //lendo oque foi inserido
    printf("\n======= territorio 1 =======\n\n");

    printf("territorio: %s\n", nome1);
    printf("cor: %s\n", cor1);
    printf("tropas: %.2f\n", numero1);
    



    printf("======= territorio 2 =======\n\n");
    
    printf("territorio: %s\n", nome2);
    printf("cor: %s\n", cor2);
    printf("tropas: %.2f\n", numero2);




    printf("======= territorio 3 =======\n\n");
    
    printf("territorio: %s\n", nome3);
    printf("cor: %s\n", cor3);
    printf("tropas: %.2f\n", numero3);



     printf("======= territorio 4 =======\n\n");
    
    printf("territorio: %s\n", nome4);
    printf("cor: %s\n", cor4);
    printf("tropas: %.2f\n", numero4);



     printf("======= territorio 5 =======\n\n");
    
    printf("territorio: %s\n", nome5);
    printf("cor: %s\n", cor5);
    printf("tropas: %.2f\n", numero5);


        return 0;
    }
