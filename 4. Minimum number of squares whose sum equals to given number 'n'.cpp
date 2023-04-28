///....Look up table:


// Example:
//     x= 26 =pow(4,2)+pow(3,2)+pow(1,2) --3 num
//           =pow(5,2)+pow(1,2) -- 2num

//           Minimum number of numbers required = 2


int dp[maxx];
int  minsqrt(int n)
{
    if(n<=3)return n;

    if(dp[n]!=hp)return dp[n];
    int ans=hp;
    for(int i=1;i*i<=n;i++)
    {
        dp[n]=min(dp[n],1+minsqrt(n-i*i));
    }
    return dp[n];
}


int main()
{
    int n;
    cin>>n;
    for(int i=0;i<maxx;i++)dp[i]=hp;

    cout<<minsqrt(n);

}



//2nd Way Bottom Up:


int main()
{
    int n;
    cin>>n;
    vector<int>dp(n+1,hp);

    dp[0]=0;
    dp[1]=1;
    dp[2]=2;
    dp[3]=3;

    for(int i=1;i*i<=n;i++)
    {
        for(int j=0;i*i+j<=n;j++)
        {
            dp[i*i+j]=min(dp[i*i+j],1+dp[j]);
        }
    }

    cout<<dp[n];
}