n=int(input())
tmp1=int(0)
tmp2=3
D=2
first=1
i=1
a=[]
a.append(0)
a.append(1)
Sum=0

while(i<n):
    #print(i,"\n")
    if (n==1):
        first=1
        
        break
    elif (n==2):
        first=3
        break
    elif(n>=3):
        """
        i+=1
        tmp1=first
        first=first*2+tmp1
        
        a.append(first)
        """
        if(i >=6 ):
            i+=1
            
            tmp1=first
            first=first*2+tmp1
           # print(first,D)
            
            first-=a[D]
            
            #print(first,D)
            
           
            Sum=a[D-1]
            D+=1
            a.append(first)
            

        else:
            i+=1
            tmp1=first
            first=first*2+tmp1
            a.append(first)
            
    
if(n<8):
    print(first)
else:
    print(a[i]+Sum)
#8.2172
        
        
