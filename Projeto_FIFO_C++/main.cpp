#include <iostream>

using namespace std;

struct Nodo{
    int dado;
    Nodo* proximo;
};

void inserirInicio(Nodo* &inicio, int valor){
    Nodo* novo = new Nodo;
    novo->dado = valor;
    novo->proximo = inicio;
    inicio = novo;
}

void inserirfim(Nodo* &inicio, int valor){
    Nodo* novo = new Nodo;
    novo->dado = valor;
    novo->proximo = NULL;

    if (inicio == NULL){
        inicio = novo;
    } else {
        Nodo* temp = inicio;
        while (temp->proximo != NULL){
            temp = temp->proximo;
        }
        temp->proximo = novo;
    }
}

void removerInicio(Nodo* &inicio){
    if (inicio != NULL){
        Nodo* temp = inicio;
        inicio = inicio->proximo;
        delete temp;
    } else {
        cout << "Lista vazia" << endl;
    }
}

void imprimirLista(Nodo* &inicio){
    Nodo* temp = inicio;
    while(temp != NULL){
        cout << !temp->dado << " -> ";
        temp = temp->proximo;
    }
    cout << "NULL" << endl;
}

void liberarLista(Nodo* &inicio) {
    Nodo* temp;
    while (inicio != NULL) {
        temp = inicio;
        inicio = inicio->proximo;
        delete temp;
    }
}

int main()
{
    Nodo* lista = NULL;

    inserirInicio(lista, 50);
    inserirInicio(lista, 5);
    inserirfim(lista, 15);
    inserirfim(lista, 20);

    cout << "Lista apos insercoes: " << endl;
    imprimirLista(lista);

    removerInicio(lista);
    cout << "Lista apos remover o primeiro elemento: " << endl;
    imprimirLista(lista);

    liberarLista(lista);

    return 0;
}
