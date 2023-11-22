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

    char pedido;
    int cupom;
    double valorParcial, vDesconto, valorFinal;

    printf("Digite S para iniciar o pedido:");
    scanf(" %c", &pedido);

    if(pedido == 'S'){
        valorParcial = pedidos();
    }
    printf("O cliente tem algum cupom?(1 para sim, 2 para não)");
    scanf("%d", &cupom);
    if(cupom == 1){
        printf("Qual o valor de desconto?");
        scanf("%lf", &vDesconto);
        valorFinal = valorParcial - vDesconto;
    }
    printf("Valor a pagar: %.2lf", valorFinal);

    struct cadastro cadastros[100];
    struct cadastro cliente;
    int tel;
    scanf("%d", tel);
    for(int i = 0; i < 100; i++){
        if(tel == cadastros[i].telefone){
            //usuario ja existe
            strcmp(cliente.nome, cadastros[i].nome);
        }
        else{

        }
        printf("Preenchendo cadastro: %d", i);
        printf("Informe o nome:");
        scanf("%[^\n]s", cadastros[i].nome);
        printf("Informe o endereço:");
        scanf("%[^\n]s", cadastros[i].endereco);
        printf("Informe o telefone:");
        scanf("%d", cadastros[i].telefone);
    }

return 0;
}

int pedidos(){

    double vet[8], valorFinal = 0;
    int i;


    for(i=0; i<8; i++){
        printf("Informe o valor do pedido:");
        scanf("%lf", &vet[i]);
        valorFinal += vet[i];
    }
        printf("Valor do pedido: %.2lf\n", valorFinal);

return valorFinal;
}

int formaPag(){

    int pagamento;

    printf("Qual será a forma de pagamento?\n Crédito(1)\n Débito(2)\n Dinheiro(3)\n Pix(4)\n");
    scanf("%d", &pagamento);
    if(pagamento == 1){
        printf("Realizar pagamento com crédito no caixa!")
    }
    else if(pagamento == 2){
        printf("Realizar pagamento com débito no caixa!")
    }
    else if(pagamento == 3){
        printf("Realizar pagamento com dinheiro no caixa!")
    }
    else if(pagamento == 4){
        printf("Realizar pagamento com pix no caixa!")
    }

return pagamento;
}
