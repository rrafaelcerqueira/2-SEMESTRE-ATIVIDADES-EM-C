#include <iostream>
#include <string>
using namespace std;

struct Aluno {
    int matricula;
    string nome;
    int idade;
    Aluno* prox;
};

void inserir(Aluno*& inicio, int matricula, string nome, int idade) {
    Aluno* temp = inicio;
    while (temp != nullptr) {
        if (temp->matricula == matricula) {
            cout << " Matricula ja cadastrada!\n";
            return;
        }
        temp = temp->prox;
    }

    Aluno* novo = new Aluno;
    novo->matricula = matricula;
    novo->nome = nome;
    novo->idade = idade;
    novo->prox = nullptr;

    if (inicio == nullptr) {
        inicio = novo;
    } else {
        temp = inicio;
        while (temp->prox != nullptr) {
            temp = temp->prox;
        }
        temp->prox = novo;
    }

    cout << " Aluno inserido com sucesso!\n";
}


void listar(Aluno* inicio) {
    if (inicio == nullptr) {
        cout << "Lista vazia.\n";
        return;
    }

    Aluno* temp = inicio;
    while (temp != nullptr) {
        cout << "Matricula: " << temp->matricula
             << " | Nome: " << temp->nome
             << " | Idade: " << temp->idade << endl;
        temp = temp->prox;
    }
}

void pesquisar(Aluno* inicio, int matricula) {
    Aluno* temp = inicio;
    while (temp != nullptr) {
        if (temp->matricula == matricula) {
            cout << "Aluno encontrado!\n";
            cout << "Matricula: " << temp->matricula
                 << " | Nome: " << temp->nome
                 << " | Idade: " << temp->idade << endl;
            return;
        }
        temp = temp->prox;
    }
    cout << "Aluno nao encontrado.\n";
}

void remover(Aluno*& inicio, int matricula) {
    if (inicio == nullptr) {
        cout << "Lista vazia.\n";
        return;
    }

    Aluno* temp = inicio;
    Aluno* anterior = nullptr;

    while (temp != nullptr && temp->matricula != matricula) {
        anterior = temp;
        temp = temp->prox;
    }

    if (temp == nullptr) {
        cout << "Aluno nao encontrado.\n";
        return;
    }

    if (anterior == nullptr) {
        inicio = temp->prox;
    } else {
        anterior->prox = temp->prox;
    }

    delete temp;
    cout << "Aluno removido com sucesso!\n";
}

int main() {
    Aluno* inicio = nullptr;
    int opcao;

    do {
        cout << "\n===== MENU =====\n";
        cout << "1 - Inserir aluno\n";
        cout << "2 - Listar alunos\n";
        cout << "3 - Pesquisar aluno por matricula\n";
        cout << "4 - Remover aluno por matricula\n";
        cout << "5 - Sair\n";
        cout << "Escolha: ";
        cin >> opcao;

        if (opcao == 1) {
            int mat, idade;
            string nome;
            cout << "Digite a matricula: ";
            cin >> mat;
            cin.ignore();
            cout << "Digite o nome: ";
            getline(cin, nome);
            cout << "Digite a idade: ";
            cin >> idade;
            inserir(inicio, mat, nome, idade);
        }
        else if (opcao == 2) {
            listar(inicio);
        }
        else if (opcao == 3) {
            int mat;
            cout << "Digite a matricula para pesquisar: ";
            cin >> mat;
            pesquisar(inicio, mat);
        }
        else if (opcao == 4) {
            int mat;
            cout << "Digite a matricula para remover: ";
            cin >> mat;
            remover(inicio, mat);
        }

    } while (opcao != 5);

    while (inicio != nullptr) {
        Aluno* temp = inicio;
        inicio = inicio->prox;
        delete temp;
    }

    cout << "Programa encerrado.\n";
    return 0;
}
