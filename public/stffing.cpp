#include<bits/stdc++.h>
using namespace std;
int solve(vector<int> nums,int i){
     int count=0;
     int j=0;
     for(j=i;j<i+5;j++){
         if(nums[j]==1){
             count++;
         }
     }
     return count;
    }
int main(){
    
    vector<int> nums={1,1,1,1,1,0,0,1,1,1,0,0,1,1,1,1,1};
    vector<int> ans;
    vector<int> ind;
    for(int i=0;i<nums.size();i++){
       int res=solve(nums,i);
       if(res==5){
           for(int j=i;j<i+5;j++){
               ans.push_back(1);
              
           }
           ans.push_back(0);

           i=i+4;
           ind.push_back(i);
       }
       else{
         ans.push_back(nums[i]);
           
       }
    }
    for(auto i:ans){
        cout<<i<<" ";
    }
   
    vector<int> final;
    int z=0,j=0;
    while(z<ans.size()){
        
        if(z==ind[j]){
           
            j++;
           z++;
           final.push_back(1);
        }
        else{
            final.push_back(ans[z]);
 
        }
       
         
        z++;
        
    }
    cout<<endl;
    cout<<endl;
    final.push_back(1);
    for(auto i:final){
        cout<<i<<" ";
    }
    return 0;
}