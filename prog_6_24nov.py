def repeat(n): 
    def recurse_function(genuine_function):
        def fake_function(*args):
            result = args[0]
            for i in range(n):
                result = genuine_function(result)
            return result
        return fake_function
    return recurse_function

@repeat(2)
def plus_1(x):
    return x + 1

@repeat(0)
def mul_2(x):
    return x * 2

print(plus_1(3))  
print(mul_2(4))