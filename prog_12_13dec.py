from math import sqrt

def primity(number):
    divisor = []
    if number % 2!=0 or number==2:
        limit = int(sqrt(number)/2) - 1
        for i in range (limit+1):
            if divisor == [] and number % (3+2*i) == 0:
                divisor.append(i)
        if limit==0 and number % 3 ==0:
            divisor.append(3)
    else:
        divisor.append(2)
    return divisor == []
print(primity(21))
print(primity(2756481))
print(primity(31))
