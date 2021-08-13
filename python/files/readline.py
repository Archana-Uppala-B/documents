
f=open('sample.txt')
#read first line
data=f.readline()#reads one full line at a time
print(data)

#read second line
data=f.readline()
print(data)


#read third line
data=f.readline()
print(data)

f.close()

#rb will open in binary mode
#rt will open in text mode