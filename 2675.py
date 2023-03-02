def main():
	i=int(input())
	while(i>0):
		j,string=input().split()
		j=int(j)
		for k in range(0,len(string)):
			if(k==0):
				nstr=string[k:k+1]*j
			else:
				nstr+=string[k:k+1]*j
		print(nstr)
		i-=1
main()