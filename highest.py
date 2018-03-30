a=int(input("enter 1st no.:"))
b=int(input("enter 2nd no.:"))
c=int(input("enter 3rd no.:"))
if a>b:
    if a>c:
        print(a)
    else:
        print(c)
elif b>c:
    if b>a:
        print(b)
    else:
        print(a)
else:
    print(c)
