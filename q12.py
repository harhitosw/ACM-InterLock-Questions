string = "helLoWorld"
result = ""
i=0
while i<len(string):
    if i % 2 == 0:
        result += string[i].upper()
    else :
        result += string[i].lower()
        i=i+1
    i=i+1

print(result) # password/answer will be content in answer variable