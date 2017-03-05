#include <iostream>
#include <stdlib.h>

using namespace std;
int calcola(vet[], int Nelementi);

int main(){
    unsigned int i;
    int vet[11];        // dichiarazione di un vettore di 10 interi
    int Nelementi;  // numero di elementio dell'array v
    for (int i=0; i < Nelementi; i++) {
        cout << "Inserisci il " << i+1 << " elemento: ";
        cin >> vet[i];
    }
    cout << "Ecco l'indirizzo di partenza dell' array : " << vet << endl;
    stampa(vet, Nelementi);
    calcola()
    system("PAUSE");
    return 0;
}

int calcola(){
    int Nelementi, s=0, p=1;
    for (i = 0; i < Nelementi; i++){
            if((i+1)%2==0)
                p*=vet[i]
                else //se è dispari
                s+=vet[i]
}
}
