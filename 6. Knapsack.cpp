//Bismillahir Rahmanir Rahim
#include<bits/stdc++.h>
#define ull unsigned long long
#define ll long long
#define pb push_back
#define mp make_pair
#define pob pop_back
#define in insert
#define vi vector<ll int>
#define vs vector<string>
#define pii pair<ll int,ll int>
#define psi pair<string,ll int>
#define pis pair<ll int,string>
#define mii map<ll int,ll int>
#define mib map<ll int,bool>
#define msi map<string,ll int>
#define mis map<ll int,string>
#define S string
#define fi first
#define se second
#define sp ' '
#define dl "\n"
#define all(data) data.begin(),data.end()
#define b() begin()
#define e() end()
#define cY cout<<"YES\n"
#define cN cout<<"NO\n"
#define cy cout<<"Yes\n"
#define cn cout<<"No\n"
#define setp(n) setprecision(n)
#define mem(arr,val) memset(arr,val,sizeof(arr));
#define debug(x) cerr<<x<<dl;
#define here fprintf(stderr, "====I am Here====\n");
#define FOR(data) for(auto it=data.begin();it!=data.end();it++)
#define Boost ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)
#define maxx 10005
#define EPS 1e-9
using namespace std;
const double PI = acos(-1);
ll int hp = 1e9+7;


// Way Of Thinking
// We iterate from left to right in iteams array. For each item we have 2 choices
// 1. Take it remaining capacity of Knapsack
// 2. Not take it Capacity rernains same
// Let.
//     f (n,w) = denotes the maximum value of items
//     we can pick till item n and current capacity of knapsack w.
    
int val[maxx],wt[maxx];


int dp[maxx][maxx];
int knapsack(int n,int w)
{

    if(w<=0)return 0;
    if(n<=0)return 0;

    if(dp[n][w]!=-1)return dp[n][w];

    if(wt[n-1]>w)dp[n][w] = knapsack(n-1,w);
    else dp[n][w] = max(knapsack(n-1,w),knapsack(n-1,w-wt[n-1])+val[n-1]);

    return dp[n][w];
}


void Boom()
{
    //Let's Move

    int n;
    cin>>n;

    for(int i=0;i<maxx;i++)
    {
        for(int j=0;j<maxx;j++)
        {
            dp[i][j]=-1;
        }
    }

    for(int i=0;i<n;i++)cin>>wt[i];
    for(int i=0;i<n;i++)cin>>val[i];

    int w;
    cin>>w;
    cout<<knapsack(n,w)<<dl;


}

int main()
{
    Boost;

    int t=1;      // cin>>t;
    for(int i=1;i<=t;i++)
    {
        //cout<<"Case "<<i<<" : ";
        Boom();
    }

    return 0;

}
