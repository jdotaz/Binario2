 #include <iostream>

using namespace std;

int main()
{
  int decimal;
  int total2=0;
  int mult=1;
  cin >> decimal;
  while (decimal>0){
    total2=total2+mult*(decimal%2);
    decimal=(decimal/2);
    mult=mult*10;
  }
  cout << total2<<endl;
}
