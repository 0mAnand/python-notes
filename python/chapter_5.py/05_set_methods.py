# creating an empty set 
b = set()               
print(type(b))

# adding values to an empty set 
b.add(4)                 
b.add(4)             # set is a collection of non repeting element
b.add(5)
b.add(5)
#b.add({4,5}) # can not list or dictionary to set
b.add((4,6,8)) # we can add tuple in a set 
print(b)

print(len(b))   # prints the length of this set

b.remove(5) # remove 5 from the set b
# b.remove(15) # throws an error while trying to remove 15 (which is not present in the set)
print(b)

print(b.pop())
print(b)

b.clear()
print(b)

b.union( )
print(b)
 




