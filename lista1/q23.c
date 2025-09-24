#include <stdio.h>

int main() {
    unsigned long int codigo;
    float preco_compra, preco_venda;
    int vendas;

    int lucro_menor_10 = 0;
    int lucro_10_a_20 = 0;
    int lucro_maior_20 = 0;

    float maior_lucro_absoluto = -1.0;
    unsigned long int codigo_maior_lucro = 0;

    int maior_vendas = -1;
    unsigned long int codigo_mais_vendida = 0;

    double total_compra = 0.0;
    double total_venda = 0.0;
    double lucro_total;
    float percentual_lucro_total;

    while (scanf("%lu %f %f %d", &codigo, &preco_compra, &preco_venda, &vendas) != EOF) {
        float lucro_unidade = preco_venda - preco_compra;
        float percentual_lucro_unidade = (lucro_unidade / preco_compra) * 100.0;
        
        total_compra += preco_compra * vendas;
        total_venda += preco_venda * vendas;

        if (percentual_lucro_unidade < 10.0) {
            lucro_menor_10++;
        } else if (percentual_lucro_unidade >= 10.0 && percentual_lucro_unidade <= 20.0) {
            lucro_10_a_20++;
        } else {
            lucro_maior_20++;
        }

        if (lucro_unidade > maior_lucro_absoluto) {
            maior_lucro_absoluto = lucro_unidade;
            codigo_maior_lucro = codigo;
        }

        if (vendas > maior_vendas) {
            maior_vendas = vendas;
            codigo_mais_vendida = codigo;
        }
    }

    lucro_total = total_venda - total_compra;
    if (total_compra > 0) {
        percentual_lucro_total = (lucro_total / total_compra) * 100.0;
    } else {
        percentual_lucro_total = 0.0;
    }
    
    printf("Quantidade de mercadorias que geraram lucro menor que 10%%: %d\n", lucro_menor_10);
    printf("Quantidade de mercadorias que geraram lucro maior ou igual a 10%% e menor ou igual a 20%%: %d\n", lucro_10_a_20);
    printf("Quantidade de mercadorias que geraram lucro maior do que 20%%: %d\n", lucro_maior_20);
    printf("Codigo da mercadoria que gerou maior lucro: %lu\n", codigo_maior_lucro);
    printf("Codigo da mercadoria mais vendida: %lu\n", codigo_mais_vendida);
    printf("Valor total de compras: %.2f, valor total de vendas: %.2f e percentual de lucro total: %.2f%%\n", total_compra, total_venda, percentual_lucro_total);

    return 0;
}