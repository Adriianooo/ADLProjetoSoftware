#include <iostream>

using namespace std;


int uniao(int* x1, int* x2, int n1, int n2, int* qtd) {
    int contador = 0;
    int* vetorFinal;
    vetorFinal = new int[*qtd];
    for (int i = 0; i < *qtd; i += 2) {
        vetorFinal[i] = x1[contador];
        vetorFinal[i + 1] = x2[contador];
        contador++;
    }
    cout << "Vetor final:" << "\n";

    for (int i = 0; i < *qtd; i++) {
        cout << vetorFinal[i] << "\n";
    }

    return *vetorFinal;
}


int main() {
    int a, b;
    int* vetor1;
    int* vetor2;
    int* tamVetorFinal;
    cout << "Digite o tamanho dos vetores: ";
    cin >> a;
    b = a;
    int soma = a + b;

    tamVetorFinal = &soma;

    vetor1 = new int[a];
    vetor2 = new int[b];


    for (int i = 0; i < a; i++) {
        int numero;
        cout << "Digite o valor do " << i + 1 << " numero:" << "\n";
        cin >> numero;
        *(vetor1 + i) = numero;
    }

    for (int i = 0; i < b; i++) {
        int numero;
        cout << "Digite o valor do " << i + 1 << " numero:" << "\n";
        cin >> numero;
        *(vetor2 + i) = numero;
    }

    uniao(vetor1, vetor2, a, b, tamVetorFinal);
}








