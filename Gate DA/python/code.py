print("----------------------------------")
print("      1       ")
print("---------------------------------")

print("hello world !")
l=[1,2,4]
print(l+[7])
print(l)
l.append(7)
print(l)

print("--------------------------------------")
print("        2         ")
print("-------------------------------------")

s= "chakri"
l= list(s)
print(l)

s1= str(l)
print(s1)

s2 = ''.join(l)
print(s2)

print("-------------------------------------")
print("        3         ")
print("-------------------------------------")

l= [ 1,2,3]
print(l+[4])
print(l)
print(l.append(4))
l.append(4)
print(l)
l= l.append(4)
print(l)

print("-------------------------------------")
print("        4         ")
print("-------------------------------------")

a=[1,2,3]
a[:2] = a[1:]
print(a)

for i in range(1,11):
    print( str(i) + ".  " , i*5)
    print(" ( " ,i, " ) ")
    print(i)

for i in range(0 ,1):
    print(i)
    print("i")
    print(" (i) ")                                  #  print(" ( "i" ) ")
    print(" ( " ,i, " ) ")

print("-------------------------------------")
print("        5        ")
print("-------------------------------------")

l= ["sex" , "dog" , "axe" , "tap" ]
for x in l:
    print("hello")
    if(l== "axe"):
        break
print("done")

print("-------------------------------------")
print("        6        ")
print("-------------------------------------")

L= [ 1 , 2 , 3 , 4 , 5 ]
l = [ i+1 if i>2 else i+10 for i in L ]
print(l)

print("-------------------------------------")
print("        7        ")
print("-------------------------------------")

a= "Hello"
b= a
c= "chakri"

print(id(a))
print(id(b))
print(id(c))

print(a is b)
print(a is c)

n=2
print(id(n))
print(hex(id(n)))
n=n+1
print(id(n))
print(hex(id(n)))
n=n-1
print(id(n))
print(hex(id(n)))
print(n)

print("-------------------------------------")
print("        8        ")
print("-------------------------------------")

num = 4
other_num = num
print(id(num))
print(id(num))
num +=1
print(id(num))

print("-------------------------------------")
print("        9        ")
print("-------------------------------------")

l= [1 , 2, 3, 4, 5]
nl= l[2:4]
nl[1]= 10
print(l)
print(nl)
print(id(l[2]))
print(id(nl[0]))

print("**************************************")
l1= [1,2,3]
l2= [l1[:] , l1[:] , l1[:] ]
print(id(l2[0][0]))
print(id(l2[1][0]))
l2[0][0] = 200
print(id(l2[0][0]))
print(id(l2[1][0]))
print("**************************************")
l1=[1,2]
l2=l1
l3=l1+[4]
l1.append(5)
print(l1)
print(l2)
print(l3)
print(id(l1[0]))
print(id(l2[0]))
print(id(l3[0]))
print("************************************")
l1=[[22]]
l2=l1
l3=[[22]]
print(id(l1[0]))
print(id(l2[0]))
print(id(l3[0]))
print("***********************************")
a=[ [1,2,3] , [4,5,6] , [7,8,9] ]   #1
b= a[1:]
b[1][0]=200
print(a)
print(b)

c=[ [1,2,3] , [4,5,6] , [7,8,9] ]   #2
d= c[1:]
c[1][0]=700
print(c)
print(d)

a=[4,5]                             #3
b=a[:]
b[0]=1
print(a)
print(b)

c=[9,10]                            #4
d=c[:]
c[0]=11
print(c)
print(d)

e=[11,12]                           #5
d=e
d[0]=18
print(e)
print(d)

f=[13,14]                           #6
g=f
f[0]=19
print(f)
print(g)

print("-------------------------------------")
print("        10        ")
print("-------------------------------------")



