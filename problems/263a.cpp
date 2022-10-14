#include <iostream>

int main() {
   int x, y, c;
   for (int i = 0; i < 5; i++) {
      for (int j = 0; j < 5; j++) {
         std::cin >> c;
         if (c == 1) {
            x = i; y = j;
            break;
         }
      }
   }
   std::cout << abs(2 - x) + abs(2 - y) << std::endl;
   return 0;
}