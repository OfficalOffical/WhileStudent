import matplotlib.pyplot as plt
import numpy as np



A = 150
w = 50*2*np.pi
phi = 40


t = np.linspace(-0.05, 0.05, 1000)
plt.plot(t,A*np.sin(w*t+phi));
plt.xlabel('t');
plt.xlim([-0.05,0.05]);
plt.legend(['sin(x)'])
plt.title(r"Plot of continious Time signal (Sinus) $x(t)=150\sin(2\pi 40 t)$");
plt.show()
