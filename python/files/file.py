#Use open function to read the content  of the file
# f=open('sample.txt','r')
f=open('sample.txt')# by default the mode is read
data=f.read(7)# reads first seven characters of the file
# if nothing is specified full file is read
print(data)

f.close()