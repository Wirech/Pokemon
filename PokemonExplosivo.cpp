#include "PokemonExplosivo.hpp"
#include <iostream>
using namespace std;

PokemonExplosivo::PokemonExplosivo(string nome, string tipo_ataque, double forca_ataque, double temperatura_explosao)
    : Pokemon(nome, tipo_ataque, forca_ataque), _temperatura_explosao(temperatura_explosao) {}

void PokemonExplosivo::falar_tipo_ataque() {
    cout << _tipo_ataque << "!" << endl;
    cout << "Boom!" << endl;
}

double PokemonExplosivo::ataque_explosivo() {
    return _forca_ataque / _temperatura_explosao;
}

double PokemonExplosivo::calcular_dano() {
    return ataque_explosivo();
}
