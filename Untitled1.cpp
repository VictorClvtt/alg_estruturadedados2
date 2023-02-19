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

    cout << "+--------------------------------------------------+" << endl;
    cout << "|         PESQUISA DE DADOS DE FUNCIONARIOS        |" << endl;
    cout << "+--------------------------------------------------+" << endl;
    cout << "|Digite o DDD dos registros que deseja ver:        |" << endl;
    cout << "+--------------------------------------------------+" << endl;
    cin >> ddd1;

    for (a = 0; a < 3; a++) {
        if (ddd1 == funcionarios[a].ddd) {
            cout << "+--------------------------------------------------+" << endl;
            cout << "|             DADOS DO(S) FUNCIONARIO(S)           |" << endl;
            cout << "+--------------------------------------------------+" << endl;
            cout << "|Funcionario numero " << a + 1 << ":" << endl;
            cout << "|Nome: " << funcionarios[a].nome << endl;
            cout << "|Telefone: " << funcionarios[a].ddd << funcionarios[a].tel << endl;
            cout << "|Cidade: " << funcionarios[a].cidade << endl << endl;
        }
    }

    cout << "+--------------------------------------------------+" << endl;
    cout << "|Deseja fazer outra pesquisa pelos dados com o DDD?|" << endl;
    cout << "+--------------------------------------------------+" << endl;
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
        cout << "+--------------------------------------------------+" << endl;
        cout << "|           SISTEMA DE REGISTRO DE FUNCIONARIOS    |" << endl;
        cout << "+--------------------------------------------------+" << endl;
        cout << "|             INSERCAO DE DADOS DE FUNCIONARIOS    |" << endl;
        cout << "+--------------------------------------------------+" << endl;
        cout << "|Funcionario " << i + 1 << ":" << endl;
        cout << "|Nome: ";
        cin >> pessoa[i].nome;
        cout << "|DDD: ";
        cin >> pessoa[i].ddd;
        cout << "|Telefone: ";
        cin >> pessoa[i].tel;
        cout << "|Cidade: ";
        cin >> pessoa[i].cidade;
        cout << "+--------------------------------------------------+" << endl;
        cout << "\033[2J\033[1;1H";
    }

    cout << "+--------------------------------------------------+" << endl;
    cout << "|             PESQUISA DE DADOS DE FUNCIONARIOS    |" << endl;
    cout << "+--------------------------------------------------+" << endl;
    cout << "|Deseja fazer uma pesquisa pelos dados com o DDD?  |" << endl;
    cout << "+--------------------------------------------------+" << endl;
    cin >> r;
    cout << "\033[2J\033[1;1H";

    if (r == "sim" || r == "Sim") {
        do {
            resposta = pesquisa(pessoa);
        } while (resposta != "nao" || resposta != "Nao");

        cout << "+--------------------------------------------------+" << endl;
        cout << "|                     ADEUS!                       |" << endl;
        cout << "+--------------------------------------------------+" << endl;
    }else if (r == "nao" || r == "Nao"){
        cout << "+--------------------------------------------------+" << endl;
        cout << "|                     ADEUS!                       |" << endl;
        cout << "+--------------------------------------------------+" << endl;
    }
    return 0;
}
