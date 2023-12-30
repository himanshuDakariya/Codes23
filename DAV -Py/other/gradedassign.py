import pandas as pd 
import matplotlib.pyplot as plt


df=pd.DataFrame[[1,1,1],[2,2,2],[1,2,1],
                [2,1,1]],index=['one','two','three','four'],
                columns=pd.Index(['A','B','C'],name='MyPlot'))

