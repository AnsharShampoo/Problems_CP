#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define int long long
#define vi vector<int>
#define ii pair<int, int>
#define vii vector<pair<int, int>>
#define vvi vector<vector<int>>
#define vif vector<int> inputs(n);for (int i = 0; i < n; i++) cin >> inputs[i]
#define endl '\n'


int32_t main() {
    int n, w;
    cin>>n>>w;
    vif;
    
    sort(inputs.begin(), inputs.end());
    int a = 0, b = n-1;
    int count = 0, ans = 0;
    while (a != b && b>a){
        if ((inputs[a] + inputs[b]) <= w){
            a++;
            b--;
            count+=1;
        }
        else if ((inputs[a] + inputs[b]) > w){
            b--;
        }
    }
    ans = n-(count*2)+count;
    
    cout<<ans<<endl;
    return 0;
}
