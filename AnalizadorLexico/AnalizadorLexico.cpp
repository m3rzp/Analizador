/*HOLA*/
/*^[0-9]+((\\.[0-9]+)|(\\.[0-9]+[E](\\+|\\-|[0-9]+)[0-9]+)|([E](\\+|\\-|[0-9]+)[0-9]+))$  esto es para flotantes*/
/*^[a-z]+\d*$ esto es para variables*/
/*^(auto|break|case|char|const|continue|default|do|double|else|enum|extern|float|for|goto|if|int|long|register|return|short|signed|sizeof|static|struct|switch|typedef|union|unsigned|void|volatile|while)$ para palabras reservadas*/
/*^(\+|\-|%|\*|\/|=)$ esto es para operadores*/
/*^(\{|\}|\[|\]|&&|\|\||\;|\,|\.|""|"|'|''|<|>|<<|>>|\^|<=|>=|==|\||&)$ esto es para caracteres especiales*/
/*^\d+$ esto es para enteros*/

#include <regex>
#include <iostream>
#include <string>

using namespace std;
string str;
bool accepted=false;

regex flotante("^[0-9]+((\\.[0-9]+)|(\\.[0-9]+[E](\\+|\\-|[0-9]+)[0-9]+)|([E](\\+|\\-|[0-9]+)[0-9]+))$");
regex variables("^[a-z]+\d*$");
regex reservadas("^(auto|break|case|char|const|continue|default|do|double|else|enum|extern|float|for|goto|if|int|long|register|return|short|signed|sizeof|static|struct|switch|typedef|union|unsigned|void|volatile|while)$");
regex operadores("^(\\+|\\-|%|\\*|\\/|=)$");
regex especiales("^(\\{|\\}|\\[|\\]|&&|\\|\\||\\;|\\,|\\.|\"\"|\" |\'|\'\'|<|>|<<|>>|\\^|<=|>=|==|\\||&)$");
regex enteros("^\d+$");

cout << "\t  A N A L I Z A D O R  L E X I C O" << endl << endl;
while (true)
{
	cout << "Ingrese cadena: "; cin >> str; cout << " - ";
	
	accepted = regex_match(str, flotante);
	if (accepted == true)
	{
		cout << "La cadena ingresada es un flotante" << endl;
	}

	accepted = regex_match(str, variables);
	if (accepted == true)
	{
		cout << "La cadena ingresada es una variable" << endl;
	}

	accepted = regex_match(str, reservadas);
	if (accepted == true)
	{
		cout << "La cadena ingresada es una palabra reservada" << endl;
	}

	accepted = regex_match(str, operadores);
	if (accepted == true)
	{
		cout << "La cadena ingresada es un operador" << endl;
	}

	accepted = regex_match(str, especiales);
	if (accepted == true)
	{
		cout << "La cadena ingresada es un caracter especial" << endl;
	}

	accepted = regex_match(str, enteros);
	if (accepted == true)
	{
		cout << "La cadena ingresada es un entero" << endl;
	}

	if (accepted == false)
	{
		cout << "La cadena ingresada es invalida" << endl;
	}
	
}