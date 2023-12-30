import pandas as pd
import numpy as np

# Set seed for reproducibility
np.random.seed(42)

# Create a DataFrame with 3 columns and 50 rows
data = np.random.randn(50, 3)
columns = ['Column1', 'Column2', 'Column3']
df = pd.DataFrame(data, columns=columns)

# Replace 10% of the values with null values
null_indices = np.random.choice(df.size, size=int(0.1 * df.size), replace=False)
df.values.flat[null_indices] = np.nan

# a. Identify and count missing values in a data frame
missing_values = df.isnull().sum().sum()
print("Missing values in the data frame:", missing_values)

# b. Drop the column having more than 5 null values
df = df.dropna(thresh=df.shape[0] - 5, axis=1)

# c. Identify the row label having the maximum sum of all values in a row and drop that row
max_sum_row_label = df.sum(axis=1).idxmax()
df = df.drop(index=max_sum_row_label)

# d. Sort the data frame on the basis of the first column
df = df.sort_values(by='Column1')

# e. Remove all duplicates from the first column
df = df.drop_duplicates(subset='Column1')

# f. Find the correlation between the first and second column and covariance between the second and third column
correlation_col1_col2 = df['Column1'].corr(df['Column2'])
covariance_col2_col3 = df['Column2'].cov(df['Column3'])
print("Correlation between Column1 and Column2:", correlation_col1_col2)
print("Covariance between Column2 and Column3:", covariance_col2_col3)

# g. Discretize the second column and create 5 bins
df['Column2_bins'] = pd.cut(df['Column2'], bins=5)

# Display the final DataFrame
print("\nFinal DataFrame:")
print(df)
