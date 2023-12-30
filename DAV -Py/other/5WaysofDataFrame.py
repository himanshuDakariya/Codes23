# 1
import pandas as pd

print("Creating DataFrame from List:")
data = [1,2,3,4,5]
df=pd.DataFrame(data, columns=['Data'])
print(df)


#2
print("Creating DataFrame from dictionary:")
data= {'Pid':[1,2,3],'Pname':["Potato","Tomato","Onion"]}
df=pd.DataFrame(data)
print(df)


#3
print("Creating DataFrame from list of list:") 
data = [['Mickey',10],['Mouse',20],['Sinchan',30]]
df= pd.DataFrame(data)
print(df)


#4
print("Creating DataFrame from list of dictionary:")
data = [{'a':1,'b':2,'c':3},{'a':10,'b':20,'c':30}]
df=pd.DataFrame(data)
print(df)

#5
print("Creating DataFrame from Series:")
import pandas as pd
d=pd.Series([1,2,3,4,5])
df=pd.DataFrame(d)
print(df)

#6
print("Creating DataFrame from random number generation:")
import pandas as pd
import numpy as np

data= np.random.randint(1,100,size=(3,3))

df=pd.DataFrame(data)
print(df)
