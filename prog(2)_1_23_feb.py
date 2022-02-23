from numpy.linalg import norm
from numpy import array
from numpy.linalg import solve as solve_out_of_the_box

ab = array([
    [3,2,8, 5],
    [1,7,6, 6],
    [1,6,0, 7],
], dtype=float)

a = array([
    [3,2,8],
    [1,7,6],
    [1,6,0],
], dtype=float)

b = array([5, 6, 7], dtype=float)

def vector_gauss(ab):
    ab = ab.copy()
    d = len(ab)

    # прямой
    for i in range(d):
        ab[i] = ab[i] / ab[i, i]
        for j in range(i + 1, d):
            ab[j] = ab[j] - ab[i] * ab[j, i]

    # обратный
    for i in range(d - 1, 0, -1):
        for j in range(d - 1, -1, -1):
            if i - 1 != j:
                ab[i - 1, d] -= ab[j, d] * ab[i - 1, j]

    x = ab[:, -1]  # Последний столбец
    return x

solution = vector_gauss(ab)
oob_solution = solve_out_of_the_box(a, b)

print(solution)
print("Макс отклонение компоненты решения:", norm(solution - oob_solution, ord=1))
