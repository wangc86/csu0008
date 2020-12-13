import numpy as np
import matplotlib.pyplot as plt
import matplotlib.ticker as ticker

fig = plt.figure()
ax = fig.add_subplot()
ax.set_xlabel('Voltage (V)')
ax.set_ylabel('Current (mA)')
ax.set_title('I-V Characteristic of LEDs')

filename = "./red"
v, i = np.loadtxt( filename+".txt", delimiter=' ', unpack=True)
#ax.plot(V_sorted, current_sorted, marker='x')
ax.scatter(np.sort(v), np.sort(i), marker='x', color='r', s=1, label="Red LED")

filename = "./yellow"
v, i = np.loadtxt( filename+".txt", delimiter=' ', unpack=True)
#ax.plot(V_sorted, current_sorted, marker='x')
ax.scatter(np.sort(v), np.sort(i), marker='x', color='y', s=1, label="Yellow LED")

ax.set_ylim(ymin=-0.3, ymax = max(i)+0.1)
ax.set_xlim(xmin=-0.1, xmax = max(v)+0.1)
ax.legend(loc="upper left")

plt.show()