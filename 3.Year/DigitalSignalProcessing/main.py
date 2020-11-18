import numpy as np #numpy 1.19.4 does'nt work with pycharm 3.9 so i'm using 1.19.3
import matplotlib.pyplot as plt

#Unit step function and Ramp function

def unitstep_func(t):
    """Unit step function"""
    return  1 * (t >= 0)
def ramp_func(t):
    """Ramp function"""
    return t * (t >= 0)

allFuncs = [unitstep_func,ramp_func]

plt.figure()
for i, func in enumerate(allFuncs, start=1):
    plt.subplot(2,1,i)
    t = np.linspace(-2,2,1000)
    plt.plot(t,func(t),'-b')
    plt.ylim((-2,2))
    plt.title(func.__doc__)
plt.tight_layout()
plt.show()
