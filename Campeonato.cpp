#include "Campeonato.hpp"
#include <iostream>
using namespace std;

Campeonato::~Campeonato() {
    for (auto t : _treinadores)
        delete t;
}

void Campeonato::cadastrar_treinador(string nome) {
    _treinadores.push_back(new Treinador(nome));
}

void Campeonato::cadastrar_pokemon_eletrico(int idt, string nome, string tipo_ataque, double forca_ataque, double potencia_raio) {
    _treinadores[idt]->cadastrar_pokemon_eletrico(nome, tipo_ataque, forca_ataque, potencia_raio);
}

void Campeonato::cadastrar_pokemon_aquatico(int idt, string nome, string tipo_ataque, double forca_ataque, double litros_jato) {
    _treinadores[idt]->cadastrar_pokemon_aquatico(nome, tipo_ataque, forca_ataque, litros_jato);
}

void Campeonato::cadastrar_pokemon_explosivo(int idt, string nome, string tipo_ataque, double forca_ataque, double temperatura_explosao) {
    _treinadores[idt]->cadastrar_pokemon_explosivo(nome, tipo_ataque, forca_ataque, temperatura_explosao);
}

void Campeonato::imprimir_informacoes_treinador(int idt) {
    _treinadores[idt]->imprimir_informacoes();
}

void Campeonato::executar_batalha(int idt1, int idpk1, int idt2, int idpk2) {
    cout << "### Batalha ###" << endl;
    Pokemon* p1 = _treinadores[idt1]->usar_pokemon(idpk1);
    Pokemon* p2 = _treinadores[idt2]->usar_pokemon(idpk2);
    cout << _treinadores[idt1]->usar_pokemon(idpk1)->getNome(); // Nome interno
    cout << "Treinador" << idt1 << " (" << p1->getNome() << ") vs. Treinador" << idt2 << " (" << p2->getNome() << ")" << endl;
    p1->atacar(p2);
    p2->imprimir_status();
    cout << "#########" << endl;
}
