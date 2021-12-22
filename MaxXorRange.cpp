// MaxXorRange.cpp
//Maximum XOR value of a pair from a range

#include<iostream>
using namespace std;
int main() {
    freopen("input.txt","r",stdin);
    int l,r;
    cin>>l>>r;
    
  	
    // Find xor l and r
    int num = l^r;

    // Find the position of msb of l^r
    int pos = 0;
    while(num){
    	num = num >>1;
    	pos++;
    }

    //Print the ans
    cout<<(1<<pos)-1<<endl;

   


    return 0;
}