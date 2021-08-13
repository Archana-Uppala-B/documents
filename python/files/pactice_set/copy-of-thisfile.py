with open("this.txt") as f:
    content=f.read()
with open("copyofthis.txt",'w') as f:
    f.write(content)