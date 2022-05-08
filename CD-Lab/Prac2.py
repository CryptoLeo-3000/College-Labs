import re

operators = {
	'=' : 'Assignment operator',
	'+' : 'Addition operator',
	'-' : 'Subtraction operator',
	'/' : 'Division operator',
	'*' : 'Multiplication operator',
	'<' : 'Lessthan operator',
	'>' : 'Greaterthan operator' }
operators_key = operators.keys()

data_type = {
	'int' : 'Integer type',
	'float': 'Floating point' ,
	'char' : 'Character type',
	'long' : 'long int'}
data_type_key = data_type.keys()

punctuation_symbol = {
	':' : 'Colon',
	';' : 'Semi-colon',
	'.' : 'Dot',
	',' : 'Comma'}
punctuation_symbol_key = punctuation_symbol.keys()

identifier = ['a', 'b', 'c', 'd', 'e', 'f', 'g', 'h', 'i', 'j', 'k', 'l', 'm', 'n', 'o', 'p', 'q', 'r', 's', 't', 'u', 'v', 'w', 'x', 'y', 'z']

file = open("read.py")
a=file.read()

count=0
program = a.split("\n")
for line in program:
	count = count + 1
	print(f"Line: {line}")
	
	tokens=line.split(' ')
	
	if tokens[-1] == ';':
		pop = tokens.pop()
		for i in pop:
			tokens.append(i)
	
	print(f"Tokens:\n {tokens}")
	print("Properties:\n")
	for token in tokens:
		if token in operators_key:
			print(f"{token} is {operators[token]}")
		if token in data_type_key:
			print(f"{token} is {data_type[token]}")
		if token in punctuation_symbol_key:
			print (f"{token} is {punctuation_symbol[token]}")
		if token in identifier:
			print (f"{token} is Identifier")
	
	print("------------------------------------------------------------------------------------------------------------") 