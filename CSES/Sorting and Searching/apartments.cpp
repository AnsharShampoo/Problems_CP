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
    int n, m, k, endppl, endrooms, count = 0, dif = 0;
    cin>>n>>m>>k;
    vi ppl(n), rooms(m);
    priority_queue <int> ppl1, rooms1;
    for (int i = 0; i<n; i++){
        cin>>ppl[i];
    }
    for (int i = 0; i<m; i++){
        cin>>rooms[i];
    }
    for (int i = 0; i<n; i++){
        ppl1.push(ppl[i]);
    }
    for (int i = 0; i<m; i++){
        rooms1.push(rooms[i]);
    } 
    while (!rooms1.empty() && !ppl1.empty()){
        endppl = ppl1.top();
        endrooms = rooms1.top();
        dif = endppl - endrooms;
        if (dif > k){
            ppl1.pop();
        }
        else if (dif < (-k)){
            rooms1.pop();
        }
        else{
            count+=1;
            ppl1.pop();
            rooms1.pop();
        }
    }
    cout<<count<<endl;
    return 0;
}
