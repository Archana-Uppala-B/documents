content=True

i=1
with open("log_file.txt") as f:
  while content:
    content=f.readline()
    if "python" in content.lower() :
     content=content.rstrip()
     print(content)
     print(f"yes,python is present in line number {i}")
     
    i+=1
