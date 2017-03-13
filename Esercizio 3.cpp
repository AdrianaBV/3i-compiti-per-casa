using namespace std;
int dimensione(void);
void stampa(int vet[], int dim);

int main(){
unsigned int i;
int vet[11]; //dimensione dell'array
int Nelementi=dimensione();
for (int i = 0; i < Nelementi; i++){  //lettura degli elementi
	cout<<"Inserisci il "<<i+1<<" elemento ";
	cin>>vet[i];
}
cout << "Ecco l'indirizzo di partenza dell' array : " << vet << endl;
    stampa(vet, Nelementi);
    system("PAUSE");
    return 0;
}

int dimensione(){
    int Nelementi, i;
    cout<<"Inserisci il numero di elementi: ";
    cin>> Nelementi;
        if (Nelementi < 0 || i  >= 10){
                cout<<"La dimensione dell'array deve essere compresa tra 0 e 11 ";
                cout<<"Reinserisci la dimensione dell'array: ";
                cin>>Nelementi;

}
}

void stampa(int vet[], int dim){
for (int i = dim; i >= 0; i--){     //scrittura dell'array rovesciato
	cout<<" ; "<<vet[i];
}
}
