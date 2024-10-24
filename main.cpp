#include <iostream>
using namespace std;

int main() {
    int n,i; 
    float numero,max;

    cout<<"inserisci il numero"<<endl;
    cin>>n;
    
    i=1;
    while (i<=n) { 
        i=i+1;
        if (i=1){ 
        max=numero;
        } else { 
            if(numero>max){
            max=numero; 
            }
        }   
    }
    cout<<"il massimo numero e " << max <<endl; 
}
//LEGGERE LE ISTRUZIONI NEL FILE README.md
