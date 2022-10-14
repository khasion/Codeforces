#include <iostream>
#include <algorithm>
#include <vector>

int main () {
   std::string sum;
   std::vector<int> ans;
   int c, i = 0;
   std::cin >> sum;
   while ((c = sum[i++]) != '\0') {
      if (c == '1' || c == '2' || c == '3') {
         ans.push_back(c-48);
      }
   }
   std::sort(ans.begin(), ans.end());
   std::cout << ans[0];
   for (i = 1; i < ans.size(); i++) {
      std::cout << "+" << ans[i];
   }
   std::cout << std::endl;
   return 0;
}