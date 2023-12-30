import numpy as np

# a. Create a 2D array with random values and compute mean, std, and variance along the second axis
ARR1 = np.random.rand(3, 4)  # Adjust the shape as needed
mean_arr1 = np.mean(ARR1, axis=1)
std_arr1 = np.std(ARR1, axis=1)
var_arr1 = np.var(ARR1, axis=1)
print(ARR1)
print(mean_arr1)
print(std_arr1)
print(var_arr1)


# b. Create a 2D array of size m x n, print shape, type, and data type, then reshape it based on user inputs
m = int(input("Enter the number of rows (m): "))
n = int(input("Enter the number of columns (n): "))
array2D = np.random.randint(0, 10, size=(m, n))
print("\nOriginal Array:")
print(array2D)
print("Shape:", array2D.shape)
print("Type:", type(array2D))
print("Data Type:", array2D.dtype)
new_shape = (n, m)
reshaped_array = array2D.reshape(new_shape)
print("\nReshaped Array:")
print(reshaped_array)

# c. Test whether elements of a given 1D array are zero, non-zero, and NaN, and record indices
arr = np.array([0, 2, 3, 0, np.nan, 5, 0, 7])
zero_indices = np.where(arr == 0)[0]
non_zero_indices = np.where(arr != 0)[0]
nan_indices = np.where(np.isnan(arr))[0]
print("\nZero indices:", zero_indices)
print("Non-zero indices:", non_zero_indices)
print("NaN indices:", nan_indices)

# d. Create three random arrays, perform operations, and find covariance and correlation
Array1 = np.random.rand(5)
Array2 = np.random.rand(5)
Array3 = np.random.rand(5)
Array4 = Array3 - Array2
Array5 = 2 * Array1
covariance = np.cov(Array1, Array4)[0, 1]
correlation = np.corrcoef(Array1, Array5)[0, 1]
print("\nArray4 (Array3 - Array2):", Array4)
print("Array5 (2 * Array1):", Array5)
print("Covariance between Array1 and Array4:", covariance)
print("Correlation between Array1 and Array5:", correlation)

# e. Create two random arrays and find sum of the first half and product of the second half
Array1 = np.random.rand(10)
Array2 = np.random.rand(10)
sum_first_half = np.sum(Array1[:5])
product_second_half = np.prod(Array2[5:])
print("\nSum of the first half of Array1:", sum_first_half)
print("Product of the second half of Array2:", product_second_half)

# f. Create an array with random values and determine the memory size
random_array = np.random.rand(4, 5)
memory_size = random_array.nbytes
print("\nRandom Array:")
print(random_array)
print("Memory Size of the Array:", memory_size, "bytes")

# g. Create a 2D array of size m x n having integer elements in the range (10,100)
array_g = np.random.randint(10, 100, size=(m, n))

# Write statements to swap any two rows, reverse a specified column and store updated array in another variable
array_g_swapped_rows = np.copy(array_g)
array_g_swapped_rows[[0, 2]] = array_g_swapped_rows[[2, 0]]

specified_column_index = 1  # You can change this to the column you want to reverse
array_g_reversed_column = np.copy(array_g)
array_g_reversed_column[:, specified_column_index] = array_g_reversed_column[::-1, specified_column_index]

print("\nOriginal Array (g):")
print(array_g)
print("\nArray after swapping rows:")
print(array_g_swapped_rows)
print("\nArray after reversing specified column:")
print(array_g_reversed_column)
