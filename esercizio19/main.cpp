#include <iostream>

using namespace std;

int main()
{
    int n=0;
    int MAXn;


    cout<<"Questo e' un programma che visualizza i primi 100 numeri pari."<<endl;

    cout<<"Quanti numeri vuoi inserire, non piu' di 100!!!"<<endl;
    cin>>MAXn;

    cout<<"I primi numeri pari tra MAXn sono: "<<endl;
    for(n=0; n<MAXn; n++){
        n++
        if(n%2==0){
            cout<<n<<endl;
        }
    }
    return 0;
}
