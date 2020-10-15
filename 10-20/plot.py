# import the necessary modules
import numpy as np
import matplotlib.pyplot as plt

# read the input file
samples = np.loadtxt('./samples.txt')

# create lists for x and y value
x = samples[:, 0]
y = samples[:, 1]
# the above two lines can be merged into one single statement:
#x, y = samples[:, 0], samples[:, 1]

# initialize a figure
fig1, ax1 = plt.subplots()

# plot the data
ax1.plot(x, y, 'bo-')

# set the labels
ax1.set_xlabel('Branch Voltage (V)')
ax1.set_ylabel('Branch Current (A)')
ax1.set_title('I-V Characteristic of a Nonlinear Electronic Element \n (Student ID: __)')

# make the figure tight
plt.tight_layout()

# show the resulting figure
plt.show()

# alternatively, you may save the figure using the following statement:
#plt.savefig('./result.pdf',
#            format='pdf', dpi=1000, bbox_inches='tight')
