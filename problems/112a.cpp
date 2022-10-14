#include <iostream>

int main() {
   std::string str1, str2;
   std::cin >> str1;
   std::cin >> str2;
   for (int i = 0; i < str1.length(); i++) {
      str1[i] = tolower(str1[i]);
   }
   for (int i = 0; i < str2.length(); i++) {
      str2[i] = tolower(str2[i]);
   }
   int cmp = str1.compare(str2);
   if (cmp > 0) {
      std::cout << 1 << std::endl;
   }
   else if (cmp < 0) {
      std::cout << -1 << std::endl;
   }
   else {
      std::cout << 0 << std::endl;
   }
   return 0;
}