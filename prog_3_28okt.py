import math
import numpy as np

MODEL_G = 9.81
MODEL_DT = 0.001

class Body:
    def __init__(self, x, y, vx, vy):
        
        self.x = x
        self.y = y
        self.vx = vx
        self.vy = vy
        
        self.trajectory_x = []
        self.trajectory_y = []
        

    def advance(self):

        self.trajectory_x.append(self.x)
        self.trajectory_y.append(self.y)
        
        self.x += self.vx * MODEL_DT
        self.y += self.vy * MODEL_DT
        self.vy -= MODEL_G * MODEL_DT
        
class Rocket(Body):
    def __init__(self, x, y, m, dm, ta, deg, u, vx, vy):
        
        self.deg = deg # Угол, под которым летит ракета
        self.x = x
        self.y = y
        self.m = m # Масса ракеты
        self.dm = dm
        self.vx = vx
        self.vy = vy
        self.u = u # Скорость, с которой выпускается топливо
        self.ta = ta # Время работы ракетного двигателя
        self.trajectory_x = []
        self.trajectory_y = []

    def advance(self):
        self.trajectory_x.append(self.x)
        self.trajectory_y.append(self.y)
        if t < self.ta:
            self.vx +=((i*self.u)/(self.m-i))*np.cos(self.deg)
            self.vy += ((i*self.u)/(self.m-i))*np.sin(self.deg) - MODEL_G*MODEL_DT
            self.x += self.vx*MODEL_DT
            self.y += self.vy*MODEL_DT
            self.m -= i
        else:
            self.x += self.vx * MODEL_DT
            self.y += self.vy * MODEL_DT
            self.vy -= MODEL_G*MODEL_DT
            


b = Body(0, 0, 9, 9)
r = Rocket(0, 0, 4, 1, 1, 35, 100, 3, 3)
i = r.dm/(r.ta/MODEL_DT)

bodies = [b, r]


for t in np.arange(0, 2, MODEL_DT): 
    for b in bodies: 
        b.advance() 


from matplotlib import pyplot as pp

for b in bodies:
    pp.plot(b.trajectory_x, b.trajectory_y)
