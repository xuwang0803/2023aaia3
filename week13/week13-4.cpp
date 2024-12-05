int main() {
    
    vector<int>A,B;//兩個陣列
    int a,b;//兩個數
    while(cin>>a>>b){//step1:Input
        A.push_back(a);//step2:放到陣列
        B.push_back(b);
        
    }
    sort(A.begin(),A.end());
    sort(B.begin(),B.end());
    int ans=0;
    for(int i=0;i<A.size();i++)
    {
        cout<<A[i]<<" ";   
        ans += abs(A[i]-B[i]);
    }
    cout<<"答案是:"<<ans;
}