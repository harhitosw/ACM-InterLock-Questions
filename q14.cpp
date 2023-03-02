#include<bits/stdc++.h>
using namespace std;
void fun(int n)
{
    if (n > 0) {
        fun(n - 1);
        cout << n << " ";
        fun(n - 1);
    }
}
int main(){
fun(4);
return 0;
}
// output will be the sum of output that will be printed while runtime