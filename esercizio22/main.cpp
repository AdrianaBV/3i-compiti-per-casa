#include <iostream>

using namespace std;

int main()
{
    int N; //si verifica se il numero e' maggiore, minore o uguale a x
    int X; //in base a questo numero si verifica N
    int I;
    int MAXn; //il numero di numeri che vuoi verificare
    int Nmax; //maggiore
    int Nmin; //minore
    int Neg; //uguale

    cout<<"Questo programma determina quanti numeri tra quelli inseriti sono piu' grandi, minori e uguali a X."<<endl;

    cout<<"Quanti numeri vuoi verificare nei confronti di X?"<<endl;
    cin>>>MAXn;

    cout<<"In confronto di quale numero vuoi verificare gli altri?"<<endl;
    cin>>X;

    for(I=0; I<MAXn; I++){
        cin>>N
        if(N>X)
            Nmax++;

        if(N<X)
            Nmin++;

        if(N==X)
            Neg++;
    }

        cout<<"I numeri maggiori di X sono : "<<Nmag<<endl;

        cout<<"I numeri minori di X sono : "<<Nmin<<endl;

        cout<<"I numeri uguali a X sino :"<<Neg<<endl;

    return 0;
}
