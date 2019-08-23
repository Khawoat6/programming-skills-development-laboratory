'''
def rotate(new, old):
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

way = input()
text = ""
last = "N"
Direction = ("N","E","S","W","N","E","S","N")
for a in way:
    text += rotate(a,last)
print(text)
'''


N = 0
E = 1
S = 2
W = 3
def isCircular(path): 
	x = 0
	y = 0
	dir = N 
	for i in range(len(path)): 
		move = path[i] 
		if move == 'R': 
			dir = (dir + 1)%4
		elif move == 'L': 
			dir = (4 + dir - 1)%4
		else: # if move == 'G' 
			if dir == N: 
				y += 1
			elif dir == E: 
				x += 1
			elif dir == S: 
				y -= 1
			else: 
				x -= 1
	return (x == 0 and y == 0) 
path = input()
if isCircular(path): 
	print ("Given sequence of moves is circular")
else: 
	print ("Given sequence of moves is NOT circular")
 
