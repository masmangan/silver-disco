// Projeto Silver Disco
// 2018-11-07
// marco.mangan@pucrs.br

#include <iostream>
#include <string>
using namespace std;

namespace silver
{
	class candidato
	{
		private:
			string nome;
			int numero;
		public:
			candidato(string nome, int numero);
			friend ostream &operator<<(ostream&, const candidato&);

	};

	candidato::candidato(string nome, int numero) {
		this->nome = nome;
		this->numero = numero;
	}

	ostream &operator<<(ostream& os, const candidato& cand) {
		os << cand.nome << " " << cand.numero;
		return os;
	}

}


int main()
{
	silver::candidato samba("Samba", 91);

	cout << "Sistema Eletrônico de Votação" << endl;
	cout << samba << endl;
	return 0;
}

