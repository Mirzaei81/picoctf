from math import ceil,sqrt
c= 421345306292040663864066688931456845278496274597031632020995583473619804626233684
n= 631371953793368771804570727896887140714495090919073481680274581226742748040342637
e= 65537

def FermatFactors(n):
 
   # since fermat's factorization applicable
   # for odd positive integers only
    if(n<= 0):
        return [n] 
 
    # check if n is a even number
    if(n & 1) == 0: 
        return [n / 2, 2]
         
    a = ceil(sqrt(n))
 
    #if n is a perfect root,
    #then both its square roots are its factors
    if(a * a == n):
        return [a, a]
 
    while(True):
        b1 = a * a - n
        b = int(sqrt(b1))
        if(b * b == b1):
            break
        else:
            a += 1
    return [a-b, a + b]
     
print(FermatFactors(n))
