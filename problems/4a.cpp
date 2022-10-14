#include <iostream>

int main() {
   int n;
   std::cin >> n;
   for (int i = 2; i <= 50; i+=2) {
      for (int j = 2; j <= 50; j+=2) {
         if ( i + j == n) {
            std::cout << "YES\n";
            return 0;
         }
      }
   }
   std::cout << "NO\n";
   return 0;
}