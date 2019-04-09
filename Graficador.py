    
import os
import numpy as np
import matplotlib.pyplot as plt

os.system("g++ Montecarlo.cpp -o Montecarlo.x")
os.system("./Montecarlo.x > datos.dat")

data = np.loadtxt("datos.dat")

print(data[:,0], data[:,1])
