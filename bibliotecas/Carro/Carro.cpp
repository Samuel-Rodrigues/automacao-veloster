#include "Carro.h"
#include "Arduino.h"
#include "EEPROMFREEDOM.h"

Carro::Carro(String nome, int enderecoACCEEPROM, int enderecoFaroisEEPROM, int enderecoRetrovisoresEEPROM, int enderecoArcondicionadoEEPROM){
	Nome = nome;
	EnderecoACCEEPROM = enderecoACCEEPROM;
	EnderecoFaroisEEPROM = enderecoFaroisEEPROM;
	EnderecoRetrovisoresEEPROM = enderecoRetrovisoresEEPROM;
	EnderecoArcondicionadoEEPROM = enderecoArcondicionadoEEPROM;
		
}

void Carro::ACCLiga(){
	EEPROMFREEDOM freedom;

	freedom.escreveStatusNaEEPROM(EnderecoACCEEPROM, 1);
	Serial.println(Nome + " ACC Ligado");
}

void Carro::ACCDesliga(){
	EEPROMFREEDOM freedom;

	freedom.escreveStatusNaEEPROM(EnderecoACCEEPROM, 0);
	Serial.println(Nome + " ACC Desligado");
}

void Carro::LigaFarois(){
	EEPROMFREEDOM freedom;

	freedom.escreveStatusNaEEPROM(EnderecoFaroisEEPROM, 1);
	Serial.println("Faróis Ligados");
}

void Carro::DesligaFarois(){
	EEPROMFREEDOM freedom;

	freedom.escreveStatusNaEEPROM(EnderecoFaroisEEPROM, 0);
	Serial.println("Faróis Desligados");
}

void Carro::LigaRetrovisores(){
	EEPROMFREEDOM freedom;

	freedom.escreveStatusNaEEPROM(EnderecoRetrovisoresEEPROM, 1);
	Serial.println("Retrovisores Ligados");
}

void Carro::DesligaRetrovisores(){
	EEPROMFREEDOM freedom;

	freedom.escreveStatusNaEEPROM(EnderecoRetrovisoresEEPROM, 0);
	Serial.println("Retrovisores Desligados");
}

void Carro::LigaArcondicionado(){
	EEPROMFREEDOM freedom;

	freedom.escreveStatusNaEEPROM(EnderecoArcondicionadoEEPROM, 1);
	Serial.println("Ar condicionado Ligado");
}

void Carro::DesligaArcondicionado(){
	EEPROMFREEDOM freedom;

	freedom.escreveStatusNaEEPROM(EnderecoArcondicionadoEEPROM, 0);
	Serial.println("Ar condicionado Desligado");
}

String Carro::GetNome(){

	return Nome;
}

int Carro::GetEstadoACC(){

	EEPROMFREEDOM freedom;

	return freedom.leStatusNaEEPROM(EnderecoACCEEPROM);
}

int Carro::GetEstadoFarois(){

	EEPROMFREEDOM freedom;

	return freedom.leStatusNaEEPROM(EnderecoFaroisEEPROM);
}

int Carro::GetEstadoRetrovisores(){

	EEPROMFREEDOM freedom;

	return freedom.leStatusNaEEPROM(EnderecoRetrovisoresEEPROM);
}

int Carro::GetEstadoArcondicionado(){

	EEPROMFREEDOM freedom;

	return freedom.leStatusNaEEPROM(EnderecoArcondicionadoEEPROM);
}