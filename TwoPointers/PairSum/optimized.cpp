#include <bits/stdc++.h>
using namespace std;
#define ll long long
// Optimized solution using Two Pointers
vector<int> solve(vector<int>& arr, int target) {
    int left = 0;
    int right = arr.size() - 1;
    while (left < right) {
        int sum = arr[l] + arr[r];
        if (sum == target) return {left, right};
        else if (sum < target) left++; // Increase sum
        else right--; // Decrease sum
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
