import pandas
import random
import matplotlib
import numpy
import matplotlib.pyplot as plt
from scipy import stats


ntries = 59
experiments = [387.8, 388.6, 387.9, 387.5, 387.9, 388.4, 388.1, 388.7, 388.5, 387.2, 389.2, 386.7, 387.6, 388.1, 387.7,
               387.8, 387.3, 388.7, 387.8, 387.4, 387.5, 387.2, 387.9, 387.6, 388.4, 387.9, 388, 386.7, 387.9, 387,
               388.6, 386.4, 387.8, 387.4, 388.1, 390.6, 387.8, 387.8, 388.6, 388, 388.5, 386.6, 388.5, 387.6, 387.5,
               387.3, 387, 388.6, 387.8, 388.5, 387.3, 388.3, 387.5, 387.5, 388.2, 389.2, 387.8, 387.6, 388.4
               ]
plt.plot(list(range(ntries)), experiments)
plt.title('Experimental data')
plt.show()

df = pandas.DataFrame(data={
    'experiments': experiments
})

df.to_csv("experiments.csv")


df1 = pandas.read_csv("experiments.csv")


df1['experiments'].plot(kind='bar')


print(df1.experiments.describe())


df12 = pandas.DataFrame(data={
    'df1': df1['experiments'],
})

df12.plot.kde()

d1 = df12['df1']

print(stats.kstest('norm', 'norm', N=500))
print(stats.kstest(d1, 'norm', (d1.mean(), d1.std()), N=len(d1)))
#statistic = 0,107 (маленькое значение) pvalue=0.473 (большое значение), следовательно распределение нормальное