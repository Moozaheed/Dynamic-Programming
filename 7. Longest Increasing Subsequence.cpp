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
#define maxx 100005
#define EPS 1e-9
using namespace std;
const double PI = acos(-1);
ll int hp = 1e9+7;

// Problem: You are given an array. Find the length of LIS

// We Define ;
// Lis (i) = Length of longest increasing subsequence ending at 'i th' element
// Therefore, Lis (i) depends on Lis (k), where O < k < i -1
// if a[i]>a[k].
// Then, Lis (i ) = max ( Lis (i), 1+ Lis (k)) (O < k < i -l )



// Approach : (Using Tabulation)
// ( 1 ) Make a dp array and initialize all the dp( i ) by l.
// {Since single element is also an Lis}
// ( 2 ) For every i from left to right, iterate from j = O to j = i-1

// Checking
// if(a[i]>a[j])
// dp[i] = max( dp[i], 1+ dp[j])
// ( 3 ) After loop ends, Output [ dp (n-1) ]


int dp[maxx];
int lis(int arr[],int n)
{
    if(dp[n]!=-1)return dp[n];
    dp[n]=1;
    for(int i=0;i<n;i++)
    {
        if(arr[n]>arr[i])dp[n]=max(dp[n],1+lis(arr,i));
    }

    return dp[n];
}


void Boom()
{
    //Let's Move

    int n;
    cin>>n;
    int arr[n];

    for(int i=0;i<n;i++)cin>>arr[i];

    cout<<lis(arr,n-1);


    




}

int main()
{
    Boost;
    
    for(int i=0;i<maxx;i++)dp[i]=-1;

    int t=1;       //cin>>t;
    for(int i=1;i<=t;i++)
    {
        //cout<<"Case "<<i<<" : ";
        Boom();
    }

    return 0;

}
