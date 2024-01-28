def check(number):
    size=len(number)
    if(size>1):
        for i in range(0,size):
            aim=number[i]+aim
        if( aim%2==1):
            rr="Oddish"
        elif(aim%2==0):
            rr="Evenish"
    return rr        
number=int(input("Enter a number: "))
result=check(number)
print(result)
      
