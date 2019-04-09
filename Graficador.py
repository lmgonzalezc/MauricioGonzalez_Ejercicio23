    
import os
import numpy as np
import matplotlib.pyplot as plt

os.system("g++ Suma.cpp -o Suma.x")
os.system("./Suma.x > datos.dat")

data = np.loadtxt("datos.dat")

print(data)
