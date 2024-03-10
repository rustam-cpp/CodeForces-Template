import random

test = ''

def genint(a, b, k, add):
    global test
    n = random.randint(a // k + int(a % k != 0), b // k) * k
    # n - random number (from a to b) divisible by k
    if add:
        test += str(n)
    return n

def genstr(a, b, k, p, add):
    global test
    l = random.randint(a // k + int(a % k != 0), b // k) * k
    # l - length (from a to b) divisible by k
    s = ''
    symbols = []
    for i in p:
        if len(i) == 1:
            symbols.append(i)
        else:
            for j in range(ord(i[0]), ord(i[2]) + 1):
                symbols.append(chr(j))
    # symbols - all possible symbols can use in string
    for i in range(l):
        s += symbols[random.randint(0, len(symbols) - 1)]
    if add:
        test += s
    return s

# generating test

# ---------------

test_file = open('test', 'w+')
test_file.write(test)
test_file.close()

# print('--test--\n\n', test, sep='')
