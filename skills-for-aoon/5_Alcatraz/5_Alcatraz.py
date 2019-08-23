#เสร็จแล้ว แต่ยังไม่ได้ส่ง เพราะมันยังเหมือนกันอยู่บ้าง

In=input().split(" ")
x=int(In[0])
y=int(In[1])
numberOfwall=int(In[2])
height = []
for i in range(numberOfwall):
    num_h = int(input())
    height.append(num_h)
result=0
i=0
while i<numberOfwall:
    if (height[i]-x) > 0:
        height[i] = (height[i]-x) + y
        result = result+1
    else:
        result = result+1
        i = i+1
print(result)
while True:
    break
