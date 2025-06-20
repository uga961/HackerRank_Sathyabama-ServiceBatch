s = input()

result = ""
i = 0
while i < len(s):
    if i + 1 < len(s) and s[i] == 'E' and s[i + 1] == 'F':
        i += 2
    elif s[i] == 'G':
        i += 1
    else:
        result += s[i]
        i += 1

print(result)
