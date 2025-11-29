#include <bits/stdc++.h>
using namespace std;
#define ll long long
// Brute-force solution: check all possible pairs
vector<int> solve(vector<int>& arr, int target) {
    for (int i = 0; i < arr.size(); ++i) {
        for (int j = i + 1; j < arr.size(); ++j) {
            if (arr[i] + arr[j] == target) return {i, j};
        }
    }
    return {}; // No pair found
}
int main() {
    vector<int> arr = {2, 2, 3, 5, 7, 9};
    int target = 8;
    vector<int> res = solve(arr, target);
    if (!res.empty()) cout << res[0] << " " << res[1];
    else cout << "NO pair found.";
    return 0;
}
