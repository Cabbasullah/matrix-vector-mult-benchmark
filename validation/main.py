from subprocess import *
import numpy as np
import random
import subprocess
import numpy

M = np.random.randint(13, size=(2, 2))
v = np.random.randint(13,size=(2,1))

MV=numpy.append(M,v)
vv=MV.flatten()

print("from python:")
print(f"v =\n {v}\n M= \n{M}\n")
print(f"MV={MV}\n")

def correct_function(M,v):
    return np.dot(M,v)

list_input_to_c = ["./main.out"]

for vector_value in vv:
    list_input_to_c.append(str(vector_value))

subprocess.call(list_input_to_c)
process = subprocess.run(list_input_to_c,universal_newlines=True, stdout=subprocess.PIPE, stderr=subprocess.PIPE)

#print(f"FROM C {process.stdout}")

bm = correct_function(M,v)
print(f"\nFROM PYTHON \n{bm}")





