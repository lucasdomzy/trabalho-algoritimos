#include <stdio.h>
#include <string.h>
struct cadastro{
    char nome[50];
    char endereco[50];
    int telefone;
};
int pedidos();
int formaPag();

int main(){


    int cupom, pedido, cliente;
    double valorParcial, vDesconto, valorFinal;

    printf("Tecle 1 para iniciar o pedido:");
    scanf(" %d", &pedido);

    if(pedido == 1){
        valorParcial = pedidos();
    }
    printf("O cliente tem algum cupom?(1 para sim, 2 para não)");
    scanf("%d", &cupom);
    if(cupom == 1){
        printf("Qual o valor de desconto?");
        scanf("%lf", &vDesconto);
        valorFinal = valorParcial - vDesconto;
    }
    else{
        valorFinal = valorParcial;
    }
    printf("Valor a pagar: %.2lf\n", valorFinal);

    formaPag();

    printf("O cliente possui cadastro no sistema? (1 para sim e 2 para não)");
    scanf("%d", &cliente);

    if(cliente == 2){
    struct cadastro cadastros[100];

    //struct cadastro cliente;
    //int tel;
    //scanf("%d", tel);

    for(int i = 0; i < 100; i++){

        //if(tel == cadastros[i].telefone){
            //usuario ja existe
            //strcmp(cliente.nome, cadastros[i].nome);
            //strcmp(cliente.endereco, cadastros[i].endereco);
            //strcmp(cliente.telefone, cadastros[i].telefone);

        printf("Preenchendo cadastro: cliente %d\n", i);

        printf("Informe o nome:\n");
        scanf(" %[^\n]s", cadastros[i].nome);

        printf("Informe o endereço:\n");
        scanf(" %[^\n]s", cadastros[i].endereco);

        printf("Informe o telefone:\n");
        scanf(" %d", cadastros[i].telefone);

        printf("Dados cadastrados com sucesso!\n");

        printf("Dados do cliente %d:", i);
        printf("%s\n%s\n%d\n", cadastros[i].nome, cadastros[i].endereco, cadastros[i].telefone);
    }
    }
return 0;
}

int pedidos(){

    double vProduto, valorFinal = 0;

    while (vProduto != 0){
        printf("Informe o valor do pedido:");
        scanf("%lf", &vProduto);
        valorFinal += vProduto;
    }
        printf("Valor do pedido: %.2lf\n", valorFinal);

return valorFinal;
}

int formaPag(){

    int pagamento;

    printf("Qual será a forma de pagamento?\n Crédito(1)\n Débito(2)\n Dinheiro(3)\n Pix(4)\n");
    scanf("%d", &pagamento);
    if(pagamento == 1){
        printf("Realizar pagamento com crédito no caixa!\n");
    }
    else if(pagamento == 2){
        printf("Realizar pagamento com débito no caixa!\n");
    }
    else if(pagamento == 3){
        printf("Realizar pagamento com dinheiro no caixa!\n");
    }
    else if(pagamento == 4){
        printf("Realizar pagamento com pix no caixa!\n");
    }

return pagamento;
}

