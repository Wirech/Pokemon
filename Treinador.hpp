#ifndef TREINADOR_HPP
#define TREINADOR_HPP

#include <string>
#include <vector>
#include "Pokemon.hpp"
#include "PokemonEletrico.hpp"
#include "PokemonAquatico.hpp"
#include "PokemonExplosivo.hpp"
using namespace std;

class Treinador {
private:
    string _nome;
    vector<Pokemon*> _pokemons;

public:
    Treinador(string nome);
    ~Treinador();

    void cadastrar_pokemon_eletrico(string nome, string tipo_ataque, double forca_ataque, double potencia_raio);
    void cadastrar_pokemon_aquatico(string nome, string tipo_ataque, double forca_ataque, double litros_jato);
    void cadastrar_pokemon_explosivo(string nome, string tipo_ataque, double forca_ataque, double temperatura_explosao);
    Pokemon* usar_pokemon(int idpk);
    void imprimir_informacoes();
};

#endif
