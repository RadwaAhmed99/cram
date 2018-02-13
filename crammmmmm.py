num=[1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,16]
x = 0
y = 0
playerCount = 2
z=0

for i in num:
    print (i," ",end="")
    if i==4 or i==8 or i==12 or i==16:
        print("\n")
mylist=[1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,16]
canplay=[]

def enterAgain():
    global x
    global y
    print("Enter valid numbres: ")
    x=int(input("enter a number: "))
    y=int(input("enter a number: "))
    while x not in mylist and y not in mylist:
        print("Enter valid numbres: ")
        x=int(input("enter a number: "))
        y=int(input("enter a number: "))

def canPlay():
    global mylist
    global canplay
    yesIcan = False
    canplay.clear()
    for i in mylist:
        if i != "X" and i != "X\n\n":
            index = mylist.index(i)
            canplay.append(index)

    for x in canplay:
        for y in canplay:
            if x-y == 4 or x-y == 1 or y-x == 4 or y-x == 1:
                yesIcan = True
                break
    return yesIcan


def checkWin():
    global playerCount
    global mylist
    global z
    z=mylist.count("X")
    z+=mylist.count("X\n\n")
    if z == 16:
        print("Draw")
    else:
        if playerCount == 1:
            print("Player 1 wins!!")
        else:
            print("Player 2 wins!!")
    exit()

while True:
    yesIcan = canPlay()
    if yesIcan == False:
        checkWin()
    x=int(input("enter a number: "))
    y=int(input("enter a number: "))
    if x>y:
        temp = x
        x = y
        y = temp
    if (y-x==1 or y-x==4):
        if y in [5, 9, 13] and x in [4, 8, 12]:
            enterAgain()
        if y in mylist and x not in mylist or y not in mylist and x in mylist:
            enterAgain()
        if y in mylist and x in mylist:
            if x == 4 or x==8 or x==12 or x== 16:
                mylist[x-1] = "X\n\n"
            else:
                mylist[x-1] = "X"
            if y==4 or y==8 or y==12 or y== 16:
                mylist[y-1] = "X\n\n"
            else:
                mylist[y-1] = "X"
        print ("it's your turn")
    
           
            
    else: 
         enterAgain()
        
    for i in mylist:
        if i != "X":
            print (i," ",end="")
            if i==4 or i==8 or i==12 or i==16:
                print("\n")
        else:
            print(i, " ",end="")
    if playerCount == 2:
        playerCount = 1
    else:
        playerCount = 2
print ("oops")


    

