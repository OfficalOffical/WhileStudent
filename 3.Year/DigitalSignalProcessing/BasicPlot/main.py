import numpy as np #numpy 1.19.4 does'nt work with pycharm 3.9 so i'm using 1.19.3
import matplotlib.pyplot as plt

def rectFunc(t):
    """Rectangular Function"""
    return  4 * (abs(t-2) <=2)

def triangFunc(t):
    """Triangular Function"""
    return (1 - abs(t)) * (abs(t) < 1)

def unitstepFunc(t):
    """Unit step function"""
    return  5 * (t >= 5)
def rampFunc(t):
    """Ramp function"""
    return t * (t >= 0)

allFuncs = [unitstepFunc,rampFunc,rectFunc,triangFunc]

plt.figure()
for i, func in enumerate(allFuncs, start=1):
    plt.subplot(2,2,i)
    t = np.linspace(-2,10,1000)
    plt.plot(t,func(t),'-b')
    plt.ylim((-2,10))
    plt.title(func.__doc__)
plt.tight_layout()
plt.show()
