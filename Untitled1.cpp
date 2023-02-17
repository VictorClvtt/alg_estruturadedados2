#include <iostream>
#include <string>

using namespace std;

struct funcionario {
    string nome;
    int ddd;
    int tel;
    string cidade;
};

string pesquisa(funcionario funcionarios[]) {
    string res;
    int a, ddd1;

    cout << "Digite o ddd dos registros que deseja ver: ";
    cin >> ddd1;

    for (a = 0; a < 3; a++) {
        if (ddd1 == funcionarios[a].ddd) {
            cout << "FUNCIONARIO NUMERO " << a + 1 << ":" << endl;
            cout << "Nome: " << funcionarios[a].nome << endl;
            cout << "Telefone: " << funcionarios[a].ddd << funcionarios[a].tel << endl;
            cout << "Cidade: " << funcionarios[a].cidade << endl;
        }
    }

    cout << "Deseja fazer outra pesquisa pelos dados com o ddd?" << endl;
    cin >> res;
    cout << "\033[2J\033[1;1H";

    return res;
}

int main() {
    funcionario pessoa[3];
    int i, ca;
    string r;
    string resposta;

    for (i = 0; i < 3; i++) {
        cout << "Digite o nome do funcionario numero " << i + 1 << ": ";
        cin >> pessoa[i].nome;
        cout << "\033[2J\033[1;1H";

        cout << "Digite o ddd do funcionario numero " << i + 1 << ": ";
        cin >> pessoa[i].ddd;
        cout << "\033[2J\033[1;1H";

        cout << "Digite o telefone do funcionario numero " << i + 1 << ": ";
        cin >> pessoa[i].tel;
        cout << "\033[2J\033[1;1H";

        cout << "Digite a cidade do funcionario numero " << i + 1 << ": ";
        cin >> pessoa[i].cidade;
        cout << "\033[2J\033[1;1H";
    }

    cout << "Deseja fazer uma pesquisa pelos dados com o ddd?" << endl;
    cin >> r;
    cout << "\033[2J\033[1;1H";

    if (r == "sim" || r == "Sim") {
        do {
            resposta = pesquisa(pessoa);
        } while (resposta != "nao" && resposta != "Nao");

        cout << "Ok, adeus :)";
    } else if (r == "nao" || r == "Nao") {
        cout << "Ok, adeus :)";
    }

    return 0;
}
