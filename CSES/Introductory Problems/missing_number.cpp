#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int main(){
    ll n, ans;
    cin>> n;
    vector<ll> numbers(n);
    for (int i = 0; i<n-1; i++){
        cin>>numbers[i];
    }
    sort(numbers.begin(), numbers.end());

    for (int i = 1; i<=n; i++){
        if (i != numbers[i-1]){
            ans = i;
        }
    }
    cout<<ans<<"\n";
    return 0;
}
