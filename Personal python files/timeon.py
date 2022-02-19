import time

i = 0
s = 0
m = 0
h = 0
go = input("digite enter pra iniciar" )
while i == 0:
    s = s +1 
    time.sleep(1)

    if s == 60:
        m = m + 1
        s = 0
    elif m == 60:
        h = h + 1
        m = 0
        
 
    print(h,':', m,':',s)
