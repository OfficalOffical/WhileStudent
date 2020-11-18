import numpy as np #numpy 1.19.4 does'nt work with pycharm 3.9 so i'm using 1.19.3
import matplotlib.pyplot as plt

def unitstep_func(t):
    """Unit step function"""
    return  1 * (t >= 0)

t = np.linspace(-2,2,1000)
plt.plot(t,unitstep_func(t),'-b')
plt.ylim((-2,2))
plt.title("Unit Step Function")
plt.tight_layout()
plt.show()
