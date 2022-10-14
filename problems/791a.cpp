#include <iostream>

int main() {
   int a, b;
   std::cin >> a;
   std::cin >> b;
   for (int i = 0;; i++) {
      if (a > b) {
         std::cout << i << std::endl;
         break;
      }
      a = a*3;
      b = b*2;
   }
   return 0;
}