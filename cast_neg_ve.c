

int main(){

	signed short val=0x7fff,val1=0;

printf(" %d\t%x\n",1,-1);

printf(" %d\t%x\n",val,val);

	val = -val;
printf("%d\t%x\n",val,val);

	val = (signed short)val;

	printf("%i\t%x\n",val,val);

return 0;
}