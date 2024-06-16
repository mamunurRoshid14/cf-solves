//https://codeforces.com/profile/mamunur_roshid_517
        #include <bits/stdc++.h>
 
using i64 = long long;
 
int main() {
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);
    
    int N;
    std::cin >> N;
    
    std::vector<int> A(N);
    for (int i = 0; i < N; i++) {
        std::cin >> A[i];
    }
    
    i64 sum = std::accumulate(A.begin(), A.end(), 0LL);
    int max = *std::max_element(A.begin(), A.end());
    i64 ans = std::min(sum / 3, sum - max);
    std::cout << ans << "\n";
    
    return 0;
}
                //Link: https://codeforces.com/contest/1906/problem/M