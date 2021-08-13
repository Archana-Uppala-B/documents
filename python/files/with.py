with open('another.txt','r') as f:
    a=f.read()
with open('another.txt','w') as f:  #no need to write th f.close function as it is done automatically
    a=f.write("me")
print(a)