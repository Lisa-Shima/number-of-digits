int main(){
	int n;
	printf("Enter any number:");
	scanf("%d",&n);
	int count=0;
	int sum=0;
	while(n!=0){
		sum=sum+(n%10);
		n=n/10;
		count++;	
	}
	printf("The sum of the digits of your number is:%d",sum);
	
	return 0;
}