#!/usr/bin/python3
<<<<<<< HEAD
update_dictionary = __import__('7-update_dictionary').update_dictionary
print_sorted_dictionary = __import__('6-print_sorted_dictionary').print_sorted_dictionary
 
a_dictionary = { 'language': "C", 'number': 89, 'track': "Low level" }
new_dict = update_dictionary(a_dictionary, 'language', "Python")
print_sorted_dictionary(new_dict)
print("--")
print_sorted_dictionary(a_dictionary)
 
print("--")
print("--")
 
new_dict = update_dictionary(a_dictionary, 'city', "San Francisco")
print_sorted_dictionary(new_dict)
print("--")
print_sorted_dictionary(a_dictionary)
=======
add_tuple = __import__('7-add_tuple').add_tuple
 
tuple_a = (1, 89)
tuple_b = (88, 11)
new_tuple = add_tuple(tuple_a, tuple_b)
print(new_tuple)
 
print(add_tuple(tuple_a, (1, )))
print(add_tuple(tuple_a, ()))
>>>>>>> 4d805e174b2bdc322a9bb00f58e9594c9165f39d
