
def Digits(n):
    digits,sum,digit_1,digit_2,num=0,0,0,0,n
    if n < 100000:
        while num!=0:
            digits += 1
            num//=10
        print("Num of Digits is: "+str(digits))
        if digits == 1 :
            if n%2 ==0 : print('one digit    -even({0})'.format(n))
            else: print('one digit    -odd({0})'.format(n))

        elif digits == 2:
            digit_2,digit_1=n%10,n//10
            sum=digit_2+digit_1
            if sum%2 == 0: print('two digits    -even({0}+{1}={2})'.format(digit_1,digit_2,sum))
            else:('two digits    -odd({0}+{1}={2})'.format(digit_1,digit_2,sum))

        elif digits == 3:
            digit_2, digit_1 = n % 10, n // 100
            sum = digit_2 + digit_1
            if sum % 2 == 0:
                print('three digits    -even({0}+{1}={2})'.format(digit_1, digit_2, sum))
            else:
                ('three digits    -odd({0}+{1}={2})'.format(digit_1, digit_2, sum))

        elif digits == 4:
            n//=10
            digit_2=n%10
            n//=10
            digit_1=n%10
            sum = digit_2 + digit_1
            if sum % 2 == 0:
                print('four digits    -even({0}+{1}={2})'.format(digit_1, digit_2, sum))
            else:
                ('four digits    -odd({0}+{1}={2})'.format(digit_1, digit_2, sum))
        elif digits == 5 :
            n//=100
            digit_1=n%10
            if digit_1%2 == 0 : print('five digits    -even({0})'.format(digit_1))
            else: print('five digits    -odd({0})'.format(digit_1))
    else:
        print("Error !")
########################################################################################
def Figure(n):
    for i in range(1,n):
        for j in range(1,n*2):
            if i+j==n+1 or j-i == n-1:
                print(i,end="")
            else:
                print(" ",end="")
        print()
    for j in range(n,0,-1):
        print(j,end="")
    for j in range(2,n+1):
        print(j,end="")
    print()
########################################################################################
def IsPrimary(n):
    def IsPrimery_Help(n,i):
        if i==1:
            return True
        if n%i==0:
            return False
        return IsPrimery_Help(n,i-1)
    return IsPrimery_Help(n,n//2)
########################################################################################
def Pascal(n,m):
    if n < m : return -1
    if n == 0 or n == m or m==0: return 1
    else:
        return Pascal(n-1,m-1) + Pascal(n-1,m)
print(Pascal(10,4))
########################################################################################