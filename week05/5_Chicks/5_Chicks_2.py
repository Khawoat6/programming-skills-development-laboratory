
def numSolution(n): 
	if (n==0): 
		return 0
	elif (n==1): 
		return 1
	else:
           
		#return numSolution(n-1)+numSolution(n-2)


x = int(input())
print(numSolution(x)) 

# Python program to display the Fibonacci sequence up to n-th term using recursive functions
'''
def recur_fibo(n):
   if n <= 1:
       return n
   else:
       return(recur_fibo(n-1) + recur_fibo(n-2))


nterms = int(input())
if nterms <= 0:
   print("Plese enter a positive integer")
else:
   print("Fibonacci sequence:")
   for i in range(nterms):
       print(recur_fibo(i))
'''
