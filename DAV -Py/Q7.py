import pandas as pd

data = {
    'FamilyName': ['Shah', 'Vats', 'Vats', 'Kumar', 'Vats', 'Kumar', 'Shah', 'Shah', 'Kumar', 'Vats'],
    'Gender': ['Male', 'Male', 'Female', 'Female', 'Female', 'Male', 'Male', 'Female', 'Female', 'Male'],
    'MonthlyIncome': [44000.00, 65000.00, 43150.00, 66500.00, 255000.00, 103000.00, 55000.00, 112400.00, 81030.00, 71900.00]
}


df = pd.DataFrame(data)
print(df)



# a
familywise_gross_income = df.groupby('FamilyName')['MonthlyIncome'].sum()
print("Familywise Gross Monthly Income:\n", familywise_gross_income)

# b
highest_income = df.groupby('FamilyName')['MonthlyIncome'].max()
lowest_income = df.groupby('FamilyName')['MonthlyIncome'].min()
print("\n Highest Monthly Income:\n", highest_income)
print("\n Lowest Monthly Income:\n", lowest_income)

# c
income_less_than_80000 = df[df['MonthlyIncome'] < 80000.00]
print("\n Monthly Income of Members Earning Less than Rs. 80000.00:\n", income_less_than_80000[['FamilyName', 'MonthlyIncome']])

# d
female_info = df[df['Gender'] == 'Female']
total_females = female_info.shape[0]
average_female_income = female_info['MonthlyIncome'].mean()
print("\n Total Number of Females: {}, Average Monthly Income: Rs. {:.2f}".format(total_females, average_female_income))

# e
average_income_all_members = df['MonthlyIncome'].mean()
df = df[df['MonthlyIncome'] >= average_income_all_members]
print("\n DataFrame after deleting rows with Monthly income less than the average income of all members:\n", df)




