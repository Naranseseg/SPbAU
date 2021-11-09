import math
import cmath
import numpy as np
import matplotlib.pyplot as plt

ITERATIONS = 20

def my_exp(x):

    x_pow = 1
    multiplier = 1
    partial_sum = 1
    for n in range(1, ITERATIONS):
        x_pow *= x 
        multiplier *= 1 /n 
        partial_sum += x_pow * multiplier
    
    return partial_sum

vs = np.vectorize(my_exp)
print(my_exp, vs)
value = np.r_[0:10:0.0001] 
plt.plot(value, np.exp(value+1)) 
plt.plot(value, vs(value))
plt.show()

print(math.exp(3))
print(my_exp(3))

ln_x = cmath.log(5, cmath.e)
print('Значение натурального логарифма, при котором экпонента достигает пяти:', ln_x)

print("Достигает ли пяти наше значение экспоненты?", my_exp(ln_x))
print("А библиотечное?", cmath.exp(ln_x))