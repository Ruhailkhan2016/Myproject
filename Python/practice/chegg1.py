#Program 1 :

#here we take a input from user to find distance in kilometer
d = float(input("Enter Distance in kilomiter : "))  #d -> distance

#take a input from user time in hours
t = float(input("Enter the time in hours     : "))   #t -> time


s = d / t

print("speed : ", s);

if (s >= 140):
    
    print("\nPay Fine")
    
else:
    
    print("\nNo Fine")

