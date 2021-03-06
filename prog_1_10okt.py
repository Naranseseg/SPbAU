import math #тут мы достаем библиотеку math, она помогает использовать математические функции
import numpy #достаем библиотеку numpy, помогающая работать с большими массивами
import matplotlib.pyplot as mpp #matplotlib помогает строить графики, и ее мы переименовываем как mpp, для сокращения

if __name__=='__main__': #помогает сохранить эту часть кода, если бы он находился внутри другой программы
    arguments = numpy.arange(0, 20, 0.1) #делаем массив, с данными от 0 до 20 с шагом 0,1. arrange работает с числами с плавающей точкой
    mpp.plot( #mpp.plot открывает график 
        arguments, #начинаем "рассматривать" массив аrguments
        [math.cos(20*a-40) * math.cos(a/30.0) for a in arguments] #задаем для какого-то а функцию, график которой и будем строить. Делаем math. чтобы обратиться к библиотеке math, в которой есть функция косинуса. Смотрим значение функции для каждого а из массива arguments.
    ) #закрываем график
    mpp.show() #mpp.show показывает график