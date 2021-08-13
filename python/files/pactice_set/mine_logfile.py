with open("log_file.txt") as f:
    content=f.read().lower()
if "python" in content :
    print("yes, python is in the log file")
else:
    print("python is not in the log file")