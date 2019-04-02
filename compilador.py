import os
import numpy as np
import matplotlib.pyplot as plt

os.system("g++ caminador.cpp -o caminador.x")
os.system("./caminador.x > datos.dat")

data = np.loadtxt("datos.dat")

plt.figure()
plt.plot(data[:,0], data[:,1])
plt.savefig("caminada.png")
