#include <iostream>

using namespace std;

int main()
{
  int binario;
  cin >> binario;
  int descomp=binario;
  int digitos=0;
  while (descomp>0){
    descomp=descomp/10;
    digitos=digitos+1;
  }
  digitos=digitos-1;
  //////////////////////////////
  int divisor=1;
  for(int i=digitos;i>0;i--){
    divisor=divisor*10;
  }

  //////////////////////////////
  int total=0;
  while (digitos>-1){
    if (binario/divisor==1){
      int potdos=1;
      for(int i=digitos;i>0;i--){
        potdos=potdos*2;
      }
      total=total+potdos;
      binario=binario-divisor;
    }
    divisor=divisor/10;
    digitos=digitos-1;
  }
  cout << total << endl;
}
