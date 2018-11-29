import matplotlib.pyplot as plt
import matplotlib.image as mpimg
import numpy as np
import sys

<<<<<<< HEAD
for i in rangei(1,len(sys.argv)):
=======
##Programa para graficar
for i in range(1,len(sys.argv)):
>>>>>>> 948965d4a43fcfaeb73c177ffbc8ace7cc0d7fca
    file=sys.argv[i]
    plt.clf()
    data_img=np.loadtxt(file)
    plt.imshow(data_img)
    plt.colorbar()
    plt.savefig(file+'.png')
