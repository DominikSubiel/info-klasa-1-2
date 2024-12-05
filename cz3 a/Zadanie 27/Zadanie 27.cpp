#define pisz printf
#define przypadek case
#define przelacz switch
#include <cstdlib>
#include <iostream>
#include <stdio.h>

using namespace std;

int main(int argc, char *argv[])
{
	system("chcp 1250");
	system("cls");
	char sasiedzi;
	pisz("\nPodaj s¹siadów polski\n");
	scanf("%c", &sasiedzi);
	przelacz(sasiedzi)
	{
		przypadek 'N':
		case 'n':
		{
			pisz("Niemcy");
			break;
		}
		przypadek 'C':
		case 'c':
		{
			pisz("Czechy");
			break;
		}
		przypadek 'S':
		case 's':
		{
			pisz("S³owacja");
			break;
		}
		przypadek 'U':
		case 'u':
		{
			pisz("Ukraina");
			break;
		}
		przypadek 'B':
		case 'b':
		{
			pisz("Bia³oruœ");
			break;
		}
		przypadek 'L':
		case 'l':
		{
			pisz("Litwa");
			break;
		}
		przypadek 'R':
		case 'r':
		{
			pisz("Rosja");
			break;
		}
		default:
			pisz("\nniema takiego kraju!!!");
	}

	cout << endl;
	system("PAUSE");
	return EXIT_SUCCESS;
}

