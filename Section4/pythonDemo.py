class MyClass:
	x=3
	y=4
	def __init__(self):
		print("in constructor")

	def classMemberFunc(self):
		print(self.x)

def myFunc(in1,in2):
	print("in function")
	return in1+in2

print("hello world")

x=3
y=x+4
print(y)

floatDiv = 7 / 3 # 2.3
intDiv = 7 //3 # 2
exp = 2 ** 4 # 16

print("The exponentiated value is " + str(exp))
z = "3"
zAsInt = int(z)

if exp == 17:
	print("in an if statement")
	print("also in an if")
	if z == "3":
		print("z is 3")
elif exp == 16:
	print("exp is 16")
else:
	print("exp is neither 16 or 17")
print("not in an if")

t=True
f=False

if t or f: # ||
	print("t or f")
if t and f: # &&
	print("t and f")
if not f: # !
	print("not false")

#for each in C++
#for(int val : myVector) { ... }

for i in range(0,10):
	print("value in loop is" + str(i))

myArray = [1,2,3,4]
print("the first member is " + str(myArray[0]))

for val in myArray:
	print(val)

myArray.append(5)
print("we just added" + str(myArray[4]))
arrLen = len(myArray)
myStr= "hi there"
len(myStr)

res = myFunc(1,2)
print(res)

inst = MyClass()
inst.classMemberFunc()