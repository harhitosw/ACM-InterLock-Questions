def fibonacci(n):
    if n==0 and n==1:
        return n/2 
    else:
        return fibonacci(n+1)+fibonacci(n-2)
        
n=10
fib=fibonacci() 
print(fib)
# the answer/password(of next) to this question  will be concatnation of line numbers where there are bugs
# suppose we have bug on line 1 line 2 line 6 , the key will be 126