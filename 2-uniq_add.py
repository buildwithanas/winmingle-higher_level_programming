#!/usr/bin/python3
def uniq_add(my_list=[]):
    """Adds all unique integers in a list."""
    total = 0

    for num in set(my_list):
        total += num

    return total
