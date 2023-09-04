
int main()
{
	double a = 5.0 , b= 10.0;
	int operation;
	cout << "Enter the operation [ +, -, * or /] :)";
	cin << operation; 
	switch (opearation)
	{
	case char '+': c = a + b;
		break;
	case char '-': c = a - b;
		break;
	case char '*': c = a * b;
		break;
	case char '/': c = a/b;
		break;
	default:
		break;
	}
	cout << a << operation < , b << "=" << c; 

	}
	return 0;
}