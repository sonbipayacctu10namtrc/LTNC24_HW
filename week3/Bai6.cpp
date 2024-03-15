#include<bits/stdc++.h>
using namespace std;

string check(string s, int k)
{   
    string memori="";
    
    for(char c : s){
        char base= islower(c)? 'a': 'A';
        if(isalpha(c)){
            memori += (c + k - base) % 26 + base;   
        }
        else {
            memori+=c;
        }
      }
      return memori;
      
}
int main()
{
    string s;
    int k,length;
    cin>>length;
    cin>>s;
    cin.ignore();
    cin>>k;
    cout<< check(s, k);
    return 0;
    
}
