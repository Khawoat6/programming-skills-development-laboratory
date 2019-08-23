# Phattaraphon Chomchaiyaphum 5930300585
def alcaTraz(x, y, numberOfwall, height):
    #print(x, y, numberOfwall, height)
    result=0
    i=0
    while i<numberOfwall:
        if (height[i]-x) > 0:
            height[i] = (height[i]-x) + y
            result = result+1
        else:
            result = result+1
            i = i+1
    return result
    while True:
        break

height=[]
x, y, numberOfwall = [int(x) for x in input().split()]
for i in range(numberOfwall):
    height.append(int(input()))
print(alcaTraz(x, y, numberOfwall, height))
