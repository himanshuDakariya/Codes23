import pandas as pd

df1 = pd.read_excel("D:\\Vscoder\\DAV -Py\\att1.xlsx")
df2 = pd.read_excel("D:\\Vscoder\\DAV -Py\\att2.xlsx")


print(df1)
print(df2)

# a
both_workshops = pd.merge(df1, df2, on='Name', how='inner')
names_attended_both = both_workshops['Name'].unique()
print("Names attending both workshops:")
print(names_attended_both)

# b
either_workshop = pd.merge(df1, df2, on='Name', how='outer', indicator=True)
single_workshop = either_workshop[either_workshop['_merge'] == 'left_only'][['Name']]
print("\nNames attending a single workshop only:")
print(single_workshop['Name'].unique())

# c
merged_rowwise = pd.concat([df1, df2], ignore_index=True)
print("\nTotal number of records in the merged data frame (row-wise):", len(merged_rowwise))
print(merged_rowwise)
# d
merged_multiindex = pd.concat([df1.set_index(['Name', 'Date']), df2.set_index(['Name', 'Date'])])
print(merged_multiindex)
descriptive_statistics = merged_multiindex.describe()
print("\nDescriptive statistics for hierarchical data frame:")
print(descriptive_statistics)