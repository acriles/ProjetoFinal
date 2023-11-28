#include <string>
#include <iostream>
using namespace std;

#ifndef PAGAMENTOS_H
#define PAGAMENTOS_H

//Struct Cartao: armazena os dados do cartão de crédito/débito a ser utilizado no pagamento
struct Cartao {
public:
    string nomeTitular;
    long long int numeroCartao;     //Usando long long int para representar um número de 16 dígitos
    int mesValidade;
    int anoValidade;
    int cvv;
};


class Pagamentos{

public:
    Cartao cartaoCred;
    Cartao cartaoDeb;


///@brief Imprime a chave PIX caso essa seja a forma de pagamento
    void PIX();

///@brief Imprime que o pagamento será feito na entrega caso a forma selecionada seja
///dinheiro e verifica se será necessário troco
    void Dinheiro();

///@brief Imprime as formas de pagamento para o usuário escolher qual deseja
    void imprimeFormasPagamento();

///@brief coletaDadosCartao (
};

#endif
