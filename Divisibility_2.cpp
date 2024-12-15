#include<bits/stdc++.h>
#include<vector>
#include<cmath>
using namespace std;
#define ll long long int
#define ld long double
#define pb push_back
#define endl "\n"
#define pi acos(-1)
#define YES cout<<"YES\n"
#define Yes cout<<"Yes\n"
#define yes cout<<"yes\n"
#define no  cout<<"no\n"
#define NO  cout<<"NO\n"
#define No  cout<<"No\n"
#define all(a) (a).begin(), (a).end()
#define rall(a) (a).rbegin(), (a).rend()
#define fin(a) for (auto &x : a) cin>>x
#define fout(a) for (auto &x : a) cout<<x<<" "; cout<<endl;
void Kuldip_Saha_Mugdha()
{
     int n,i,j,d,r;cin>>n;
     if(n<=20)
     {
        cout<<"Number of array elements must be greater than 20."<<endl;
     }
     else
     {
        vector<int>a1(n);
        vector<int>a2((n+9)/10);
        fin(a1);
        fin(a2);
        for(i=0;i<n;i++)
        {
            for(j=0;j<a2.size();j++)
            {
                d=ceil((double)a1[i]/a2[j]);
                r=a1[9]%a2[j];
                
                cout<<"a1["<<i<<"]/a2["<<j<<"]-> Divisor: "<<d<<", Remainder: "<<r<<endl;
            }
        }
     }
}
//int32_t main()
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    Kuldip_Saha_Mugdha();
}