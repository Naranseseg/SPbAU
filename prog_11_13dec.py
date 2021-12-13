def GCD(a, b):
    multiplier = 1
    num_1,num_2 = a,b
    while num_1 != 0 and num_2 != 0:
        if num_1 > num_2:
            num_1 = num_1 % num_2
        else:
            num_2 = num_2 % num_1
    num_3,num_4 = a/max(num_1,num_2), b/max(num_1,num_2)
    quotient = max(num_3,num_4)
    if num_3>num_4:
        while (num_3-1)%num_4!=0:
            num_3 += num_3 + quotient
            multiplier += 1
    else:
        while (num_4-1)%num_3!=0:
            num_4 += quotient
            multiplier += 1
    coefficient_1, coefficient_2 = multiplier, -int((multiplier*quotient-1)/min(num_3,num_4))
    return coefficient_1,coefficient_2,max(num_1,num_2)
print(GCD(49, 42))
