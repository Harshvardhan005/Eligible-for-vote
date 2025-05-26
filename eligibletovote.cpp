#include <iostream>
using namespace std;

bool checkEligible (int age,int limit){
    if (age >= limit){
        return true;
    } 
    else{
        return false;
    }
} 
    
    int main(){
        int n;
        cout<<"Enter your age :";
        cin>>n;
        int voting_limit = 18;
        int is_eligible_to_vote = checkEligible(n,voting_limit);
        if(is_eligible_to_vote){
            cout<<"Yes you are eligible to vote"<<endl;

        }
         else {
            cout<<" Sorry, You are not eligible to vote"<<endl;

         }
         
     return 0;

    }     
