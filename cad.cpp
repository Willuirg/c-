#include <cstdio>
#include <iostream>
#include <string>

using namespace std;

int main() {
    string nome, tipodeatendimento;
    int idade, numerocart, numerosala;

    cout << "Digite o seu nome: ";
    cin >> nome;
    cout << "Digite o tipo de atendimento: ";
    cin >> tipodeatendimento;
    cout << "Digite a sua idade: ";
    cin >> idade;
    cout << "Digite o número do cartão: ";
    cin >> numerocart;
    if (tipodeatendimento == "cardiologista")
    {
        cout << "O paciente " << nome << " tem " << idade << " anos e será atendido na salas 106 a 112" << "." << endl;
    }
    else if (tipodeatendimento == "Pediatra")
    {
        cout << "O paciente " << nome << " tem " << idade << " anos e será atendido na salas 90 a 95" << "." << endl;
    }
    else if (tipodeatendimento == "Clinico Geral")
    {
        cout << "O paciente " << nome << " tem " << idade << " anos e será atendido na salas 80 a 89" << "." << endl;
    }
    else if (tipodeatendimento == "Ortopedista")
    {
        cout << "O paciente " << nome << " tem " << idade << " anos e será atendido na salas 70 a 75" << "." << endl;
    }
    else if (tipodeatendimento == "Outros")
    {
        cout << "O paciente " << nome << " tem " << idade << " anos e será atendido na salas 150 a 160" << "." << endl;
    }
    else
    {
        cout << "Tipo de atendimento inválido." << endl;
    }
    
    return 0;
}   

