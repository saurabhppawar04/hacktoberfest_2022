str=input()
words=[i for i in str.split()]
words.sort()
for i in words:
    n=i.count('a')+i.count('e')+i.count('i')\
    +i.count('o')+i.count('u')+i.count('A')\
    +i.count('E')+i.count('I')+i.count('O')+i.count('U')
    print(i,n,sep=',')
