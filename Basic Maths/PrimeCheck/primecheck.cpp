
#include<iostream>
#include<vector>
using namespace std;

void printDivisors(int n){
    vector<int> ls;
    int cn = 0;
    for(int i =1 ; i*i <=(n) ; i++){
        if(n%i == 0){
            cn ++ ;
            ls.push_back(i);
            if((n/i) != i){
                ls.push_back(n/i);
                cn ++ ;
            }
        }
    }
    //sort(ls.begin() , ls.end());
    if( cn == 2){cout<<" Prime";}
    else{ cout<< "Composite";}
   // for(auto it: ls){cout << it <<" ";}
}

int main()
{
    int n;
    cin>> n;
    printDivisors(n);
}