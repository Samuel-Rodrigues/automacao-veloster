#ifndef Carro_h
#define Carro_h

#include <Arduino.h> 

class Carro{
    public:
    	Carro(String nome, int enderecoACCEEPROM, int enderecoFaroisEEPROM, int EnderecoRetrovisoresEEPROM, int enderecoArcondicionadoEEPROM);
        void ACCLiga();
		void ACCDesliga();
		void LigaFarois();
		void DesligaFarois();
		void LigaRetrovisores();
		void DesligaRetrovisores();
		void LigaArcondicionado();
		void DesligaArcondicionado();
		String GetNome();
		int GetEstadoACC();
		int GetEstadoFarois();
		int GetEstadoRetrovisores();
		int GetEstadoArcondicionado();

		String Nome;
		int EnderecoACCEEPROM;
		int EnderecoFaroisEEPROM;
		int EnderecoRetrovisoresEEPROM;
		int EnderecoArcondicionadoEEPROM;
};
#endif