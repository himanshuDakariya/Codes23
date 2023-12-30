import pandas as pd
import seaborn as sns
import matplotlib.pyplot as plt
from sklearn.datasets import load_iris
from scipy import stats



print("---------------------------------------")
# a
iris = load_iris()
iris_df = pd.DataFrame(data=iris.data, columns=iris.feature_names)
iris_df['target'] = iris.target
print(iris_df.info())
print("-----------------Output-----------------")


print("---------------------------------------")
# b
print("Number of missing values in each column:")
print(iris_df.isnull().sum())
print("-----------------Output-----------------")


print("---------------------------------------")
# c
sns.countplot(x='target', data=iris_df)
plt.title('Class Label Frequencies')
plt.xlabel('Class Label')
plt.ylabel('Frequency')
plt.show()
print("-----------------Output-----------------")




print("---------------------------------------")
# d
sns.regplot(x='sepal length (cm)', y='petal length (cm)', data=iris_df)
plt.title('Scatter plot: Petal Length vs Sepal Length')
plt.xlabel('Sepal Length (cm)')
plt.ylabel('Petal Length (cm)')
plt.show()
print("-----------------Output-----------------")




print("---------------------------------------")
# e
sns.kdeplot(iris_df['petal width (cm)'], shade=True)
plt.title('Density Distribution of Petal Width')
plt.xlabel('Petal Width (cm)')
plt.ylabel('Density')
plt.show()
print("-----------------Output-----------------")




print("---------------------------------------")
# f
sns.pairplot(iris_df, hue='target')
plt.title('Pairwise Bivariate Distribution in Iris Dataset')
plt.show()
print("-----------------Output-----------------")




print("---------------------------------------")
# g
numeric_attributes = iris_df.drop('target', axis=1)
sns.heatmap(numeric_attributes.corr(), annot=True, cmap='coolwarm', fmt=".2f")
plt.title('Heatmap of Correlation Matrix')
plt.show()
print("-----------------Output-----------------")






print("---------------------------------------")
# h
numeric_stats = pd.DataFrame()

numeric_stats['Mean'] = numeric_attributes.mean()
numeric_stats['Mode'] = numeric_attributes.mode().iloc[0]
numeric_stats['Median'] = numeric_attributes.median()
numeric_stats['Standard Deviation'] = numeric_attributes.std()

confidence_intervals = numeric_attributes.apply(lambda x: stats.t.interval(0.95, len(x)-1, loc=x.mean(), scale=stats.sem(x)))
numeric_stats['Confidence Interval Lower (95%)'] = confidence_intervals.apply(lambda x: x[0])
numeric_stats['Confidence Interval Upper (95%)'] = confidence_intervals.apply(lambda x: x[1])

numeric_stats['Standard Error'] = numeric_attributes.apply(stats.sem)

print(numeric_stats)
print("-----------------Output-----------------")






print("---------------------------------------")
# i
correlation_matrix = numeric_attributes.corr()
sns.heatmap(correlation_matrix, annot=True, cmap='coolwarm', fmt=".2f")
plt.title('Correlation Coefficients Heatmap')
plt.show()
print("-----------------Output-----------------")



