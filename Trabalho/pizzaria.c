#include <stdio.h>
#include <string.h>
struct cadastro{
    char nome[50];
    char endereco[50];
    int telefone;
};

int pedidos();

int formaPag();

void cadastrar();

int main(){

    int cupom, pedido, cadastro;
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

    printf("Deseja realizar novo cadastro para o cliente? (tecle 1 para sim, 2 para não)\n");
    scanf("%d", &cadastro);

    if(cadastro == 1){
            cadastrar();
            printf("Dados cadastrados com sucesso!\n");
    }
    else {
        printf("Pedido finalizado!");
    }

return 0;
}

int pedidos(){

    double vProduto, valorFinal = 0;
    int cont;

    while (vProduto != 0){
        printf("Informe o valor do produto %d:", cont);
        scanf("%lf", &vProduto);
        cont++;
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

void cadastrar(){

    int i;

    struct cadastro cadastros[100];

    for(i = 0; i < 100; i++){

        printf("Preenchendo cadastro: cliente %d\n", i);

        printf("Informe o nome:\n");
        scanf(" %[^\n]s", cadastros[i].nome);

        printf("Informe o endereço:\n");
        scanf(" %[^\n]s", cadastros[i].endereco);

        printf("Informe o telefone:\n");
        scanf(" %d", cadastros[i].telefone);
    }
}
