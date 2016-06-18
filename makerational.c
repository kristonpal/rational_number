typedef struct{
	int numerator;
	int denomerator;
}rational;
rational makerational(int, int);
rational addrational (rational,rational);
rational multiplyrational (rational,rational);
rational equalityrational (rational,rational);
void main()
{
	rational r1= makerational(1,3);
	rational r2= makerational(2,5);
	
	rational sum = addrational(r1,r2);
	rational product= multiplyrational(r1,r2);
	rational equality = equalityrational(r1,r2);

	printf( " sum of ratiaonals: %d / %d \n ",sum.numerator,sum.denomerator);
	printf( " product of rationals: %d / %d \n",product.numerator,product.denomerator);
}
rational makerational(int a, int b)
{
	rational r_number;
		if (b==0)	
		{
			exit(0);
		}else
		{
		
	r_number.numerator= a;
	r_number.denomerator= b;
	return r_number;
}
}

rational addrational(rational r1, rational r2)
{
	rational add;
	add.numerator=((r1.numerator*r2.denomerator)+r2.numerator*r1.denomerator);
    add.denomerator=(r1.denomerator*r2.denomerator);
	return add;
}
rational multiplyrational(rational r1, rational r2)
{
	rational multiply;
	multiply.numerator=(r1.numerator*r2.numerator);
    multiply.denomerator=(r1.denomerator*r2.denomerator);
	return multiply;
}
rational equalityrational(rational r1, rational r2)
{
	rational equality;
	if ((r1.numerator*r2.denomerator) == (r2.numerator*r1.denomerator))
	{
		printf("rational numbers are equal \n");
	}else
	{
		printf("rational numbers are not equal \n");
	}
	return equality;
}
