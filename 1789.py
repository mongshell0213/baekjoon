def main():
	s=int(input())
	s1=s
	num=1
	count=0
	while(s>0):
		s-=num
		num+=1
		count+=1
	trash=abs(s)
	if(s<0):
		s=s1
		num=1
		count=0
		while(s>0):
			if(num==trash):
				num+=1
				continue
			elif(num!=trash):
				s-=num
				num+=1
				count+=1
	print(count)
main()