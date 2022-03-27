// Es.3 - Lorenzo La Corte
// Scrivere una funzione che prende come argomenti 3 variabili di tipo char, 
// propone all’utente di sceglierne una e ne restituisce
// l’indirizzo (ad esempio, per poterla modificare nel main). 
#include <iostream>
using namespace std;

char* selectVar(char& a, char& b, char& c) 
{
	// definire un puntatore di tipo char p inizializzato al puntatore nullo
	char *p = nullptr;
	// stampare i messaggi "Scegli fra queste variabili" e
	// "potrai cambiare idea in seguito e sceglierne una diversa che preferisci"
	cout << "Scegli fra queste variabili:" << endl;
	cout << "(potrai cambiare idea in seguito e sceglierne una diversa che preferisci)" << endl << endl;
	// stampare il messaggio "Vuoi la prima (y/n)? contiene "
	cout << "Vuoi la prima (y/n)? contiene: ";
	// stampare a;
	cout << a << endl;
	// dichiarare una variabile answer di tipo char
	char answer;
	// leggere answer
	cin >> answer;
	// se la risposta è ' y ' o ' Y '
	// assegnare a p l ' indirizzo di a
	if(answer=='Y'||answer=='y')
		p=&a;
	// stampare il messaggio "Preferisci la seconda (y/n)? contiene "
	cout << "Vuoi la seconda (y/n)? contiene: ";
	// stampare b;
	cout << b << endl;
	// leggere answer
	cin >> answer;
	// se la risposta è ' y ' o ' Y '
	// assegnare a p l ' indirizzo di b
	if(answer=='Y'||answer=='y')
		p=&b;
	// stampare il messaggio "Preferisci la terza (y/n)? contiene "
	cout << "Vuoi la terza (y/n)? contiene: ";
	// stampare c;
	cout << c << endl;
	// leggere answer
	cin >> answer;
	// se la risposta è ' y ' o ' Y '
	// assegnare a p l ' indirizzo di c
	if(answer=='Y'||answer=='y')
		p=&c;
	// restituire p
	return p;
}

int main()
{
	// dichiarare tre variabili di tipo char ch1, ch2, ch3...
	// ...inizializzate con lettere fra loro diverse
	char ch1='a', ch2='b', ch3='c';
	// definire un puntatore di tipo char selected inizializzato con ...
	// ... la chiamata di selectVar su ch1, ch2 e ch3
	char *selected = selectVar(ch1, ch2, ch3);
	// confrontare selected con l ' indirizzo di ch1 e se sono uguali
	// stampare il messaggio "hai scelto ch1"
	if(selected == &ch1)
		cout << "Hai scelto ch1." << endl << endl;
	// confrontare selected con l ' indirizzo di ch2 e se sono uguali
	// stampare il messaggio "hai scelto ch2"
	if(selected == &ch2)
		cout << "Hai scelto ch2." << endl << endl;
	// confrontare selected con l ' indirizzo di ch3 e se sono uguali
	// stampare il messaggio "hai scelto ch3"
	if(selected == &ch3)
		cout << "Hai scelto ch3." << endl << endl;
	// stampare il messaggio "Inizialmente ch1==" seguito da ch1
	cout << "Inizialmente ch1==" << ch1 << endl;
	// stampare il messaggio ", ch2==" seguito da ch2 e ", ch3==" seguito da ch3
	cout << "Inizialmente ch2==" << ch2 << endl;
	// stampare un ' andata a capo
	cout << "Inizialmente ch3==" << ch3 << endl << endl;
	// stampare il messaggio "ora cancello la variabile che hai scelto"
	cout << "Ora cancello la variabile che hai scelto" << endl << endl;
	// assegnare uno spazio all ' area di memoria puntata da selected
	*selected= ' ';
	// stampare il messaggio "Ora ch1==" seguito da ch1, da ", ch2==" seguito da ch2 e...
	// ...da ", ch3==" seguito da ch3 e un ' andata a capo
	cout << "Ora ch1==" << ch1 << endl;
	cout << "Ora ch2==" << ch2 << endl;
	cout << "Ora ch3==" << ch3 << endl << endl;
}