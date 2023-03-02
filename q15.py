def my_func(n):
    if n == 0:
        return 0
    elif n == 1:
        return 1
    else:
        return my_func(n-1) + my_func(n-2)

print(my_func(6)) # answer/password will be content printed by program