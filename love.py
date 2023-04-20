import time
from os import system, name
def clear():
    if name == 'nt':system('cls')
    else:system('clear')
speed = int(input("How much do you love me? "))
clear();
speed = int((speed/2) * 2)
k = int(speed/4)
l = 1
m = " "
n = "*"
o = 0
b = 0
string = "I LOVE YOU"
si = -1
for i in range(0,((int) (speed*(3/4)))):
  j = speed-i
  #print(k)
  if(i >= ((((int) (speed*(3/4))) - len(string))/2)) and si < len(string)-1:
    si += 1
    print(" "+string[si],end="")
    for t in range(0,4):print(" ",end="")
  else:
    for t in range(0,6):print(" ",end="")
  if i < ((int)(speed * 0.3) - 2):
    for ii in range(0,k): print(m,end="")
    for ii in range(0,l):print(n,end="")
    for ii in range(0,((int)(speed/2))-(k+l)):print(m,end="")
    for ii in range(0,k): print(m,end="")
    for ii in range(0,l):print(n,end="")
    for ii in range(0,((int)(speed/2))-(k+l)):print(m,end="")
    
    k-=1
    l+=2
  else:
    b += 2
    o+=1
    for ii in range(0,o): print(m,end="")
    print((n * (speed - b)),end="")
    for ii in range(0,o): print(m,end="")
   # o+=1
    
  if(i >= ((((int) (speed*(3/4))) - len(string))/2)) and (i < ((((int) (speed*(3/4)))/2) + (len(string))/2)):
    for i in range(0,4):print(" ",end="")
    print(string[si],end="")
  time.sleep(0.1)
  print()

mstr = "3000"
for j in range(0,10):
  for i in range(-2,int((speed + len(mstr))/2)):print(" ",end="")
  print(mstr);
  time.sleep(0.1)