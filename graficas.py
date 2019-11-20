import numpy as np
import matplotlib.pyplot as plt

plt.figure( figsize=(16,5) )
data = np.loadtxt('data.dat')
data1 = np.loadtxt('data1.dat')

plt.subplot(1,2,1)
plt.title('Método de Euler')
plt.plot(data1[:,0],data1[:,1],label='velocidad')
plt.plot(data1[:,0],data1[:,2],label='distancia')
plt.xlabel('t')
plt.legend()
plt.subplot(1,2,2)
plt.title('Método Runge-Kutta')
plt.plot(data[:,0],data[:,1],label='velocidad')
plt.plot(data[:,0],data[:,2],label='distancia')
plt.xlabel('t')
plt.legend()
plt.savefig('grafico.png')