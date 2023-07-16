#include <iostream>
#include <string>
#include "Virus.h"
#include "Reservatorio.h"
#include "Hospedeiro.h"

//bool spillover(){}

void EquacaoSIR(){
/*modelar a dinâmica da doença, isto é, a evolução temporal
t0,t1,t2,t3,...,tn,tn+1
O intervalo entre dois períodos consecutivos Δt=tn+1−tn,n=1,2,3,...
supõe-se constante – é medido numa unidade de tempo apropriada (hora, dia, semana, ano, etc., conforme o contexto).
As hipóteses do modelo são as seguintes:
H1 A população em análise é muito numerosa o que permite ignorar efeitos aleatórios, devidos às diferenças entre os indivíduos e outros factores.
H2 Também assumimos que, em qualquer momento, a população é homogeneamente misturada, isto é, supomos que os infecciosos (infectados e contagiosos) e susceptíveis estão sempre distribuídos aleatoriamente na área em que a população vive (não se consideram eventuais heterogeneidades espaciais).
H3 A doenca é transmitida por proximidade ou contacto entre um infeccioso e um susceptível.
H4 Um susceptível fica infectado logo após a transmissão, isto é, ignoramos o período de latência da doença, fixando-o igual a zero.
H5 Os infectados eventualmente recuperam e, uma vez recuperados, ficam para sempre imunes (pelo menos durante o periodo em análise).
H6 Ignoramos nascimentos, mortes ou efeitos migratórios.*/





}

int main() {

    //Modelo SIR
    int n; // População total
    int s; // Suscetível 
    int i; // Infectada 
    int r; // Recuperada 
    int beta; // taxa de infecção entre as pessoas
    int gama; // taxa de recuperação

    std::cout << "Informe alguns parametros";
    std::cout << "Populacao Total: ";
    std::cin >> n;
    std::cout << "taxa de infecção: ";
    std::cin >> beta;
    std::cout << "taxa de recuperação dos indivíduos: ";
    std::cin >> gama;





    //Hospedeiro *av=new Hospedeiro();
    //av->Mostar();






    int a;
    std::cin >> a;
    return 0;
}
