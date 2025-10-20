#include <stdio.h>  
#include <string.h> 

int main() {  
    // Aqui criamos uma estrutura personalizada chamada Territorio.
    // Ela agrupa variáveis relacionadas: nome (string de até 29 chars), cor (string de até 9 chars) e tropas (inteiro).
  
    struct Territorio {
        char nome[30];  
        char cor[10];   
        int tropas;     
    };

    struct Territorio territorios[5];


    printf("Cadastro de 5 territórios:\n");  // Mensagem inicial para usabilidade
    for (int i = 0; i < 5; i++) {  
        printf("\nTerritório %d:\n", i + 1);  // Mensagem clara indicando qual território (1 a 5 para usuário)

        printf("Digite o nome do território: ");
        scanf("%s", territorios[i].nome);  // Lê string e armazena no campo 'nome' da struct no índice i

        printf("Digite a cor do exército: ");
        scanf("%s", territorios[i].cor);  // Similar, para o campo 'cor'

        printf("Digite a quantidade de tropas: ");
        scanf("%d", &territorios[i].tropas);  // Lê inteiro; note o '&' para endereço
    }

    // Exibição dos dados
    
    printf("\nDados dos territórios cadastrados:\n");
    for (int i = 0; i < 5; i++) {  
        printf("\nTerritório %d:\n", i + 1);
        printf("Nome: %s\n", territorios[i].nome);  
        printf("Cor do exército: %s\n", territorios[i].cor);  
        printf("Quantidade de tropas: %d\n", territorios[i].tropas);  
    }


    return 0;
}
