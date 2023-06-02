V = int(input())
A = int(input())
F = int(input())
P = int(input())

TotalPago = 0
if V >= A:
    TotalPago = TotalPago + 1
    V = V - A 
    
if V >= F:
    TotalPago = TotalPago + 1
    V = V - F
    
if V >= P:
    TotalPago = TotalPago + 1
    V = V - P
print(TotalPago)
