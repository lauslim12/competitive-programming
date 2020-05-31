operations = str(input()).split('+')
sort_ops = sorted(list(map(int, operations)))
ops = '+'.join(map(str, sort_ops))
print(ops)

# One liner: print('+'.join(map(str, sorted(list(map(int, str(input()).split('+')))))))