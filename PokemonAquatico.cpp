#include "PokemonAquatico.hpp"
#include <iostream>
using namespace std;

PokemonAquatico::PokemonAquatico(string nome, string tipo_ataque, double forca_ataque, double litros_jato)
    : Pokemon(nome, tipo_ataque, forca_ataque), _litros_jato(litros_jato) {}

void PokemonAquatico::falar_tipo_ataque() {
    cout << _tipo_ataque << "!" << endl;
    cout << "Splash!" << endl;
}

double PokemonAquatico::ataque_aquatico() {
    return _forca_ataque + _litros_jato;
}

double PokemonAquatico::calcular_dano() {
    return ataque_aquatico();
}
