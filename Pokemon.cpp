#include "Pokemon.hpp"
#include <iostream>
#include <algorithm>
using namespace std;

Pokemon::Pokemon(string nome, string tipo_ataque, double forca_ataque)
    : _nome(nome), _tipo_ataque(tipo_ataque), _forca_ataque(forca_ataque) {}

void Pokemon::falar_nome() {
    cout << _nome << "!" << endl;
}

void Pokemon::falar_tipo_ataque() {
    cout << _tipo_ataque << "!" << endl;
}

void Pokemon::imprimir_status() {
    cout << _nome << "!" << endl;
    cout << "Energia: " << _energia << endl;
}

void Pokemon::imprimir_informacoes() {
    cout << "Pokemon: " << _nome << endl;
    cout << "Tipo ataque: " << _tipo_ataque << endl;
    cout << "Dano: " << calcular_dano() << endl;
    cout << "Energia: " << _energia << endl;
}

void Pokemon::atacar(Pokemon* outro_pokemon) {
    falar_nome();
    falar_tipo_ataque();
    double dano = calcular_dano();
    cout << "Dano: " << dano << endl;
    outro_pokemon->receber_dano(dano);
}

void Pokemon::receber_dano(double valor_dano) {
    _energia -= valor_dano;
    if (_energia < 0) _energia = 0;
    if (_energia == 0) {
        cout << _nome << " morreu!" << endl;
    }
}
