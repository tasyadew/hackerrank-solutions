#link: https://www.hackerrank.com/challenges/list-comprehensions/

if __name__ == '__main__':
    x = int(input())
    y = int(input())
    z = int(input())
    n = int(input())

    num = [x,y,z]
    newlist = [a for a in num if x+y+z != n]

    print(newlist)