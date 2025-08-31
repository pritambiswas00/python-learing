import time
import sys
# Increase the max number of digits allowed for conversion to string
sys.set_int_max_str_digits(10000000)  # 10,000 is enough for fib(3000)
def fibonacci(n):
    if n == 0:
        return 0
    elif n == 1:
        return 1

    a, b = 0, 1
    for _ in range(2, n + 1):
        a, b = b, a + b
    return b

n = 899999

start_time = time.time()
fib_3000 = fibonacci(n)
end_time = time.time()

print(f"The {n}th Fibonacci number is:\n{fib_3000}\n")
print(f"Time taken: {end_time - start_time:.6f} seconds")
