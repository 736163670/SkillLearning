#include <stdio.h>
int a[101],n;//定义全局变量

void quicksort(int right,int left){
	int i,j,t,temp;//temp代表基数值
	if(left > right)
		return;

	temp = a[left];
	i = left;
	j = right;

	while(i != j){
		//从右往左找
		while(a[j] >= temp && i < j){
			j--;
		}
		while(a[i] <= temp && i < j){
			i++;
		}
		//交换两个数的值
		if(i<j){
			t = a[i];
			a[i] = a[j];
			a[j] = t;
		}

	}
	a[left] = a[i];
	a[i] = temp;

	quicksort(left,i-1);
	quicksort(i+1,right);
}








int main(){
	int i,j,t;
	scanf("%d",&n);
	for(i = 1;i <= n;i++){
		scanf("%d",&a[i]);

	}

	quicksort(1,n);

	for(i = 1; i <= n;i++){
		printf("%d ",a[i]);



	}
	getchar(); getchar();
	return 0;
}
