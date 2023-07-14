#include <iostream>
#include <string>

class Virus {
    double virulencia;
    double infectividade;
    double TempoVida;
    double TempoIncubacao;
    double TempoContagio;

public:
    Virus(double _virulencia, double _infectividade, double _TempoVida, double _TempoIncubacao, double _TempoContagio){
        virulencia = _virulencia;
        infectividade = _infectividade;
        TempoVida = _TempoVida;
        TempoIncubacao = _TempoIncubacao;
        TempoContagio = _TempoContagio;
    }

};

//Hospedeiro Reservatório
class Reservatorio {
public:
    Reservatorio(){
    }
};

//Hospedeiro Não Reservatório
class Hospedeiro {
public:
    Hospedeiro(){
    }
};

//
bool spillover(){

}


int main() {

    return 0;
}
