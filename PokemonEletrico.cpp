#include "PokemonEletrico.hpp"
#include <iostream>
using namespace std;

PokemonEletrico::PokemonEletrico(string nome, string tipo_ataque, double forca_ataque, double potencia_raio)
    : Pokemon(nome, tipo_ataque, forca_ataque), _potencia_raio(potencia_raio) {}

void PokemonEletrico::falar_tipo_ataque() {
    cout << _tipo_ataque << "!" << endl;
    cout << "Bzzzz!" << endl;
}

double PokemonEletrico::ataque_eletrico() {
    return _forca_ataque * _potencia_raio;
}

double PokemonEletrico::calcular_dano() {
    return ataque_eletrico();
}
