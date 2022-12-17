from subprocess import *
import numpy as np
import random
import subprocess
import numpy

M = np.random.randint(13, size=(2, 2))
v = np.random.randint(13,size=(2,1))

MV=numpy.append(M,v)
mvc=MV.flatten()

print("from python:")
print(f"v =\n {v}\n M= \n{M}\n")
print(f"MV={MV}\n")

def correct_function(M,v):
    return np.dot(M,v)

list_input_to_c = ["./main.out"]

for matrix_vector_value in mvc:
    list_input_to_c.append(str(matrix_vector_value))

subprocess.call(list_input_to_c)
process = subprocess.run(list_input_to_c,universal_newlines=True, stdout=subprocess.PIPE, stderr=subprocess.PIPE)



mvp = correct_function(M,v)
print(f"\nFROM PYTHON: \n{mvp}")


if np.all(mvp)==np.all(matrix_vector_value):
   print("Output Validation Succeeded")
else:
   print("validation failed")



