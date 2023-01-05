def simple(a):
  for i in range(2, a):
  	if (a%i==0.0):
  		return False
  return True
  
file = open("otus.txt", "w")

x = int(input("Type a number: "))
for i in range(2, x):
	if (simple(i)):
		file.write(str(i)+" ")
		print(i, " ")
		
file.close()
			
