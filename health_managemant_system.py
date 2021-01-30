import datetime
def getdate():
    return datetime.datetime.now()
print("enter 1 for lock and 2 for retrieve ")
k=int(input())
def get(k):
    if k==1:
        print("enter 1 for exercise and 2 for food")
        c=int(input())
        if c==1:
            d=input("enter exercise name")
            with open("sankit_ex.txt","a") as op:
                op.write(str(str(str(getdate()))+" : "+"d"))
                print("added successfully")
        else:
            d=input("enter food name\n")
            with open("sankit_food.txt","a") as op:
                op.write(str(str([getdate()])+" : "+d))
                print("added successfully")
    else:
        e=int(input("enter 1 for exercise and 2 for food\n"))
        if e==1:
            with open("sankit_ex.txt") as op:
                t=op.read()
                print(t)
        else:
            with open("sankit_food.txt") as op:
                t=op.read()
                print(t)
get(k)
if k>2:
    print("wrong input give 1 or 2 ")
    print("1 for lock 2 for retrieve")
    k=int(input())
    get(k)

        