#include <iostream>
#include <string>
#include "Virus.h"
#include "Reservatorio.h"
#include "Hospedeiro.h"

//bool spillover(){}

void EquacaoSIR(const int n, int& s, int& i, int& r, float beta, float gama){
/*
  x1 = dD/dT = - BetaIS/N ]
        S(t+Δt) = S(t) + (dS/dt) * Δt
  x2 = dI/dT =   BetaIS/N - gamaI
        I(t+Δt) = I(t) + (dI/dt) * Δt
  x3 = dR/dr =   gamaI
        R(t+Δt) = R(t) + (dR/dt) * Δt
*/
float x1, x2, x3;
int contador = 1;
while(contador < 100){
    
    x1 = - beta * i * s / n;
    x2 = beta * i * s /n - gama * i;
    x3 = gama * i;

    //std::cout << "T: = " << contador << " | " << x1 << " | " << x2 << " | " << x3 << std::endl;
    //std::cout << "T: = " << contador << " |  " << s << " |   " << i << " |   " << r << std::endl;
    //std::cout << contador << "," << s << "," << i << "," << r << std::endl;

    s += x1;
    i += x2;
    r += x3;
    contador ++;

}

}

int main() {

    //Modelo SIR
    int n; // População total
    int s; // Suscetível 
    int i; // Infectada 
    int r; // Recuperada 
    float beta; // taxa de infecção entre as pessoas
    float gama; // taxa de recuperação

    std::cout << "Informe alguns parametros";
    std::cout << "Populacao Suscetível: ";
    std::cin >> s;
    std::cout << "Populacao Infectada: ";
    std::cin >> i;
    std::cout << "Populacao Recuperada: ";
    std::cin >> r;
    std::cout << "taxa de infecção: ";
    std::cin >> beta;
    std::cout << "taxa de recuperação dos indivíduos: ";
    std::cin >> gama;

    n = (s+i+r);
    EquacaoSIR(n,s,i,r,beta,gama);



    //Hospedeiro *av=new Hospedeiro();
    //av->Mostar();






    int a;
    std::cin >> a;
    return 0;
}
