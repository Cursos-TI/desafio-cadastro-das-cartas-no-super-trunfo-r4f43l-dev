#include <stdio.h>

int main() {
   char estado[20], codigo[20], cidade[20], estado2[20], codigo2[20], cidade2[20];
   int populacao, turismo, populacao2, turismo2;
   float area, pib, area2, pib2;
                   //nesta área do codigo foram definidas as variaveis utilizadas
     
        printf("digite uma letra de (A) a (h) que representará o estado desta carta: \n");
        scanf("%s", estado);
                               //nesta área foram armazenadas as informações da variavel (estado)
        printf("digite a letra do estado e em seguida um numero de 1 a 4: \n");
        scanf("%s", codigo);
                               //nesta área foram armazenadas as informações da variavel (codigo)
        printf("digite o nome da cidade: \n");
        scanf("%s", cidade);
                               //nesta área foram armazenadas as informações da variavel (cidade)
        printf("digite a quantidade de pessoas que moram nessa cidade:\n ");
        scanf("%d", &populacao);
                            // nesta área foram armazenadas as informações da variavel (população)
        printf("digite quantos km² tem a área da cidade:\n" );
        scanf("%f", &area);
                               // nesta área foram armazenadas as informações da variavel (area)
        printf("digite em quanto é avaliado o PIB dessa cidade:\n" );
        scanf("%f", &pib);
                               // nesta área foram armazenadas as informações da variavel (pib)
        printf("digite o numero de pontos turísticos dessa cidade:\n" );
        scanf("%d", &turismo);

        printf("digite uma letra de (A) a (h) que representará o estado da segunda carta: \n");
        scanf("%s", estado2);
                    //nesta área foram armazenadas as informações da variavel (estado2)
        printf("digite a letra do estado e em seguida um numero de 1 a 4:\n ");
        scanf("%s", codigo2);
                    //nesta área foram armazenadas as informações da variavel (codigo2)
        printf("digite o nome da cidade:\n ");
        scanf("%s", cidade2);
                    //nesta área foram armazenadas as informações da variavel (cidade2)
        printf("digite a quantidade de pessoas que moram nessa cidade: \n");
        scanf("%d", &populacao2);
                    // nesta área foram armazenadas as informações da variavel (população2)
        printf("digite quantos km² tem a área da cidade:\n" );
        scanf("%f", &area2);
                    // nesta área foram armazenadas as informações da variavel (area2)
        printf("digite em quanto é avaliado o PIB dessa cidade:\n" );
        scanf("%f", &pib2);
                    // nesta área foram armazenadas as informações da variavel (pib2)
        printf("digite o numero de pontos turísticos dessa cidade:\n" );
        scanf("%d", &turismo2);

        printf("carta 1\n");
        printf("estado: %s\n", estado);
        printf("codigo: %s\n",codigo);
        printf("nome da cidade: %s\n", cidade);
        printf("população: %d\n", populacao);
        printf("Área: %f\n", area);
        printf("PIB: %f\n", pib);
        printf("numero de pontos turisticos: %d\n", turismo);
        printf("\n\n");
        printf("carta 2\n");
        printf("estado: %s\n", estado2);
        printf("codigo: %s\n",codigo2);
        printf("nome da cidade: %s\n", cidade2);
        printf("população: %d\n", populacao2);
        printf("Área: %f\n", area2);
        printf("PIB: %f\n", pib2);
        printf("numero de pontos turisticos: %d\n", turismo2);

    return 0;
}
