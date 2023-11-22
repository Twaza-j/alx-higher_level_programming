#!/usr/bin/python3

def safe_print_list_integers(my_list=[], x=0):
    tally = 0
    try:
        for i in range(x):
            value = my_list[i]
            if type(value) == int:
                print("{:d}".format(value), end=" ")
                tally += 1
    except (IndexError, ValueError, TypeError):
        pass
    finally:
        print()
        return(tally)
