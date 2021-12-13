def gcd(a,b):
    num_1,num_2 = a,b
    while num_1 != 0 and num_2 != 0:
        if num_1>num_2:
            num_1 = num_1 % num_2
        else:
            num_2 = num_2 % num_1
    return max(num_1,num_2)
print(gcd(1,24))
print(gcd(3,21))
