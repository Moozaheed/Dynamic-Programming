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
#define maxx 1005
#define EPS 1e-9
using namespace std;
const double PI = acos(-1);
ll int hp = 1e9+7;


// https://www.youtube.com/watch?v=GBBRjI_1LRI&list=PLWwle8Mv67Xqy8KyK7_IzWIJ_kxN2BnGe&index=4&ab_channel=ApnaCollege

//      Problem: Given a set of coins and a value V'. Find the number of ways
//          we can make change of 'V'.

// Example: s={1,2,3} and v=3
// Possible ways to make change are; {3}, {2,1}, {1,1,1}
// Note: {1,2} is not counted as a separate as it is same as {2,1)


// Approach 1: (Using Memoization)
// (1) Write the recurrence solution.
// (2) Memoize it Basically means, create a DP table and store
// the results.



// Approach 2: (Tabulation - Bottom up)
// (1) Take each coin one by one and fill DP table till that coin, for all
// the values from O to V.


// Approach 3: (Tabulation with Space Efficiency)
// (l) Oust a minor change in approach 2.
// (2) We knew for every cell, we have 2 options;
//      (i) Take that coin.
//      (ii) Do not take that coin.


int dp[maxx][maxx];
int coinchange(vi &a,int n,int x)
{
    if(x==0)return 1;
    if(x<0) return 0;
    if(n<=0)return 0;
    if(dp[n][x]!=-1)return dp[n][x];
    dp[n][x]=coinchange(a,n,x-a[n-1])+coinchange(a,n-1,x);
    return dp[n][x];
}


void Boom()
{
    //Let's Move
    int n;
    cin>>n;
    vi a(n);


    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            dp[i][j]=-1;
        }
    }
    for(int i=0;i<n;i++)cin>>a[i];

    int x;
    cin>>x;

    cout<<coinchange(a,n,x);




//2nd Way

// vi dp(n+1,vi(x+1,0));
// dp[0][0]=1;
// for(int i=1;i<n+1;i++)
// {
//     for(int j=0;j<x+1;j++)
//     {
//         if(j-a[i-1]>=0)
//         {
//             dp[i][j]+=dp[i][j-a[i-1]];
//         }
//         dp[i][j]+=dp[i-1][j];
    
//     }
// }


    




}

int main()
{
    Boost;

    int t=1;       cin>>t;
    for(int i=1;i<=t;i++)
    {
        //cout<<"Case "<<i<<" : ";
        Boom();
    }

    return 0;

}
