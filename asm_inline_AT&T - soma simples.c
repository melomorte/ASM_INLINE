#include <stdio.h>

int sum(val_1, val_2);

int main(){
    int op_1;
    int op_2;

	printf("Informe um numero: ");
	scanf("%3d", &op_1);
	printf("Informe outro numero: ");
	scanf("%3d", &op_2);
	
    printf("%d + %d = %d", op_1, op_2, sum(op_1, op_2));

    return (0);
}

asm(
    "_sum:;"
    "   pushl %ebp;"
    "   movl %esp, %ebp;"
    "   movl 8(%ebp), %eax;"
    "   addl 12(%ebp), %eax;"
    "   movl %ebp, %esp;"
    "   popl %ebp;"
    "   ret"

    );
