#include <stdio.h>
int main() {
    int opcao;
    char nomecompleto[50], cpf[15], telefone[20];
            printf("Sistema de Hotel\n");
            printf("1  Fazer check-in\n");
            printf("2. Serviço de quarto\n");
            printf("3. Sair\n");
            printf("Escolha uma opção: ");
            scanf("%d", &opcao);
    switch (opcao)
    {
        case 1:
            printf("Check-in\n");
            printf("Digite seu nome completo: ");
            scanf(" %s", nomecompleto);
            printf("Digite seu CPF: ");
            scanf("%s", cpf);
            printf("Digite seu telefone: ");
            scanf("%s", telefone);
            printf("Nome completo: %s\n", nomecompleto);
            printf("CPF: %s\n", cpf);
            printf("Telefone: %s\n", telefone);
            printf("Check-in realizado com sucesso!\n");
            break;
        case 2:
            printf("Serviço de Quarto\n");
            printf("1 - Pedir comida\n");
            printf("2 - Solicitar toalhas\n");
            printf("3 - Limpeza do quarto\n");
            printf("Escolha uma opção: ");
            scanf("%d", &opcao);
            if (opcao == 1) 
            {
                printf("Pedido de comida recebido.\n");
            } 
            else if (opcao == 2) 
            {
                printf("Solicitação de toalhas recebida.\n");
            } 
            else if (opcao == 3) 
            {
                printf("Pedido de limpeza do quarto recebido.\n");
            }
            else 
            {
                printf("Opção inválida!\n");
            }
            break;
        case 3:
            printf("Saindo. Obrigado!\n");
            break;
        default:
            printf("Opção inválida!\n");
            break;
    }
    return 0;
}
