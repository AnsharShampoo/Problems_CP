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
    int n,m;
    cin>>n>>m;
    multiset<int> tickets;
    vi ppl(m);
    for (int i = 0; i<n; i++){
        int input;
        cin>> input;
        tickets.insert(-input);
    }
    for (int i = 0; i<m; i++){
        cin>>ppl[i];
    }

    // Imp
    for (int i = 0; i<m; i++){
        if(tickets.lower_bound(-ppl[i]) != tickets.end()){
            cout << -*tickets.lower_bound(-ppl[i])<<endl;
            tickets.erase(tickets.lower_bound(-ppl[i]));
        }
        else {
            cout<< "-1"<<endl;
        }
    }

}
