m = "•"
k = "#"
def printLine(n,num=1):
  for i in range(0,num):
    for i in range(0,n+2):print(m,end="")
    print()
def printA(n):
  s = int(n/2);
  for i in range(0,int(n/2)):
    for i in range(0,s):print(m,end="")
    
    if(s == int(n/4)):
      for i in range(0,int((int(n/2)+(2 if(n%4==0) else 3))/len(k))+1):
        print(k,end="")
       # print(m,end="")
      try:
        for i in range(0,n-(int((int(n/2)+(2 if(n%4==0) else 3))/len(k))+s+1+s)):
          #print((int((int(n/2)+(2 if(n%4==0) else 3))/len(k))+s+1+s))
          print(k[i],end="")
      except:pass
      for i in range(0,s-1):print(m,end="")
    else:
      print(k,end="")
      for i in range(0,(int(n/2) - s)*2):print(m,end="")
      print(k,end="")
      for i in range(0,s):print(m,end="")
    s-=1
    print()
def printB(n):
  size = (int(n/6)+1)*4
  for i in range(0,(int(n/6)+1)*4):
    #if i == int(size/2) or i == :
      #for j in range (n):print(k,end="")
    if i < int(size/4) or (i > int(size/2) and i < int(size/4)*3):
      print(k,end="");
      jj = i % int(size/4)
      for j in range(0,n-int(n/6)+jj-1):
        if i == 0 or i == int(size/2):print(k,end="")
        else:print(m,end="")
      print(k,end="")
      for j in range(0,n-(n-int(n/6)+jj)):
        print(m,end="")
    elif (i > int(size/4) and i < int(size/2)) or i > size/4*3:
      print(k,end="");
      jj = i % int(size/4)
      for j in range(0,n-int(n/6)+jj-1):
        if i == 0 or i == int(size/2):print(k,end="")
        else:print(m,end="")
      print(k,end="")
      for j in range(0,n-(n-int(n/6)+jj)):
        print(m,end="")
    #else:
      #print(k,end="");
      #for j in range(0,n-2):print(m,end="")
      #print(k,end="")
    print()
val = int(input("Enter size: "))
val = val + val % 2
printA(val);
printLine(val,3)
printB(val)