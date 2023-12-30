import pandas as pd
import seaborn as sns
import matplotlib.pyplot as plt



# Load the Titanic dataset
url = "https://web.stanford.edu/class/archive/cs/cs109/cs109.1166/stuff/titanic.csv"
titanic_data = pd.read_csv(url)
titanic_data.head()



# a. Clean the data by dropping the column with the largest number of missing values
print(titanic_data.shape)
titanic_data_cleaned = titanic_data.dropna(axis=1, thresh=len(titanic_data) * 0.9)
titanic_data_cleaned.shape



# b. Find total number of passengers with age more than 30
passengers_over_30 = titanic_data_cleaned[titanic_data_cleaned['Age'] > 30]
total_passengers_over_30 = len(passengers_over_30)
total_passengers_over_30



# c. Find total fare paid by passengers of the second class
total_fare_second_class = titanic_data_cleaned[titanic_data_cleaned['Pclass'] == 2]['Fare'].sum()
total_fare_second_class



# d. Compare the number of survivors of each passenger class
survivors_by_class = titanic_data_cleaned.groupby('Pclass')['Survived'].sum()
survivors_by_class


# e. Compute descriptive statistics for the age attribute gender-wise
descriptive_stats_age_gender = titanic_data_cleaned.groupby('Sex')['Age'].describe()
descriptive_stats_age_gender


# f. Draw a scatter plot for passenger fare paid by Female and Male passengers separately
sns.scatterplot(data=titanic_data_cleaned, x='Fare', y='Sex', hue='Sex')
plt.title('Scatter Plot of Fare Paid by Gender')
plt.show()



# g. Compare density distribution for features age and passenger fare
sns.histplot(data=titanic_data_cleaned, x='Age', kde=True, label='Age')
sns.histplot(data=titanic_data_cleaned, x='Fare', kde=True, label='Fare')
plt.title('Density Distribution of Age and Fare')
plt.legend()
plt.show()




# i. Find % of survived passengers for each class
survival_percent_by_class = titanic_data_cleaned.groupby('Pclass')['Survived'].mean() * 100
print(survival_percent_by_class)



# Answer the question “Did class play a role in survival?”
# Class 1 has the highest survival percentage, suggesting that class may have played a role in survival.