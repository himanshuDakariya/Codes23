import pandas as pd

# a. Create a series with 5 elements. Display the series sorted on index and also sorted on values separately
series_a = pd.Series([5, 2, 8, 1, 3], index=['d', 'b', 'e', 'a', 'c'])
sorted_by_index = series_a.sort_index()
sorted_by_values = series_a.sort_values()

print("Series (a):")
print(series_a)
print("\nSorted by Index:")
print(sorted_by_index)
print("\nSorted by Values:")
print(sorted_by_values)

# b. Create a series with N elements with some duplicate values. Find the minimum and maximum ranks assigned to the values using ‘first’ and ‘max’ methods
series_b = pd.Series([3, 1, 2, 3, 4, 1, 5])
min_ranks_first = series_b.rank(method='first', ascending=True)
max_ranks = series_b.rank(method='max', ascending=True)

print("\nSeries (b):")
print(series_b)
print("\nMinimum Ranks (using 'first' method):")
print(min_ranks_first)
print("\nMaximum Ranks (using 'max' method):")
print(max_ranks)

# c. Display the index value of the minimum and maximum element of a Series
min_index = series_b.idxmin()
max_index = series_b.idxmax()

print("\nIndex of Minimum Element:", min_index)
print("Index of Maximum Element:", max_index)
