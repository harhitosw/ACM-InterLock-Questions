#include<bits/stdc++.h>
using namespace std;
int funfunfun(int i){
	return i|=1;
}

int funfun(int i)
{
   return i&1 ? funfunfun(i) :funfun(funfun(i - 1));
}

void fun(){
   cout<<funfun(1000);
}
int main(){
fun();
return 0;
}
// answer / password will be content printed by program