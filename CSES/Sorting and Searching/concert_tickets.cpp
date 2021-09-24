#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define int long long
#define vi vector<int>
#define ii pair<int, int>
#define vii vector<pair<int, int>>
#define vvi vector<vector<int>>
#define vif vector<int> v(n);for (int i = 0; i < n; i++) cin >> v[i]
#define endl '\n'
int32_t main() {
    int tickets, ppl;
    vector<pair<int, int>> guys;
    vi tick; 
    for (int i = 0; i<tickets; i++){
        cin>>tick[i];
    }
    for (int i = 0; i<ppl; i++){
        cin>>guys[i].first;
        guys[i].second = i;
    }
    sort(guys.begin(),guys.end());
    sort(tick.begin(), tick.end());
    int a, b, flag = false;
    while (!flag){
        
    }
    
    
    return 0;

}
