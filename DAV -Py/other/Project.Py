import pandas as pd
data=pd.read_csv('D:\Vscoder\DAV -Py\dataset.csv')

print("First 5 Rows of the data are:")

print(data.head())

print("Dataframe information--")

print(data.info())
print("-----------------------------------------------------------------------------------------")

print(data.describe())
print("------------------------------------------------------------------------------------------")

missval=data.isnull().sum()

print("Missing Values")
print(missval)

print("------------------------------------------------------------------")


uniqval=data['User'].unique()
print("Unique values")
print(uniqval)

print("----------------------------")

print("Number of unique users")
c=0
for x in uniqval:
    c+=1;

print(c)

print("----------------------------")

valc=data['User'].value_counts()
print("Number of Users")
print(valc)



