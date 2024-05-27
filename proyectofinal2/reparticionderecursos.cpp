#include <iostream>
#include <string>
#include <vector>
#include "esposas.h"
#include "bancos.h"
#include "arabes.h"

using namespace std;

void agregarEsposa(vector<Esposa>& esposas, const Esposa& esposa) {
	esposas.push_back(esposa);
}

void verEsposas(const vector<Esposa>& esposas) {
	for (size_t i = 0; i < esposas.size(); ++i) {
		cout << "Esposa " << i + 1 << ":" << endl;
		mostrarEsposa(esposas[i]);
		cout << "Edad: " << calcularEdad(esposas[i]) << " a�os" << endl;
		cout << endl;
	}
}

int* listaEsposas(const vector<Esposa>& esposas) {
	static int conteo[2] = {0, 0};
	conteo[0] = esposas.size(); // N�mero total de esposas
	conteo[1] = 0; // Aqu� puedes agregar l�gica para otro conteo si es necesario
	return conteo;
}

void agregarArabe(vector<Arabe>& arabes, const Arabe& arabe) {
	arabes.push_back(arabe);
}

void verArabes(const vector<Arabe>& arabes) {
	for (size_t i = 0; i < arabes.size(); ++i) {
		cout << "Arabe " << i + 1 << ": " << arabes[i].nombre << endl;
	}
}

int* listaArabes(const vector<Arabe>& arabes) {
	static int conteo[2] = {0, 0};
	conteo[0] = arabes.size(); // N�mero total de �rabes
	conteo[1] = 0; // Aqu� puedes agregar l�gica para otro conteo si es necesario
	return conteo;
}

void asignarEsposasFijas(vector<Esposa>& esposas, vector<Arabe>& arabes) {
	// Aqu� se asignan las esposas de manera fija a los �rabes
	if (arabes.size() < 5) {
		cerr << "Error: Se necesitan al menos 5 �rabes para asignar las esposas fijas." << endl;
		return;
	}
	
	arabes[0].casar(&esposas[0]);
	arabes[0].casar(&esposas[1]);
	arabes[0].casar(&esposas[2]);
	arabes[0].casar(&esposas[3]);
	arabes[0].casar(&esposas[4]);
	arabes[0].casar(&esposas[5]);
	arabes[0].casar(&esposas[6]);
	arabes[0].casar(&esposas[7]);
	arabes[0].casar(&esposas[8]);
	arabes[0].casar(&esposas[9]);
	arabes[0].casar(&esposas[10]);
	arabes[0].casar(&esposas[11]);
	arabes[0].casar(&esposas[12]);
	arabes[0].casar(&esposas[13]);
	arabes[0].casar(&esposas[14]);
	arabes[0].casar(&esposas[15]);
	
	arabes[1].casar(&esposas[16]);
	arabes[1].casar(&esposas[17]);
	arabes[1].casar(&esposas[18]);
	arabes[1].casar(&esposas[19]);
	arabes[1].casar(&esposas[20]);
	arabes[1].casar(&esposas[21]);
	arabes[1].casar(&esposas[22]);
	arabes[1].casar(&esposas[23]);
	arabes[1].casar(&esposas[24]);
	arabes[1].casar(&esposas[25]);
	arabes[1].casar(&esposas[26]);
	arabes[1].casar(&esposas[27]);
	arabes[1].casar(&esposas[28]);
	arabes[1].casar(&esposas[29]);
	arabes[1].casar(&esposas[30]);
	arabes[1].casar(&esposas[31]);
	
	arabes[2].casar(&esposas[32]);
	arabes[2].casar(&esposas[33]);
	arabes[2].casar(&esposas[34]);
	arabes[2].casar(&esposas[35]);
	arabes[2].casar(&esposas[36]);
	arabes[2].casar(&esposas[37]);
	arabes[2].casar(&esposas[38]);
	arabes[2].casar(&esposas[39]);
	arabes[2].casar(&esposas[40]);
	arabes[2].casar(&esposas[41]);
	arabes[2].casar(&esposas[42]);
	arabes[2].casar(&esposas[43]);
	arabes[2].casar(&esposas[44]);
	arabes[2].casar(&esposas[45]);
	arabes[2].casar(&esposas[46]);
	

	arabes[3].casar(&esposas[47]);
	arabes[3].casar(&esposas[48]);
	arabes[3].casar(&esposas[49]);
	arabes[3].casar(&esposas[50]);
	arabes[3].casar(&esposas[51]);
	arabes[3].casar(&esposas[52]);
	arabes[3].casar(&esposas[53]);
	arabes[3].casar(&esposas[54]);
	arabes[3].casar(&esposas[55]);
	arabes[3].casar(&esposas[56]);
	arabes[3].casar(&esposas[57]);
	arabes[3].casar(&esposas[58]);
	arabes[3].casar(&esposas[59]);
	arabes[3].casar(&esposas[60]);
	arabes[3].casar(&esposas[61]);
	arabes[3].casar(&esposas[62]);
	
	arabes[4].casar(&esposas[63]);
	arabes[4].casar(&esposas[64]);
	arabes[4].casar(&esposas[65]);
	arabes[4].casar(&esposas[66]);
	arabes[4].casar(&esposas[67]);
	arabes[4].casar(&esposas[68]);
	arabes[4].casar(&esposas[69]);
	arabes[4].casar(&esposas[70]);
	arabes[4].casar(&esposas[71]);
	arabes[4].casar(&esposas[72]);
	arabes[4].casar(&esposas[73]);
	arabes[4].casar(&esposas[74]);
	arabes[4].casar(&esposas[75]);
	arabes[4].casar(&esposas[76]);
	arabes[4].casar(&esposas[77]);
	
	
	arabes[5].casar(&esposas[78]);
	arabes[5].casar(&esposas[79]);
	arabes[5].casar(&esposas[80]);
	arabes[5].casar(&esposas[81]);
	arabes[5].casar(&esposas[82]);
	arabes[5].casar(&esposas[83]);
	arabes[5].casar(&esposas[84]);
	arabes[5].casar(&esposas[85]);
	arabes[5].casar(&esposas[86]);
	arabes[5].casar(&esposas[87]);
	arabes[5].casar(&esposas[88]);
	arabes[5].casar(&esposas[89]);
	arabes[5].casar(&esposas[90]);
	arabes[5].casar(&esposas[91]);
	arabes[5].casar(&esposas[92]);

	arabes[6].casar(&esposas[93]);
	arabes[6].casar(&esposas[94]);
	arabes[6].casar(&esposas[95]);
	arabes[6].casar(&esposas[96]);
	arabes[6].casar(&esposas[97]);
	arabes[6].casar(&esposas[98]);
	arabes[6].casar(&esposas[99]);
	arabes[6].casar(&esposas[100]);
	arabes[6].casar(&esposas[101]);
	arabes[6].casar(&esposas[102]);
	arabes[6].casar(&esposas[103]);
	arabes[6].casar(&esposas[104]);
	arabes[6].casar(&esposas[105]);
	arabes[6].casar(&esposas[106]);
	arabes[6].casar(&esposas[107]);

	arabes[7].casar(&esposas[108]);
	arabes[7].casar(&esposas[109]);
	arabes[7].casar(&esposas[110]);
	arabes[7].casar(&esposas[111]);
	arabes[7].casar(&esposas[112]);
	arabes[7].casar(&esposas[113]);
	arabes[7].casar(&esposas[114]);
	arabes[7].casar(&esposas[115]);
	arabes[7].casar(&esposas[116]);
	arabes[7].casar(&esposas[117]);
	arabes[7].casar(&esposas[118]);
	arabes[7].casar(&esposas[119]);
	arabes[7].casar(&esposas[120]);
	arabes[7].casar(&esposas[121]);
	arabes[7].casar(&esposas[122]);
	
	
	arabes[8].casar(&esposas[123]);
	arabes[8].casar(&esposas[124]);
	arabes[8].casar(&esposas[125]);
	arabes[8].casar(&esposas[126]);
	arabes[8].casar(&esposas[127]);
	arabes[8].casar(&esposas[128]);
	arabes[8].casar(&esposas[129]);
	arabes[8].casar(&esposas[130]);
	arabes[8].casar(&esposas[131]);
	arabes[8].casar(&esposas[132]);
	arabes[8].casar(&esposas[133]);
	arabes[8].casar(&esposas[134]);
	arabes[8].casar(&esposas[135]);
	arabes[8].casar(&esposas[136]);
	arabes[8].casar(&esposas[137]);
	
	
	arabes[9].casar(&esposas[138]);
	arabes[9].casar(&esposas[139]);
	arabes[9].casar(&esposas[140]);
	arabes[9].casar(&esposas[141]);
	arabes[9].casar(&esposas[142]);
	arabes[9].casar(&esposas[143]);
	arabes[9].casar(&esposas[144]);
	arabes[9].casar(&esposas[145]);
	arabes[9].casar(&esposas[146]);
	arabes[9].casar(&esposas[147]);
	arabes[9].casar(&esposas[148]);
	arabes[9].casar(&esposas[149]);
	arabes[9].casar(&esposas[150]);
	arabes[9].casar(&esposas[151]);
	arabes[9].casar(&esposas[152]);
	
	
	arabes[10].casar(&esposas[153]);
	arabes[10].casar(&esposas[154]);
	arabes[10].casar(&esposas[155]);
	arabes[10].casar(&esposas[156]);
	arabes[10].casar(&esposas[157]);
	arabes[10].casar(&esposas[158]);
	arabes[10].casar(&esposas[159]);
	arabes[10].casar(&esposas[160]);
	arabes[10].casar(&esposas[161]);
	arabes[10].casar(&esposas[162]);
	arabes[10].casar(&esposas[163]);
	arabes[10].casar(&esposas[164]);
	arabes[10].casar(&esposas[165]);
	arabes[10].casar(&esposas[166]);
	arabes[10].casar(&esposas[167]);
	
	
	arabes[11].casar(&esposas[168]);
	arabes[11].casar(&esposas[169]);
	arabes[11].casar(&esposas[170]);
	arabes[11].casar(&esposas[171]);
	arabes[11].casar(&esposas[172]);
	arabes[11].casar(&esposas[173]);
	arabes[11].casar(&esposas[174]);
	arabes[11].casar(&esposas[175]);
	arabes[11].casar(&esposas[176]);
	arabes[11].casar(&esposas[177]);
	arabes[11].casar(&esposas[178]);
	arabes[11].casar(&esposas[179]);
	arabes[11].casar(&esposas[180]);
	arabes[11].casar(&esposas[181]);
	arabes[11].casar(&esposas[182]);
	
	
	arabes[12].casar(&esposas[183]);
	arabes[12].casar(&esposas[184]);
	arabes[12].casar(&esposas[185]);
	arabes[12].casar(&esposas[186]);
	arabes[12].casar(&esposas[187]);
	arabes[12].casar(&esposas[188]);
	arabes[12].casar(&esposas[189]);
	arabes[12].casar(&esposas[190]);
	arabes[12].casar(&esposas[191]);
	arabes[12].casar(&esposas[192]);
	arabes[12].casar(&esposas[193]);
	arabes[12].casar(&esposas[194]);
	arabes[12].casar(&esposas[195]);
	arabes[12].casar(&esposas[196]);
	arabes[12].casar(&esposas[197]);
	
	
	arabes[13].casar(&esposas[198]);
	arabes[13].casar(&esposas[199]);
	arabes[13].casar(&esposas[200]);
	arabes[13].casar(&esposas[201]);
	arabes[13].casar(&esposas[202]);
	arabes[13].casar(&esposas[203]);
	arabes[13].casar(&esposas[204]);
	arabes[13].casar(&esposas[205]);
	arabes[13].casar(&esposas[206]);
	arabes[13].casar(&esposas[207]);
	arabes[13].casar(&esposas[208]);
	arabes[13].casar(&esposas[209]);
	arabes[13].casar(&esposas[210]);
	arabes[13].casar(&esposas[211]);
	arabes[13].casar(&esposas[212]);
	
	
	arabes[14].casar(&esposas[213]);
	arabes[14].casar(&esposas[214]);
	arabes[14].casar(&esposas[215]);
	arabes[14].casar(&esposas[216]);
	arabes[14].casar(&esposas[217]);
	arabes[14].casar(&esposas[218]);
	arabes[14].casar(&esposas[219]);
	arabes[14].casar(&esposas[220]);
	arabes[14].casar(&esposas[221]);
	arabes[14].casar(&esposas[222]);
	arabes[14].casar(&esposas[223]);
	arabes[14].casar(&esposas[224]);
	arabes[14].casar(&esposas[225]);
	arabes[14].casar(&esposas[226]);
	arabes[14].casar(&esposas[227]);
	

	arabes[15].casar(&esposas[228]);
	arabes[15].casar(&esposas[229]);
	arabes[15].casar(&esposas[230]);
	arabes[15].casar(&esposas[231]);
	arabes[15].casar(&esposas[232]);
	arabes[15].casar(&esposas[233]);
	arabes[15].casar(&esposas[234]);
	arabes[15].casar(&esposas[235]);
	arabes[15].casar(&esposas[236]);
	arabes[15].casar(&esposas[237]);
	arabes[15].casar(&esposas[238]);
	arabes[15].casar(&esposas[239]);
	arabes[15].casar(&esposas[240]);
	arabes[15].casar(&esposas[241]);
	arabes[15].casar(&esposas[242]);
	
	
	arabes[16].casar(&esposas[243]);
	arabes[16].casar(&esposas[244]);
	arabes[16].casar(&esposas[245]);
	arabes[16].casar(&esposas[246]);
	arabes[16].casar(&esposas[247]);
	arabes[16].casar(&esposas[248]);
	arabes[16].casar(&esposas[249]);
	arabes[16].casar(&esposas[250]);
	arabes[16].casar(&esposas[251]);
	arabes[16].casar(&esposas[252]);
	arabes[16].casar(&esposas[253]);
	arabes[16].casar(&esposas[254]);
	arabes[16].casar(&esposas[255]);
	arabes[16].casar(&esposas[256]);
	arabes[16].casar(&esposas[257]);
	
	arabes[17].casar(&esposas[258]);
	arabes[17].casar(&esposas[259]);
	arabes[17].casar(&esposas[260]);
	arabes[17].casar(&esposas[261]);
	arabes[17].casar(&esposas[262]);
	arabes[17].casar(&esposas[263]);
	arabes[17].casar(&esposas[264]);
	arabes[17].casar(&esposas[265]);
	arabes[17].casar(&esposas[266]);
	arabes[17].casar(&esposas[267]);
	arabes[17].casar(&esposas[268]);
	arabes[17].casar(&esposas[269]);
	arabes[17].casar(&esposas[270]);
	arabes[17].casar(&esposas[271]);
	arabes[17].casar(&esposas[272]);
	
	
	arabes[18].casar(&esposas[273]);
	arabes[18].casar(&esposas[274]);
	arabes[18].casar(&esposas[275]);
	arabes[18].casar(&esposas[276]);
	arabes[18].casar(&esposas[277]);
	arabes[18].casar(&esposas[278]);
	arabes[18].casar(&esposas[279]);
	arabes[18].casar(&esposas[280]);
	arabes[18].casar(&esposas[281]);
	arabes[18].casar(&esposas[282]);
	arabes[18].casar(&esposas[283]);
	arabes[18].casar(&esposas[284]);
	arabes[18].casar(&esposas[285]);
	arabes[18].casar(&esposas[286]);
	arabes[18].casar(&esposas[287]);
	
	
	arabes[19].casar(&esposas[288]);
	arabes[19].casar(&esposas[289]);
	arabes[19].casar(&esposas[290]);
	arabes[19].casar(&esposas[291]);
	arabes[19].casar(&esposas[292]);
	arabes[19].casar(&esposas[293]);
	arabes[19].casar(&esposas[294]);
	arabes[19].casar(&esposas[295]);
	arabes[19].casar(&esposas[296]);
	arabes[19].casar(&esposas[297]);
	arabes[19].casar(&esposas[298]);
	arabes[19].casar(&esposas[299]);
	arabes[19].casar(&esposas[300]);
	arabes[19].casar(&esposas[301]);
	arabes[19].casar(&esposas[302]);
	
	
	arabes[20].casar(&esposas[303]);
	arabes[20].casar(&esposas[304]);
	arabes[20].casar(&esposas[305]);
	arabes[20].casar(&esposas[306]);
	arabes[20].casar(&esposas[307]);
	arabes[20].casar(&esposas[308]);
	arabes[20].casar(&esposas[309]);
	arabes[20].casar(&esposas[310]);
	arabes[20].casar(&esposas[311]);
	arabes[20].casar(&esposas[312]);
	arabes[20].casar(&esposas[313]);
	arabes[20].casar(&esposas[314]);
	
	
	
}

int main(int argc, char* argv[]) {
	vector<Esposa> esposas;
	// Definir las esposas
	esposas.push_back({"Luc�a S�nchez", "1996/02/09", 68});
	esposas.push_back({"Laura Garc�a", "1998/03/01", 47});
	esposas.push_back({"Julia Mart�n", "1987/07/10", 55});
	esposas.push_back({"Luc�a L�pez", "1982/10/05", 56});
	esposas.push_back({"Luc�a Garc�a", "1982/04/23", 44});
	esposas.push_back({"Paula Garc�a", "1984/12/25", 62});
	esposas.push_back({"Laura Gonz�lez", "1988/09/21", 63});
	esposas.push_back({"Julia Garc�a", "2002/03/03", 44});
	esposas.push_back({"Elena Romero", "1997/11/04", 66});
	esposas.push_back({"Claudia Garc�a", "2004/08/20", 58});
	esposas.push_back({"Paula Romero", "1997/07/04", 44});
	esposas.push_back({"Elena Mart�nez", "1988/04/02", 70});
	esposas.push_back({"Julia P�rez", "1988/01/03", 44});
	esposas.push_back({"Claudia S�nchez", "1987/04/17", 40});
	esposas.push_back({"Luc�a Fern�ndez", "1988/01/25", 42});
	esposas.push_back({"Julia Mart�n", "1990/10/24", 55});
	esposas.push_back({"Laura Mart�nez", "2000/04/17", 50});
	esposas.push_back({"Mar�a Romero", "1983/10/03", 48});
	esposas.push_back({"Julia Mart�nez", "1992/09/01", 50});
	esposas.push_back({"Julia Gonz�lez", "1995/10/20", 65});
	esposas.push_back({"Mar�a S�nchez", "1990/01/16", 47});
	esposas.push_back({"Andrea L�pez", "1989/09/02", 65});
	esposas.push_back({"Andrea L�pez", "2006/08/08", 46});
	esposas.push_back({"Andrea Rodr�guez", "2003/12/16", 55});
	esposas.push_back({"Andrea Rodr�guez", "1985/08/06", 66});
	esposas.push_back({"Mar�a Garc�a", "1982/03/07", 66});
	esposas.push_back({"Laura S�nchez", "1985/10/18", 59});
	esposas.push_back({"Ana Mart�nez", "2000/12/17", 49});
	esposas.push_back({"Laura Gonz�lez", "2002/09/16", 60});
	esposas.push_back({"Luc�a S�nchez", "2004/10/05", 67});
	esposas.push_back({"Elena P�rez", "1998/06/23", 58});
	esposas.push_back({"Laura Mart�nez", "1983/12/12", 53});
	esposas.push_back({"Luc�a Mart�nez", "1999/05/03", 46});
	esposas.push_back({"Elena Gonz�lez", "1999/05/05", 50});
	esposas.push_back({"Elena L�pez", "2000/01/18", 59});
	esposas.push_back({"Elena S�nchez", "1991/10/10", 52});
	esposas.push_back({"Julia Romero", "2006/12/01", 62});
	esposas.push_back({"Julia Mart�n", "2001/05/11", 50});
	esposas.push_back({"Sof�a Fern�ndez", "2001/07/26", 61});
	esposas.push_back({"Sof�a Romero", "1996/12/02", 58});
	esposas.push_back({"Elena S�nchez", "1992/05/13", 43});
	esposas.push_back({"Laura Fern�ndez", "1982/01/24", 63});
	esposas.push_back({"Claudia L�pez", "1997/05/07", 53});
	esposas.push_back({"Julia P�rez", "1999/09/18", 68});
	esposas.push_back({"Julia Garc�a", "1995/06/03", 45});
	esposas.push_back({"Andrea Gonz�lez", "1986/06/09", 62});
	esposas.push_back({"Ana P�rez", "1982/06/26", 43});
	esposas.push_back({"Sof�a P�rez", "2004/01/08", 48});
	esposas.push_back({"Paula Mart�nez", "2004/11/16", 52});
	esposas.push_back({"Andrea Mart�n", "2004/09/06", 69});
	esposas.push_back({"Andrea Fern�ndez", "1997/09/18", 40});
	esposas.push_back({"Luc�a S�nchez", "2006/11/11", 68});
	esposas.push_back({"Laura P�rez", "1992/09/22", 48});
	esposas.push_back({"Claudia Rodr�guez", "1984/12/17", 62});
	esposas.push_back({"Paula Fern�ndez", "1999/07/03", 47});
	esposas.push_back({"Sof�a Mart�nez", "1986/10/28", 48});
	esposas.push_back({"Andrea Garc�a", "2002/02/21", 45});
	esposas.push_back({"Laura Romero", "1994/08/25", 69});
	esposas.push_back({"Claudia P�rez", "1993/05/06", 67});
	esposas.push_back({"Laura S�nchez", "2002/08/13", 63});
	esposas.push_back({"Paula S�nchez", "2002/05/07", 68});
	esposas.push_back({"Sof�a Mart�nez", "1986/01/01", 44});
	esposas.push_back({"Andrea Garc�a", "2006/05/11", 60});
	esposas.push_back({"Elena Fern�ndez", "1985/05/07", 46});
	esposas.push_back({"Ana Mart�n", "1990/05/13", 61});
	esposas.push_back({"Claudia S�nchez", "1985/06/21", 67});
	esposas.push_back({"Julia Romero", "1984/02/03", 64});
	esposas.push_back({"Claudia L�pez", "1999/04/13", 40});
	esposas.push_back({"Paula Garc�a", "2005/04/04", 50});
	esposas.push_back({"Luc�a Romero", "1983/08/01", 42});
	esposas.push_back({"Sof�a Gonz�lez", "1996/12/05", 60});
	esposas.push_back({"Mar�a P�rez", "2000/03/17", 45});
	esposas.push_back({"Mar�a Fern�ndez", "1993/05/22", 61});
	esposas.push_back({"Julia P�rez", "1997/03/07", 66});
	esposas.push_back({"Laura S�nchez", "1992/10/28", 42});
	esposas.push_back({"Paula L�pez", "1986/04/07", 49});
	esposas.push_back({"Paula Fern�ndez", "2004/12/18", 53});
	esposas.push_back({"Laura Romero", "1988/08/17", 60});
	esposas.push_back({"Luc�a L�pez", "1997/06/24", 42});
	esposas.push_back({"Claudia Fern�ndez", "2003/04/04", 66});
	esposas.push_back({"Ana Garc�a", "1988/10/22", 66});
	esposas.push_back({"Mar�a Gonz�lez", "2000/09/15", 64});
	esposas.push_back({"Mar�a Romero", "1999/11/06", 57});
	esposas.push_back({"Laura Mart�nez", "1999/05/22", 40});
	esposas.push_back({"Paula Rodr�guez", "1983/02/07", 43});
	esposas.push_back({"Claudia Rodr�guez", "1990/06/01", 62});
	esposas.push_back({"Ana Gonz�lez", "1984/05/16", 57});
	esposas.push_back({"Elena Romero", "2004/05/09", 61});
	esposas.push_back({"Elena Gonz�lez", "1999/11/25", 50});
	esposas.push_back({"Mar�a Mart�nez", "1991/11/17", 65});
	esposas.push_back({"Andrea L�pez", "2006/01/26", 62});
	esposas.push_back({"Sof�a Gonz�lez", "1994/10/16", 46});
	esposas.push_back({"Mar�a P�rez", "1982/03/05", 47});
	esposas.push_back({"Julia L�pez", "2004/02/01", 47});
	esposas.push_back({"Paula L�pez", "1989/11/18", 55});
	esposas.push_back({"Luc�a P�rez", "1989/06/03", 48});
	esposas.push_back({"Sof�a Mart�nez", "2002/06/21", 65});
	esposas.push_back({"Sof�a P�rez", "1998/02/10", 69});
	esposas.push_back({"Ana Rodr�guez", "2005/09/12", 49});
	esposas.push_back({"Ana Gonz�lez", "1990/02/11", 58});
	esposas.push_back({"Andrea Mart�nez", "1988/02/06", 48});
	esposas.push_back({"Julia S�nchez", "2006/08/11", 43});
	esposas.push_back({"Claudia Mart�nez", "1988/12/10", 67});
	esposas.push_back({"Paula Rodr�guez", "1985/11/02", 46});
	esposas.push_back({"Julia P�rez", "1985/10/19", 41});
	esposas.push_back({"Mar�a Fern�ndez", "1991/07/20", 56});
	esposas.push_back({"Elena Romero", "1994/02/17", 63});
	esposas.push_back({"Julia L�pez", "1986/08/06", 53});
	esposas.push_back({"Paula Fern�ndez", "2001/05/02", 68});
	esposas.push_back({"Luc�a Mart�nez", "1988/06/01", 63});
	esposas.push_back({"Luc�a Mart�n", "2006/06/24", 41});
	esposas.push_back({"Sof�a Mart�n", "1999/07/27", 43});
	esposas.push_back({"Sof�a S�nchez", "1986/09/03", 70});
	esposas.push_back({"Paula Romero", "1986/07/26", 55});
	esposas.push_back({"Elena Gonz�lez", "1988/02/16", 42});
	esposas.push_back({"Elena Fern�ndez", "1994/09/01", 59});
	esposas.push_back({"Paula Garc�a", "1985/09/09", 59});
	esposas.push_back({"Luc�a S�nchez", "1990/12/11", 58});
	esposas.push_back({"Andrea Garc�a", "1987/09/09", 55});
	esposas.push_back({"Julia Gonz�lez", "1985/06/11", 57});
	esposas.push_back({"Andrea Gonz�lez", "1992/07/27", 42});
	esposas.push_back({"Claudia Rodr�guez", "2004/05/11", 66});
	esposas.push_back({"Julia Mart�nez", "2001/05/27", 43});
	esposas.push_back({"Mar�a L�pez", "1982/01/09", 67});
	esposas.push_back({"Julia Rodr�guez", "1998/12/17", 50});
	esposas.push_back({"Ana Gonz�lez", "1997/02/02", 47});
	esposas.push_back({"Elena Rodr�guez", "1997/01/27", 58});
	esposas.push_back({"Julia L�pez", "1988/10/23", 58});
	esposas.push_back({"Claudia Fern�ndez", "1994/04/19", 45});
	esposas.push_back({"Ana Gonz�lez", "1986/02/21", 44});
	esposas.push_back({"Ana L�pez", "1998/01/01", 41});
	esposas.push_back({"Andrea Gonz�lez", "1989/04/13", 64});
	esposas.push_back({"Mar�a Romero", "2004/10/11", 51});
	esposas.push_back({"Ana Rodr�guez", "2002/12/19", 66});
	esposas.push_back({"Luc�a Mart�n", "2002/08/10", 52});
	esposas.push_back({"Luc�a Mart�n", "1985/11/02", 70});
	esposas.push_back({"Claudia Gonz�lez", "1992/07/09", 46});
	esposas.push_back({"Claudia L�pez", "2006/04/04", 59});
	esposas.push_back({"Sof�a L�pez", "1985/04/26", 70});
	esposas.push_back({"Mar�a Garc�a", "1987/08/18", 52});
	esposas.push_back({"Claudia S�nchez", "1987/12/02", 52});
	esposas.push_back({"Andrea Gonz�lez", "1982/12/10", 69});
	esposas.push_back({"Sof�a Romero", "2006/07/15", 63});
	esposas.push_back({"Laura Mart�nez", "2000/09/28", 43});
	esposas.push_back({"Luc�a Romero", "1991/09/17", 52});
	esposas.push_back({"Laura Fern�ndez", "1985/12/04", 58});
	esposas.push_back({"Andrea Gonz�lez", "1987/08/14", 52});
	esposas.push_back({"Mar�a Mart�nez", "2004/02/13", 43});
	esposas.push_back({"Julia Mart�n", "1993/12/26", 57});
	esposas.push_back({"Andrea Gonz�lez", "2004/07/07", 59});
	esposas.push_back({"Andrea Gonz�lez", "2003/03/12", 50});
	esposas.push_back({"Laura P�rez", "1982/01/14", 67});
	esposas.push_back({"Elena Romero", "1993/07/19", 64});
	esposas.push_back({"Paula Mart�n", "1986/04/17", 42});
	esposas.push_back({"Mar�a Mart�nez", "1991/01/23", 52});
	esposas.push_back({"Julia Mart�n", "2004/08/12", 47});
	esposas.push_back({"Ana Mart�n", "2004/11/23", 60});
	esposas.push_back({"Mar�a Garc�a", "1996/09/01", 54});
	esposas.push_back({"Sof�a Rodr�guez", "1985/06/08", 56});
	esposas.push_back({"Claudia Romero", "2006/02/03", 64});
	esposas.push_back({"Luc�a Gonz�lez", "1984/05/07", 64});
	esposas.push_back({"Mar�a Mart�n", "1993/06/17", 50});
	esposas.push_back({"Mar�a L�pez", "1999/12/23", 64});
	esposas.push_back({"Mar�a Mart�nez", "1984/05/14", 64});
	esposas.push_back({"Laura Mart�n", "1998/12/10", 62});
	esposas.push_back({"Laura Fern�ndez", "1989/01/22", 51});
	esposas.push_back({"Andrea S�nchez", "1987/01/20", 54});
	esposas.push_back({"Ana Romero", "1987/08/14", 62});
	esposas.push_back({"Mar�a Romero", "1983/09/13", 60});
	esposas.push_back({"Luc�a L�pez", "2002/02/05", 65});
	esposas.push_back({"Luc�a S�nchez", "1985/09/17", 69});
	esposas.push_back({"Luc�a Fern�ndez", "2006/02/26", 41});
	esposas.push_back({"Laura P�rez", "1983/11/02", 49});
	esposas.push_back({"Sof�a S�nchez", "1990/02/24", 54});
	esposas.push_back({"Luc�a Romero", "1988/12/08", 49});
	esposas.push_back({"Mar�a S�nchez", "1985/01/07", 63});
	esposas.push_back({"Ana Garc�a", "1997/04/19", 41});
	esposas.push_back({"Ana S�nchez", "1996/05/28", 41});
	esposas.push_back({"Elena Gonz�lez", "2003/10/04", 68});
	esposas.push_back({"Luc�a P�rez", "1998/01/07", 51});
	esposas.push_back({"Elena P�rez", "2000/01/23", 52});
	esposas.push_back({"Laura P�rez", "1986/04/03", 56});
	esposas.push_back({"Paula Romero", "1992/06/24", 40});
	esposas.push_back({"Paula Romero", "1986/04/25", 62});
	esposas.push_back({"Mar�a Gonz�lez", "1990/11/06", 63});
	esposas.push_back({"Luc�a L�pez", "1984/03/22", 45});
	esposas.push_back({"Ana L�pez", "1982/10/12", 57});
	esposas.push_back({"Paula P�rez", "1986/02/11", 62});
	esposas.push_back({"Paula S�nchez", "1995/02/23", 54});
	esposas.push_back({"Mar�a Fern�ndez", "1993/10/15", 41});
	esposas.push_back({"Claudia Mart�n", "1988/04/20", 43});
	esposas.push_back({"Luc�a L�pez", "1992/12/11", 62});
	esposas.push_back({"Sof�a Garc�a", "2004/03/23", 48});
	esposas.push_back({"Claudia Mart�nez", "2005/08/20", 56});
	esposas.push_back({"Elena Garc�a", "2000/02/19", 41});
	esposas.push_back({"Luc�a Gonz�lez", "1982/09/22", 59});
	esposas.push_back({"Julia Mart�n", "2003/10/01", 70});
	esposas.push_back({"Laura Romero", "1996/09/15", 46});
	esposas.push_back({"Paula Garc�a", "1987/01/05", 66});
	esposas.push_back({"Ana L�pez", "2004/09/19", 43});
	esposas.push_back({"Claudia L�pez", "2006/02/11", 50});
	esposas.push_back({"Luc�a S�nchez", "2003/04/11", 59});
	esposas.push_back({"Mar�a Fern�ndez", "1984/09/13", 47});
	esposas.push_back({"Paula Fern�ndez", "1984/10/14", 69});
	esposas.push_back({"Sof�a S�nchez", "1987/07/08", 65});
	esposas.push_back({"Sof�a Mart�nez", "2004/11/10", 53});
	esposas.push_back({"Claudia Mart�nez", "2000/11/18", 58});
	esposas.push_back({"Laura Garc�a", "2002/12/25", 47});
	esposas.push_back({"Claudia Gonz�lez", "1990/02/06", 45});
	esposas.push_back({"Mar�a Mart�nez", "1992/03/14", 55});
	esposas.push_back({"Andrea Mart�nez", "1984/08/25", 54});
	esposas.push_back({"Claudia S�nchez", "2005/09/11", 51});
	esposas.push_back({"Laura P�rez", "1986/10/06", 47});
	esposas.push_back({"Paula L�pez", "1994/09/19", 42});
	esposas.push_back({"Sof�a S�nchez", "1985/02/28", 41});
	esposas.push_back({"Andrea L�pez", "2003/11/06", 69});
	esposas.push_back({"Andrea Garc�a", "1984/01/20", 42});
	esposas.push_back({"Luc�a S�nchez", "1995/04/23", 70});
	esposas.push_back({"Andrea P�rez", "1993/05/03", 59});
	esposas.push_back({"Luc�a Garc�a", "2001/11/25", 51});
	esposas.push_back({"Andrea Gonz�lez", "1991/03/20", 68});
	esposas.push_back({"Luc�a Rodr�guez", "2004/11/22", 44});
	esposas.push_back({"Elena Garc�a", "1997/10/25", 64});
	esposas.push_back({"Andrea S�nchez", "1990/11/25", 55});
	esposas.push_back({"Andrea Mart�nez", "1991/10/09", 67});
	esposas.push_back({"Luc�a Romero", "1999/06/19", 43});
	esposas.push_back({"Mar�a Garc�a", "1994/07/04", 46});
	esposas.push_back({"Luc�a L�pez", "1991/01/05", 66});
	esposas.push_back({"Sof�a S�nchez", "1997/01/14", 53});
	esposas.push_back({"Claudia S�nchez", "1995/11/18", 50});
	esposas.push_back({"Luc�a Romero", "1997/03/06", 67});
	esposas.push_back({"Luc�a S�nchez", "1985/02/26", 57});
	esposas.push_back({"Andrea L�pez", "2000/08/23", 67});
	esposas.push_back({"Ana Mart�n", "2003/11/06", 60});
	esposas.push_back({"Julia Rodr�guez", "1984/02/04", 51});
	esposas.push_back({"Ana P�rez", "2006/03/24", 70});
	esposas.push_back({"Mar�a Mart�nez", "1995/09/10", 61});
	esposas.push_back({"Ana Romero", "1998/08/16", 47});
	esposas.push_back({"Mar�a Mart�nez", "1992/12/27", 52});
	esposas.push_back({"Paula Rodr�guez", "1989/06/01", 50});
	esposas.push_back({"Mar�a L�pez", "2004/08/05", 61});
	esposas.push_back({"Ana Rodr�guez", "2005/10/26", 67});
	esposas.push_back({"Luc�a Romero", "1995/09/28", 50});
	esposas.push_back({"Andrea Mart�nez", "2004/05/12", 55});
	esposas.push_back({"Ana Rodr�guez", "1995/06/20", 50});
	esposas.push_back({"Luc�a Fern�ndez", "1994/08/05", 58});
	esposas.push_back({"Paula Fern�ndez", "1985/08/07", 57});
	esposas.push_back({"Elena L�pez", "1989/10/12", 68});
	esposas.push_back({"Claudia S�nchez", "2001/06/11", 58});
	esposas.push_back({"Mar�a P�rez", "1994/02/06", 59});
	esposas.push_back({"Julia Gonz�lez", "1990/07/17", 57});
	esposas.push_back({"Ana Garc�a", "1987/09/03", 58});
	esposas.push_back({"Luc�a Fern�ndez", "1982/10/25", 58});
	esposas.push_back({"Claudia Mart�n", "1991/02/08", 62});
	esposas.push_back({"Sof�a Rodr�guez", "2004/06/10", 67});
	esposas.push_back({"Andrea S�nchez", "1992/04/23", 53});
	esposas.push_back({"Paula Mart�nez", "1999/05/18", 42});
	esposas.push_back({"Andrea Mart�nez", "1985/10/10", 60});
	esposas.push_back({"Claudia P�rez", "2003/11/02", 47});
	esposas.push_back({"Laura P�rez", "1995/03/18", 59});
	esposas.push_back({"Paula Romero", "1987/12/21", 64});
	esposas.push_back({"Julia Fern�ndez", "1991/03/16", 57});
	esposas.push_back({"Elena Fern�ndez", "1996/05/01", 55});
	esposas.push_back({"Andrea S�nchez", "1994/09/09", 68});
	esposas.push_back({"Elena P�rez", "2002/05/20", 63});
	esposas.push_back({"Sof�a Fern�ndez", "1986/07/22", 46});
	esposas.push_back({"Claudia Romero", "1994/11/25", 59});
	esposas.push_back({"Sof�a Rodr�guez", "2002/10/06", 42});
	esposas.push_back({"Elena P�rez", "1990/05/25", 53});
	esposas.push_back({"Sof�a Mart�nez", "1993/03/10", 47});
	esposas.push_back({"Sof�a L�pez", "1984/05/10", 46});
	esposas.push_back({"Luc�a Mart�nez", "1990/07/03", 40});
	esposas.push_back({"Elena Fern�ndez", "2005/08/24", 62});
	esposas.push_back({"Elena S�nchez", "1993/11/21", 47});
	esposas.push_back({"Ana Fern�ndez", "2004/01/20", 58});
	esposas.push_back({"Paula S�nchez", "1992/08/24", 65});
	esposas.push_back({"Paula Rodr�guez", "1997/08/02", 46});
	esposas.push_back({"Andrea L�pez", "2003/03/17", 40});
	esposas.push_back({"Paula L�pez", "1994/08/06", 65});
	esposas.push_back({"Andrea Romero", "2006/11/20", 70});
	esposas.push_back({"Elena Mart�n", "1987/09/10", 52});
	esposas.push_back({"Sof�a Romero", "1984/08/09", 46});
	esposas.push_back({"Claudia S�nchez", "1994/05/09", 66});
	esposas.push_back({"Luc�a Gonz�lez", "1984/07/09", 56});
	esposas.push_back({"Elena Fern�ndez", "2002/02/13", 48});
	esposas.push_back({"Luc�a Garc�a", "1994/08/28", 65});
	esposas.push_back({"Ana S�nchez", "2002/07/18", 42});
	esposas.push_back({"Mar�a L�pez", "1992/11/09", 47});
	esposas.push_back({"Mar�a Gonz�lez", "1996/04/09", 64});
	esposas.push_back({"Mar�a P�rez", "1997/01/10", 58});
	esposas.push_back({"Andrea Mart�nez", "1993/05/08", 68});
	esposas.push_back({"Elena Rodr�guez", "1998/10/17", 48});
	esposas.push_back({"Laura L�pez", "1998/06/09", 58});
	esposas.push_back({"Julia Gonz�lez", "1987/10/07", 60});
	esposas.push_back({"Sof�a Romero", "1985/05/20", 61});
	esposas.push_back({"Paula Gonz�lez", "1998/06/20", 62});
	esposas.push_back({"Claudia Rodr�guez", "1985/02/04", 42});
	esposas.push_back({"Laura S�nchez", "1999/06/18", 40});
	esposas.push_back({"Mar�a Romero", "1988/05/03", 69});
	esposas.push_back({"Andrea Fern�ndez", "1999/11/11", 65});

	
	int* c = listaEsposas(esposas);
	cout << "Lista de esposas: " << c[0] << endl;
	
	verEsposas(esposas);
	
	vector<Arabe> arabes;
	arabes.push_back({"Amir Al-Farsi"});
	arabes.push_back({"Layla Ibrahim"});
	arabes.push_back({"Omar Hassan"});
	arabes.push_back({"Mariam Al-Zarooni"});
	arabes.push_back({"Fatima Al-Mansouri"});
	arabes.push_back({"Khalid Al-Ahmed"});
	arabes.push_back({"Noura Al-Kaabi"});
	arabes.push_back({"Rashid Al-Dossari"});
	arabes.push_back({"Aisha Saleh"});
	arabes.push_back({"Youssef Abdel-Rahman"});
	arabes.push_back({"Ibrahim Al-Dhaheri"});
	arabes.push_back({"Salma Al-Muhairi"});
	arabes.push_back({"Leila Al-Hamidi"});
	arabes.push_back({"Mustafa Abdullah"});
	arabes.push_back({"Yasmin Al-Sheikh"});
	arabes.push_back({"Abdullah Al-Abdulrahman"});
	arabes.push_back({"Ahmed Al-Suwaidi"});
	arabes.push_back({"Lina Al-Mazrouei"});
	arabes.push_back({"Ali Al-Qasimi"});
	arabes.push_back({"Mariam Al-Ketbi"});
	
	verArabes(arabes);
	
	cout << "*" << endl;
	cout << "*" << endl;
	cout << "*" << endl;
	
	// Asignar esposas de manera fija a los �rabes
	asignarEsposasFijas(esposas, arabes);
	for (const auto& arabe : arabes) {
		if (!arabe.esposas.empty()) {
			cout << "Arabe: " << arabe.nombre << " est� casado con:" << endl;
			for (const auto& esposa : arabe.esposas) {
				cout << "  - " << esposa->nombre << endl;
			}
			cout << endl;
		}
	}
	
	// Crear bancos y asignar cuentas
	vector<Banco> bancos(5);
	vector<pair<string, double>> cuentas1 = {{"Amir Al-Farsi", 5.8}, {"Layla Ibrahim", 3.2}, {"Omar Hassan", 7.1}, {"Mariam Al-Zarooni", 6.4}};
	inicializarBanco(bancos[0], "Bank of Arabia", cuentas1);
	
	vector<pair<string, double>> cuentas2 = {{"Fatima Al-Mansouri", 4.5}, {"Khalid Al-Ahmed", 6.3}, {"Noura Al-Kaabi", 3.2}, {"Rashid Al-Dossari", 2.9}};
	inicializarBanco(bancos[1], "Arab National Bank", cuentas2);
	
	vector<pair<string, double>> cuentas3 = {{"Aisha Saleh", 8.9}, {"Youssef Abdel-Rahman", 2.4}, {"Ibrahim Al-Dhaheri", 4.6}, {"Salma Al-Muhairi", 4.5}};
	inicializarBanco(bancos[2], "Saudi British Bank", cuentas3);
	
	vector<pair<string, double>> cuentas4 = {{"Leila Al-Hamidi", 1.7}, {"Mustafa Abdullah", 9.2}, {"Yasmin Al-Sheikh", 6.5}, {"Abdullah Al-Abdulrahman", 7.2}};
	inicializarBanco(bancos[3], "Emirates NBD", cuentas4);
	
	vector<pair<string, double>> cuentas5 = {{"Ahmed Al-Suwaidi", 5.0}, {"Lina Al-Mazrouei", 6.7}, {"Ali Al-Qasimi", 5.1}, {"Mariam Al-Ketbi", 6.0}};
	inicializarBanco(bancos[4], "Qatar National Bank", cuentas5);
	
	for (const auto& banco : bancos) {
		mostrarBanco(banco);
		cout << "*" << endl;
		cout << "*" << endl;
		cout << "*" << endl;
	}
	
	return 0;
}
