In=input().split(" ")
n=int(In[0])
t=int(In[1])
del In[:]
del In
In2=input().split(" ")
numbers = [ int(x) for x in In2 ]
del In2[:]
del In2
numbers=sorted(numbers,reverse=True)
tmp=0
#print(numbers)
for i in range(0,t):
    tmp+=numbers[0]
    
    numbers.remove(numbers[0])
    numbers=sorted(numbers,reverse=True)

    #print(numbers)
print(tmp)

