numberOfpeople, kill = [int(x) for x in input().split()]

def GameOfDeath(numberOfpeople, kill):
    if (numberOfpeople == 0):
        return 0
    elif (numberOfpeople == 1):
        return 1
    else:
        return (GameOfDeath(numberOfpeople - 1, kill) + kill-1) % numberOfpeople + 1

print(GameOfDeath(numberOfpeople, kill)) 
