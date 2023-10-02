const char* dgemv_desc = "Vectorized implementation of matrix-vector multiply.";

/*
 * This routine performs a dgemv operation
 * Y :=  A * X + Y
 * where A is n-by-n matrix stored in row-major format, and X and Y are n by 1 vectors.
 * On exit, A and X maintain their input values.
 */
void my_dgemv(int n, double* A, double* x, double* y) {
   // insert your code here: implementation of vectorized vector-matrix multiply
   for(int i = 0; i < n; i++) { // Loop over each row of A
        double sum = 0.0;
        for(int j = 0; j < n; j++) { // Loop over each element in the row of A and each element of x
            sum += A[i * n + j] * x[j]; // Multiply each element of the row of A by the corresponding element of x and accumulate the result in sum
        }
        y[i] += sum; // Update the i-th element of y with the sum
    }
}
