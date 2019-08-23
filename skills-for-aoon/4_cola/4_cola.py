def cola(n):
    s = n
    if n==1:
        print("1")
        #return 0
    if (n%3 != 0):
        sub = 3-(n%3)
        n = n+sub
    while(1):
        if (n<3):
            print("%d" % s)
            return 0
        s = s+(n/3)
        n = (n/3)
n = int(input())
cola(n)
