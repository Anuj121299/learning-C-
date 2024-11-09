l=int(input("Enter the lower limit : "))
u=int(input("Enter the upper limit : "))
s=0
for i in range(l,u):
    if(i%2==1):
        s=s+i
print(s)
