#include <iostream>
using namespace std;
int main(){
    int x, cnt = 0;
    do{
        cin >>x;
        cnt++;
    }while(x != 0);
    cout <<cnt-1;
    return 0;
}
