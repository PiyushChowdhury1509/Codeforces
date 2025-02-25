#include<iostream>
#include<vector>
using namespace std;
int main(){
    int a;
    cin>>a;
    vector<int>v;
    while(a!=0){
        int z = a%10;
        a = a/10;
        v.push_back(z);
          
    }
    int sum = 0;
    for(int i=0;i<v.size();i++){
        if(i%2==0){
            sum = sum - v[i]; 
        }
        else{
            sum=sum+v[i];
        }
    }
    cout<<sum;
    return 0;
}