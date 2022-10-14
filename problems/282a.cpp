#include <iostream>

int main() {
   int n, x = 0;
   std::string str;
   std::cin >> n;
   for (int i = 0; i < n; i++) {
      std::cin >> str;
      if (str.compare("X++") == 0 || str.compare("++X") == 0) {x++;}
      else if (str.compare("X--") == 0 || str.compare("--X") == 0) {x--;}
   }
   std::cout << x << std::endl;
   return 0;
}