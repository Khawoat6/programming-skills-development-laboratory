date = int(input())
result = 0
for i in range(date):
    if i % 6 == 0:
        result -= 1
    if i == 0:
        result = 1
    else:
        result += result * 2
print(result)
