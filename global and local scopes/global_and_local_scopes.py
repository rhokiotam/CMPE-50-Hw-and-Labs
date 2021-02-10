spam = 42 # global variable

# local scopes cant use variables in other local scopes
def eggs():
    eggs = 30 # local variable
    bacon()
    print(eggs)

def bacon():
    ham = 101
    eggs = 0

print(spam)
eggs()

def middle():
    print(breakfast)

breakfast = 32
middle()

# using a global variable value in a function

def lunch():
    global chicken
    print(chicken)

chicken = 10
lunch()
print(chicken)