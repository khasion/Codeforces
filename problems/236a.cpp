#include <iostream>
#include <vector>

int main() {
   int c = 0;
   std::string name;
   std::vector<int> alphabet(26, 0);
   std::cin >> name;
   for (int i = 0; i < name.length(); i++) {
      if (alphabet[name[i]-97] == 0) {c++;}
      alphabet[name[i] - 97] = 1;
   }
   if (c%2 == 0) {
      std::cout << "CHAT WITH HER!" << std::endl;
   }
   else {
      std::cout << "IGNORE HIM!" << std::endl;
   }
   return 0;
}