#include "Treinador.hpp"
#include <iostream>
using namespace std;

Treinador::Treinador(string nome) : _nome(nome) {}

Treinador::~Treinador() {
    for (auto p : _pokemons)
        delete p;
}

void Treinador::cadastrar_pokemon_eletrico(string nome, string tipo_ataque, double forca_ataque, double potencia_raio) {
    _pokemons.push_back(new PokemonEletrico(nome, tipo_ataque, forca_ataque, potencia_raio));
}

void Treinador::cadastrar_pokemon_aquatico(string nome, string tipo_ataque, double forca_ataque, double litros_jato) {
    _pokemons.push_back(new PokemonAquatico(nome, tipo_ataque, forca_ataque, litros_jato));
}

void Treinador::cadastrar_pokemon_explosivo(string nome, string tipo_ataque, double forca_ataque, double temperatura_explosao) {
    _pokemons.push_back(new PokemonExplosivo(nome, tipo_ataque, forca_ataque, temperatura_explosao));
}

Pokemon* Treinador::usar_pokemon(int idpk) {
    if (idpk >= 0 && idpk < (int)_pokemons.size())
        return _pokemons[idpk];
    return nullptr;
}

void Treinador::imprimir_informacoes() {
    cout << "Nome: " << _nome << endl;
    cout << "----------" << endl;
    if (_pokemons.empty()) {
        cout << "Nenhum Pokemon cadastrado!" << endl;
        cout << "----------" << endl;
        return;
    }
    for (auto p : _pokemons) {
        p->imprimir_informacoes();
        cout << "----------" << endl;
    }
}
