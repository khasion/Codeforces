#include <iostream>

int main() {
   std::string stones;
   int ans = 0, n, i=0;
   std::cin >> n;
   std::cin >> stones;
   while (i < stones.length()) {
      if (i+1 < stones.length() && stones[i+1] == stones[i]) {
         ans++;
         stones.erase(stones.begin()+(i+1));
      }
      else {
         i++;
      }
   }
   std::cout << ans << std::endl;
   return 0;
}