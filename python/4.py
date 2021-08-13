fname=input("Enter the filename:")
try:
    fhand=open(fname)
except:
    print("File cannot be opened:",fname)

count=0
for line in fhand:
 if line.startswith('Gmail'):
   count=count+1
print("There were",count,"Gmails lines in",fname)