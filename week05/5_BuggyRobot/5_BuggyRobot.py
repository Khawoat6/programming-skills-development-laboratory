# Phattaraphon Chomchaiyaphum 5930300585

def buggyRobot(move_forward, move_back, distance, l, state):
    while True:
        if l >= distance:
            state = state+distance
            break
        if move_forward >= distance:
            state = state+distance
            distance=0
        else:
            distance = distance - l
            state = state + (move_forward+move_back)
    return state;
    
move_forward, move_back, distance = [int(x) for x in input().split()]
l = move_forward - move_back
state = 0
print(buggyRobot(move_forward, move_back, distance, l, state))

#+--------------------------------------+
#|      input       |       output      |
#+--------------------------------------+
#|  5 2 9           |   17              |
#|--------------------------------------+
#|  8 7 9           |   23              |
#|--------------------------------------+
#|  9 8 8           |   8               |
#+--------------------------------------+

'''
def buggyRobot(move_forward, move_back, distance):
    tmp1 = 0
    x = move_forward - move_back
    while(1):
        if x>=distance:
            tmp1 += distance
            break
        elif move_forward>=distance:
            tmp1 +=distance
            distance=0
        else:
            distance -=x
            tmp1 += move_forward+move_back
    return tmp1;
    
move_forward, move_back, distance = [int(x) for x in input().split()]
print(buggyRobot(move_forward, move_back, distance))
'''
'''
def buggyRobot(move_forward, move_back, distance, l, state):
    while(1):
        if l >= distance:
            state = distance + state
            break
        elif move_forward>=distance:
            state +=distance
            distance=0
        else:
            distance -= l
            state += move_forward+move_back
    return state;
    
move_forward, move_back, distance = [int(x) for x in input().split()]
l = move_forward - move_back
state = 0
print(buggyRobot(move_forward, move_back, distance, l, state))
'''
