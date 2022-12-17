# Matrix-Vector-Benchmark/Testing

### How to run the code?

[This benchmark consists of Three main executable files]

 1. main_test.c
    * main code
    ```C
    int main(void){



    srand(time(0));

    int N = 3;
    int *M = (int *)malloc(N * N * sizeof(int));
    int *v = (int *)malloc(N * sizeof(int));
    int *b = (int *)malloc(N * sizeof(int));

    if (M == NULL | v == NULL)
    {
        printf("Malloc is failed \n");
        exit(0);
    }
    else
    {
        initMat(M, N);
        printf("M=");
        printMat(M, N);
        initVec(v, N);
        printf("v=");
        printVec(v, N);
        matVecMult(M, v, b, N);
        printf("b=");
        printVec(b, N);
    }
    }
    ```
     * compile
     ```
     make test
     ```
     * Execute
    ```
    ./main_test.out
    ```
    * Test Result (Main_test.c)
    ![Alt text](tests%20results/main_test.png)
 2. main_b_time.c
    * Compile
    ```
    make time
    ```
    * Execute
     ```
     ./main_b_time.out
     ```
   * Test Result(Main_b_time.c)
    ![Alt text](tests%20results/Benchmark%20by%20time.png)
3. main_b_space.c
    * Compile
    ```
    make space
    ```
    * Execute
    ```
    ./main_b_space.out
    ```
    * Test Results(main_b_space.c)
     ![Alt text](tests%20results/benchmark-memory-usage.png)
     ![Alt text](tests%20results/N(10k)%20space%20usage.png)
     


### Plot Figures
1. Memory usage
    ![Alt text](tests%20results/plot(memory-usage).png)

2. Time Complexity (Plot)
     ![Alt text](tests%20results/Plot(time).png)


# Outcome Validation
[a directory that contains executable files of matrix-vector multiplication where the result can be validated using python3 and C]
   #### How to run?
main.c 
   * Compile
    
```
make
```
   * Execute the file in python
      1. In Linux (python3-version), run  ```python3 main.py```
      2. In linux (python-other versions), run ```python main.py```
      3. In windows (python) run ```by cliking 'the run python file' button```
      

      
  
  
