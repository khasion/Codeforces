#include <iostream>

int main() {
   int n, a, ans;
   ans = 0;
   std::cin >> n;
   for (int i = 0; i < n; i++) {
      int cnt = 0;
      for (int j = 0; j < 3; j++) {
         std::cin >> a;
         if ( a == 1) cnt++;
      }
      if (cnt >= 2) ans++;
   }
   std::cout << ans << std::endl;
   return 0;
}