n=input()
print(max([eval(n.replace(' ',c)) for c in '+-*']))