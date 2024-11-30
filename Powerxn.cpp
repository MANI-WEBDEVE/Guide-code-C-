#include <iostream>
#include <vector>

int power(int x, int n){
    if(n==0) return 1.0;
    if(x==0) return 0.0;
    if(x==1) return 1.0;
    if(x==-1 && n%2==0) return 1.0;
    if(x==-1 && n%2==1) return -1.0;

    int binaryFrom = n;
    if(n<0){
        x = 1/x;
        binaryFrom = -binaryFrom;
    }

    int ans =1;

    while(binaryFrom > 0){
       if(binaryFrom%2 ==1){
        ans *= x;
       }
       x*=x;
       binaryFrom/=2;
    }
    return ans;

}


int main() {
    int x = 2;
    int n = 10;
    std::cout << power(x,n) << std::endl;
    return 0;
}