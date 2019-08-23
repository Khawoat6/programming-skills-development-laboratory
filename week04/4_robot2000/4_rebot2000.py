pos =[]
way = input()
text = ""
last= "N"
Direction = ("N","E","S","W","N","E","S","N")
def rotate(new,old):
    global last
    if new == "Z":
        old = "N"
        last = old
        return "Z"
    elif new != old:
        temp = old
        old = new
        last = old
        inx_new = Direction.index(new)
        inx_old = Direction.index(temp)      
        if inx_old - inx_new == 1:
            return "RRR" + "F"
        else:
            return  ("R" * abs(inx_new - inx_old)) +"F" 
    elif old == new:
        return "F"
for a in way:
    text += rotate(a,last)
print(text)

