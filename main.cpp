#include <iostream>
#include <string>

int main()
{

		//////////////////////////////////////////////////////////////////////////////////////
	
		int iFirst;
		int iSecond;

		std::cout << "Give 2 numbers!" << "\n";
		std::cout << "First number: ";
		std::cin >> iFirst;
		std::cout << "Second number: ";
		std::cin >> iSecond;

		int iAdd = iFirst + iSecond;
		int iDivision = iFirst / iSecond;
		std::cout << "Addition is ( in integer ): " << iAdd << "\n";
		std::cout << "Dividing first into second ( in integer) :" << iDivision << "\n";

		double dAdd = iFirst + iSecond;
		double dDivision = iFirst / iSecond;
		std::cout << "Addition is ( in double ): " << dAdd << "\n";
		std::cout << "Dividing first into second ( in double) :" << dDivision << "\n";

		double dAddCast = double(iFirst) + double(iSecond);
		double dDivisionCast = double(iFirst) / double(iSecond);
		std::cout << "AdditionCast is: " << dAddCast << "\n";
		std::cout << "DivisionCast is: " << dDivisionCast << "\n";


		//////////////////////////////////////////////////////////////////////////////////////


		std::string sName;
		std::string sSurname;

		std::cout << "Your first name: ";
		std::cin >> sName;
		std::cout << "Your surname: ";
		std::cin >> sSurname;

		std::string sNameSurname = sName + " " + sSurname;
		std::string sSurnameName = sSurname + ", " + sName;

		std::cout << sNameSurname << "\n";
		std::cout << sSurnameName << "\n";


		//////////////////////////////////////////////////////////////////////////////////////


		{
			int gamefield[3][3] = { {1, 2, 3}, {4, 5, 6} };
			std::cout << gamefield[0][0] << " " << gamefield[0][1] << " " << gamefield[0][2] << "\n";
			std::cout << gamefield[1][0] << " " << gamefield[1][1] << " " << gamefield[1][2] << "\n";

			const int iSecond = 1;
			std::cout << "Constant iSecond in block is: " << iSecond << "\n";
		}
		std::cout << "Constant iSecond out of block is: " << iSecond << "\n";


		//////////////////////////////////////////////////////////////////////////////////////


		int charachter1 = sName[0];
		int charachter2 = sName[1];
		std::cout << "First letter of user's first name converted into number using ASCII table: " << charachter1 << "\n";
		std::cout << "Second letter of user's first name converted into number using ASCII table: " << charachter2 << "\n";

		int charachter1_position = charachter1 % 32;
		int charachter2_position = charachter2 % 32;
		std::cout << "Position of the letter 1 in the German alphabet: " << charachter1_position << "\n";
		std::cout << "Position of the letter 2 in the German alphabet: " << charachter2_position << "\n";



		return 0;

}