#include <iostream>
using namespace std;

int main() {
   
   float a,b;
   int opzione;
   
   cin >> a >> b;
   
   switch(opzione) {
      case 0 :
         cout << (a*b)/2;
         break;
      case 1 :
         cout << a*a;
         break;
      case 2 :
         cout << a*b;
         break;
      default :
         cout << "l'opzione selezionata non è valida";
   }
   return 0;
}
