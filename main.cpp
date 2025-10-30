// NÃO ALTERE ESSA LINHA
//#include "avaliacao_basica_pokemon.hpp"

#include <iostream>
#include <string>
#include "Campeonato.hpp"
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    Campeonato camp;
    char cmd;

    while (cin >> cmd) {
        if (cmd == 't') {
            string nome; cin >> nome;
            camp.cadastrar_treinador(nome);
        } else if (cmd == 'i') {
            int idt; cin >> idt;
            camp.imprimir_informacoes_treinador(idt);
        } else if (cmd == 'e') {
            int idt; string nome, tipo; double f, p;
            cin >> idt >> nome >> tipo >> f >> p;
            camp.cadastrar_pokemon_eletrico(idt, nome, tipo, f, p);
        } else if (cmd == 'q') {
            int idt; string nome, tipo; double f, l;
            cin >> idt >> nome >> tipo >> f >> l;
            camp.cadastrar_pokemon_aquatico(idt, nome, tipo, f, l);
        } else if (cmd == 'x') {
            int idt; string nome, tipo; double f, t;
            cin >> idt >> nome >> tipo >> f >> t;
            camp.cadastrar_pokemon_explosivo(idt, nome, tipo, f, t);
        } else if (cmd == 'h') {
            int idt1, idpk1, idt2, idpk2;
            cin >> idt1 >> idpk1 >> idt2 >> idpk2;
            camp.executar_batalha(idt1, idpk1, idt2, idpk2);
        } else if (cmd == 'b') {
           // avaliacao_basica();
        }
    }
    return 0;
}
