#include<iostream>
#include<string>
#include<ctime>
#include<cstdlib>
using namespace std;

int main() {



	//declarations

	int max = 5;
	srand(time(0));
	int randomNum1 = (rand() % max);
	int randomNum2 = (rand() % max);
	int randomNum3 = (rand() % max);
	






	string animal[] = { "cat", "dog", "bird", "fish", "lizard" };
	string sillyName[] = { "Bathu", "Json", "pickerdee dee", "blebsheb", "shar shar" };
	string uselessPwr[] = { "create pork rinds out of thin air", "have lemony breath", "read the minds of ants", "only be able to reverse time to an awkward moment", "talk to cardboard" };

	cout << "Once upon a time there was a/n " << animal[randomNum1] << " named " << sillyName[randomNum2] << " with the power to " << uselessPwr[randomNum3] << "." << endl;





	system("pause");
	return 0;