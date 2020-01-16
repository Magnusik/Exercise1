# Python 3.3.3 and 2.7.6
# python fo.py

from threading import Thread


# Potentially useful thing:
#   In Python you "import" a global variable, instead of "export"ing it when you declare it
#   (This is probably an effort to make you feel bad about typing the word "global")
i = 0

def incrementingFunction():
    k=0
    global i
    while k<1000000:
        k+=1
        i+=1

def decrementingFunction():
    k=0
    global i
    # TODO: decrement i 1_000_000 times
    while k<1_000_000:
        k+=1
        i-=1

def main():
    # TODO: Something is missing here (needed to print i)

    incrementing = Thread(target = incrementingFunction, args = (),)
    decrementing = Thread(target = decrementingFunction, args = (),)

    incrementing.start()
    decrementing.start()

    incrementing.join()
    decrementing.join()

    print("The magic number is %d" % (i))


main()
