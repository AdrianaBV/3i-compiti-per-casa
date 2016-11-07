#include <iostream>

using namespace std;

int main()
{
    int N;
    int D=10; //divisore
    int i=1;

    cout<<"Inserisci un numero intero N ( 0 <= N < 1000 ) : " <<endl;
    cin>>N;

    do{

            cout<<"La "<<i<<" esima cifra da destra e'"<< N%10 <<endl;
            N=N/10;
            i++;

    }
    while( i<=3 && N!=0);


    return 0;
}
