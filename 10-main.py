<<<<<<< HEAD
#!/usr/bin/python3
best_score = __import__('10-best_score').best_score
 
a_dictionary = {'John': 12, 'Bob': 14, 'Mike': 14, 'Molly': 16, 'Adam': 10}
best_key = best_score(a_dictionary)
print("Best score: {}".format(best_key))
 
best_key = best_score(None)
print("Best score: {}".format(best_key))
=======
<<<<<<< HEAD
#!/usr/bin/python3
divisible_by_2 = __import__('10-divisible_by_2').divisible_by_2
 
my_list = [0, 1, 2, 3, 4, 5, 6]
list_result = divisible_by_2(my_list)
 
i = 0
while i < len(list_result):
	print("{:d} {:s} divisible by 2".format(my_list[i], "is" if list_result[i] else "is not"))
	i += 1
=======
#!/usr/bin/env python3

add = __import__('10-add').add

print(add(1, 2))
print(add(98, 0))
print(add(100, -2))
>>>>>>> 94a71fd54d4ba703742e33a692a164ffb144ed73
>>>>>>> 4d805e174b2bdc322a9bb00f58e9594c9165f39d
