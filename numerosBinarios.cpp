#include <iostream>
using namespace std;

string pasarBinario(int numero, int numeroBits){
string numeroBinario;
int cantidadDeBits=1;

for(int i=1;i<numeroBits;i++){
    cantidadDeBits*=2;
}
if(cantidadDeBits<=numero){
    numeroBinario="1";
    numero=numero-cantidadDeBits;
}else{
    numeroBinario="0";
}
for(int i=1;i<numeroBits;i++){
    cantidadDeBits=cantidadDeBits/2;
    if(cantidadDeBits<=numero){
        numeroBinario+="1";
        numero-=cantidadDeBits;
    }else{
        numeroBinario+="0";
    }
}
return numeroBinario;
}

int main (){
int numeroUsuario=10077;
int numeroDeBits=16;

string numeroBinario=pasarBinario(numeroUsuario, numeroDeBits);

cout << numeroBinario;
return 0;
}
