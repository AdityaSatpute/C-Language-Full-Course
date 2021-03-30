numbers = ["3", "34", "64"]

numbers = list(map(int, numbers))

# for i in range(len(numbers)):
#     numbers[i] = int(numbers[i])
#     print(numbers[i])

# numbers[2] = numbers[2] + 1
# print(numbers[2])
# print(numbers[2] + 1)

# def square(a):
#     return a*a

# def cube(a):
#     return a*a*a

# func = [square, cube]
# for i in range(5):
#     val = list(map(lambda x:x(i), func))
#     print(val)

# list1 = [1,2,3,4,5,6,7,8,9,10]

# def is_greater_5(num):
#     return num > 5

# is_greater = list(filter(is_greater_5, list1))
# print(is_greater)

# list1 = [1,2,3,4,5,6]
# def is_greater(num):
#     return num > 5

# is_big = list(filter(is_greater, list1))
# print(is_big)

# list1 = [1,2,3,4,5,6]
# num = 0
# for i in list1:
#     num += i
# print(num)

# from functools import reduce

# list1 = [1,2,3,4,5,6]

# result = reduce(lambda x, y: x + y, list1)
# print(result)

