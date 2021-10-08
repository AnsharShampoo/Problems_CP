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
    int n;
    cin>>n;
    vector<pair<int, int>> hours;
    for (int i = 0; i<n; i++){
        int a, b;
        cin>>a>>b;
     hours.push_back(make_pair(a,b));
    }
    sort(hours.begin(), hours.end());
    int count = 1;
    int max = 0;
    /*
    for (int i = 1; i<n; i++){
        if (hours[i].first < hours[i-1].second){
            count++;
        }
        else{
            count = 1;
        }
        if (count>max){
            max = count;
        }
    } */
    int a = 0, b = 1;
    while (b<n){
        if (hours[b].first < hours[a].second){
                count++;
            }
            else{
                count = 1;
            }
            if (count>max){
                max = count;
            }
        if (hours[b].second >= hours[a].second){
            a++;
        }
        b++;
    }
        cout<<max;
}

