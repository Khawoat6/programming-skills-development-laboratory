# Phattaraphon Chomchaiyaphum 5930300585
def ghostTicket(numberOfpeople, numberOfticket, a):
    tmp=0
    while numberOfticket>0:
        numberOfticket = numberOfticket-1
        a.sort(reverse = True)
        i=0
        tmp = tmp + a[i]
        a[i] = a[i] - 1
        i = i + 1
    return tmp
        
numberOfpeople, numberOfticket = [int(x) for x in input().split()]
a = []
for i in range(numberOfpeople):
    a.append(int(input()))
print(ghostTicket(numberOfpeople, numberOfticket, a))
