# import pandas as pd
# left = pd.DataFrame({
#    'id':[1,2,3,4,5],
#    'Name': ['Alex', 'Amy', 'Allen', 'Alice', 'Ayoung'],
#    'subject_id':['sub1','sub2','sub4','sub6','sub5']})
# right = pd.DataFrame({
#    'id':[1,2,3,4,5],
#    'Name': ['Billy', 'Brian', 'Bran', 'Bryce', 'Betty'],
#    'subject_id':['sub2','sub4','sub3','sub6','sub5']})
# print(pd.merge(left, right, on='subject_id', how='inner'))



# import pandas as pd
# ages = [20, 22, 25, 27, 21, 23, 37, 31, 61, 45, 41, 32]
# bins = [18, 25, 35, 60, 100]
# cats = pd.cut(ages, bins)
# print(cats)
# pd.Series(cats).value_counts()



# import numpy as np
# import pandas as pd
# data = pd.DataFrame([[1., 6.5, 3.], [1., np.NaN, np.NaN],
# [np.NaN, np.NaN, np.NaN], [np.NaN, 6.5, 3.]])
# print(data)
# print(data.dropna(how='all'))
# print(data.dropna(axis=1, how='all'))
# print(data.dropna(thresh=2))

# #----------------------------------
# # Numpyyyyyyyyyyyyyyyyyyyyy

# import numpy as np

# a=[1,2,3,4,5]
# x=np.array(a)

# print(x)




# n=int(input("Enter size:"))

# a=[]
# for i in range(n):
#     value=int(input("Enter item--"))
#     a.append(value)
# x=np.array(a)

# print(x)




# a=np.array([1,2,3,4,5],int)
# print(a)


# 2D array

# a=[[1,2,3],[4,5,6],[7,8,9]]
# x=np.array(a)
# print(x)
# print(x[0][0])


# a=np.zeros(5)
# b=np.zeros((4,4))

# print(a)
# print(b)


# a=np.arange(5,10)
# print(a)
# b=np.arange(15).reshape(3,5)
# print(b)


# print(a.size) #5
# print(b.size) #15
# print(a.shape) #(5,)
# print(b.shape) #(3,5)
# print(a.ndim) #1
# print(b.ndim) #2
# print("----------------------")

# A=np.array([[1,2,3],[4,5,6]])
# print(A)

# A=A.reshape(3,2)
# print(A)


# ---------------------------


# a=np.array([[1,2,3],[4,5,6],[7,8,9]])
# print(a[0])
# print("------")
# print(a[1])
# print("------")
# print(a[2])
# print("------")

# print(a[0][0])
# print(a[-1][-1])

# b=np.array([[1,2,3,4],[5,6,7,8],[9,10,11,12],[13,14,15,16]])
# print(b)
# print(b[0:2,0:2])


# #-----------------------------------------------------


# # #  P  A  N  D  A  S 

# import pandas as pd
# import numpy as np

# # a=[1,2,3,4,5]

# # x=pd.Series(a)
# # print(x)

# # x=pd.Series(np.arange(0,10,2))
# # print(x)


# # #-----------------------------


# dict={'A':1,'B':2,'C':3,'D':4}

# x=pd.Series(dict)
# print(x)
# print(x.index)
# print(x.values)

# # -----------------------------

# a=[1,2,3,4,5,6,7,8]
# x=pd.Series(a)
# print(x)
# print(x[:2])
# print(x[1:2])
# print(x[:5])

# # --------------------------------

# #  D A T A F R A M E

# import pandas as pd
# dict={'A':[1,2,3,4],
#                  'B':[2,3,4,5],
#                  'C':[3,4,5,6],
#                  'D':[4,5,6,7]}
# df=pd.DataFrame(dict)

# print(df)

# --------------------------------------
# import pandas as pd

# data={'Students':['Bittu','Anshu','Raju'],
#        'Class':['XII','X','VI'],
#         'ROLL No.':[102,103,104]}

# df=pd.DataFrame(data)
# print(df)


# --------------------------------------
# import pandas as pd 
# data = {
#     'Students': {'Name': 'Himanshu', 'Age': 19, 'Cont.': 952},
#     'Teachers': {'Name': 'Raju', 'Age': 59, 'Cont.': 652},
#     'HOD': {'Name': 'Kaju', 'Age': 59, 'Cont.': 992}
# }

# x=pd.DataFrame(data)
# print(x)

# ------------------------------------------


# import pandas as pd

# data={'Population':{'Delhi':45000,'Mumbai':4500,'Chennai':8000},
#       'Hospital':{'Delhi':75000,'Mumbai':3500,'Chennai':8500},
#       'Schools':{'Delhi':43000,'Mumbai':2500,'Chennai':4000}}
# xyz=pd.DataFrame(data)
# # print(xyz)

# # print(xyz.Population) 
# # print(xyz['Population']) 

# # print(xyz[['Population','Hospital']]) 


# print(xyz.loc[:])
# # print(xyz.loc['Delhi':'Chennai','Population':'Hospital'])
# print(xyz.iloc[0:2,0:2])


# -------------------------------------------------


#  M E R G I N G   O F   D A T A F R A M E


# import pandas as pd

# data1={'id':[101,102,103,104,105],
#     'name':['anshu','raju','kaju','dadu','saju'],
#        'class':[5,6,7,8,9]}
# data2={'id':[101,102,201,202,204],
#     'name':['anshu','raju','billu','sonu','monu'],
#        'subject':['maths','science','commerce','arts','bio']}

# df1=pd.DataFrame(data1)
# df2=pd.DataFrame(data2)
# print("--------df1---------")
# print()
# print(df1)
# print("--------df2---------")
# print()
# print(df2)

# print("OutPut")
# # --------------------------------

# print(df1.merge(df2))



# -------------------------------

# import pandas as pd 
# import numpy as np


# lefth = pd.DataFrame({'key1': ['Ohio', 'Ohio', 'Ohio',
#                                'Nevada', 'Nevada'],
#                       'key2': [2000, 2001, 2002, 2001, 2002],
#                       'data': np.arange(5.)})
# righth = pd.DataFrame(np.arange(12).reshape((6, 2)),
#                       index=[['Nevada', 'Nevada', 'Ohio', 'Ohio',
#                               'Ohio', 'Ohio'],
#                              [2001, 2000, 2000, 2000, 2001, 2002]],
#                       columns=['event1', 'event2'])
# print(lefth)
# print(righth)

# print(pd.merge(lefth, righth, left_on=['key1', 'key2'],
#          right_index=True, how='outer'))

# lefth=lefth.set_index(['key1','key2'],inplace=True)
# print(lefth)

# print(pd.merge(lefth, righth, how='outer', left_on=['key1','key2'], right_index=True))







# Import pandas library 
import pandas as pd 
  
# initialize list of lists 
data = [['tom', 10], ['nick', 15], ['juli', 14]] 
  
# Create the pandas DataFrame 
df = pd.DataFrame(data) 
  
# print dataframe. 
print(df)