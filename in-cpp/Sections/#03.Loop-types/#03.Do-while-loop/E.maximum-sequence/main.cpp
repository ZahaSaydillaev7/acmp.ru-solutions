#include <iostream>
using namespace std;

int main(){
    int x, sum=0;
    do{
        cin >>x;
        if(x>sum)sum = x;
    }while(x != 0);
    cout <<sum;
    return 0;
}
