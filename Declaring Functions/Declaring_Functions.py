def hello():
    print('Howdy!')
    print('Howdy!!!')
    print('Hello There. General Kenobi..')

def hello1(name):
    print('Hello ' + name)

def plusOne(number):
    return number + 1

hello()
hello()
hello()

hello1('Bob')
hello1('Rhonel')

len('hello')

print('Hello has ' + str(len('hello')) + ' letters in it.')

newNum = plusOne(5)
print(newNum)

spam = print()

# keyword args

print('Hello', end='')
print('World')
print('Hello', 'cat', 'dog', 'mouse')
print('Hello', 'cat', 'dog', 'mouse', sep='ABC')