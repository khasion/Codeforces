#include <iostream>

int main() {
   int n, k, ans;
   int* a;
   ans = 0;
   std::cin >> n;
   std::cin >> k;
   a = (int*) malloc(sizeof(int)*n);
   for (int i = 0; i < n; i++) {
      std::cin >> a[i];
   }
   int i = 0;
   while (i < n && a[i] != 0 && a[i] >= a[k-1]) {i++;ans++;}
   std::cout << ans << std::endl;
   free(a);
   return 0;
}