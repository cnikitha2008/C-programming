#include<stdio.h>
#include<math.h>
int main()
{
    double a,b;
	char op;
    printf("enter any operator(+,-,*,/,%%) : \n");
    scanf("%c",&op);
    printf("enter two operands :\n");
    scanf("%lf%lf",&a,&b);
    switch(op)
    {
    	case'+':
    		printf("%.1lf+%.1lf=%.1lf",a,b,a+b);
    		break;
    	case'-':
		    printf("%.1lf-%.1lf=%.1lf",a,b,a-b);
			break;
		case'*':
		    printf("%.1lf*%.1lf=%.1lf",a,b,a*b);
			break;
		case'/':
		    printf("%.1lf/%.1lf=%.1lf",a,b,a/b);	
			break;
		case'%':
		    printf("fmod(%.1lf,%.1lf)=%.1lf",a,b,fmod(a,b));
		    break;
		default:
		    printf("invalid operator");
	}
	return 0;
}
