class MyFunClass:
	x=3
	y=4
	def memberFunc(self):
		


def myFunFunction(in1,in2):
	if in1 < 0:
		in1 = 5
	return in1+in2

x=3
y= x + 4
y= "y is a string now"
#z=input()

intDiv= 7 // 3 # 2
floatDiv = 7 / 3 #2.3333
exp = 2 ** 4
print("Int div value is " + str(intDiv))

t=True
f=False

if t or f: # ||
	print("or example")
if t and f: # &&
	print("and example")
if not f: # !
	print("not example")

if exp == 17:
	print("true, in an if")
	print("also in an if")
elif exp == 16:
	print("exp is actually 16")
else:
	print("exp is neither 16 or 17")
print("not in an if")

# c++
# for(int a : myVector) { ... }

for a in range(0,10):
	print("for loop value is :" + str(a))

myArray = [1,2,3,4]
print("the first member in an array is " + str(myArray[0]))
for val in myArray:
	print("myArrayValue is " + str(val))

myArray.append(9)
print("we jsut added" + str(myArray[len(myArray)-1]))

myString = "hi there"
print(len(myString))

y = myFunFunction(1,2)
print("result of function call is" + str(y))