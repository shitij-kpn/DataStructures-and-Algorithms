#include <bits/stdc++.h>

using namespace std;

#define fast ios::sync_with_stdio(0), cout.tie()
#define test long int T; cin>>T; while(T--)
#define ll long long
#define vi vector<int>
#define vl vector<ll> 
#define mui unordered_map<int,int>
#define sui unordered_set<int>
#define ml map<int,int>
#define sl set<int>
#define sz(a) int((a).size())
#define MOD 1000000007
#define mp make_pair
#define pb push_back
#define all(x) x.begin(),x.end()

int main(){
    test{
        int n;
        cin>>n;
        if(n==1){
            cout<<0<<endl;
            continue;
        }
        double ans = (sqrt(n));
        ans *= 2;
        ans = ceil(ans);
        int answ = ans - 2;
        cout<<answ<<endl;
    }
    return 0;
}