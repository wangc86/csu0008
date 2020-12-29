import numpy as np
import matplotlib.pyplot as plt

fig = plt.figure()
ax = fig.add_subplot()
ax.set_xlabel('V_IN (V)')
ax.set_ylabel('V_OUT (V)')
ax.set_title('Transfer Function of Circuit B')

filename = "./transfer.txt"
v_in, v_out = np.loadtxt( filename, delimiter=' ', unpack=True)
ax.scatter(v_in, v_out, marker='.', color='r', s=1)

ax.set_ylim(ymin=-0.3, ymax = max(v_out)+0.1)
ax.set_xlim(xmin=-0.1, xmax = max(v_in)+0.1)

plt.show()
