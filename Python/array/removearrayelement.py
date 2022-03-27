import array as arr
# from traceback import print_tb
a = arr.array('i', [1, 2, 3, 4, 5, 6])
''' 

print("The new record array is : ", end = "")

for i in range(0, 5):

    print(a[i], end =" ")

    print("\r")

# using pop() to remove element at 2nd position
print("the popped element is : ", end = " ")
print(a.pop(2)) '''


# printing array after popping
print("The array after popping is : ", end = "")

for i in range(0, 5):
    print(a[i], end = " ")

    print()

    a.remove(1)

#printing array after removing
print("The array after removing is : ", end = " ")

for i in range(0, 3):
    print(a[i], end = " ")
 