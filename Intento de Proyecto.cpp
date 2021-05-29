#include<iostream>
#include<string.h>
#include<windows.h>
#include<conio.h>
#include<stdio.h>
#include<stdlib.h>
#include<cstdlib>
#include<fstream>

using namespace std;

struct registro{
	int cod1, bandera, estado;
	char cod[15];
	string nombre, marca, cantidad, precio, descripcion;
};
struct ventas{
	int bandera, estado;
	char cod[15];
	string nombre, marca, cantidad, precio, descripcion;
	float total;
};
void gotoxy(int x,int y){  
      HANDLE hcon;  
      hcon = GetStdHandle(STD_OUTPUT_HANDLE);  
      COORD dwPos;  
      dwPos.X = x;  
      dwPos.Y= y;  
      SetConsoleCursorPosition(hcon,dwPos);  
 } 
 
registro 
registro1[8];
ventas
ventas1[8];

void ENTRADA(),SALIDA();
void Insertar(), Buscar(), Actualizar(),Eliminar(), Leer(),Insertar1(), Buscar1(), Actualizar1(),Eliminar1(), Leer1();
main(){
	system("color 0D");
	Sleep(200);
	
	gotoxy(24,5); cout<<("U"); Sleep(60);
	gotoxy(28,5); cout<<("U"); Sleep(60);
	gotoxy(29,5); cout<<("U"); Sleep(80);
	gotoxy(30,5); cout<<("U"); Sleep(80);
	gotoxy(35,5); cout<<("M"); Sleep(80);
	gotoxy(36,5); cout<<("M"); Sleep(80);
	gotoxy(43,5); cout<<("M"); Sleep(80);
	gotoxy(44,5); cout<<("M"); Sleep(80);
	gotoxy(47,5); cout<<("G"); Sleep(80);
	gotoxy(48,5); cout<<("G"); Sleep(80);
	gotoxy(49,5); cout<<("G"); Sleep(80);
	gotoxy(50,5); cout<<("G"); Sleep(80);
	gotoxy(51,5); cout<<("G"); Sleep(80);
	
	Sleep(200);
	gotoxy(24,6); cout<<("U"); Sleep(80);
	gotoxy(28,6); cout<<("U"); Sleep(80);
	gotoxy(29,6); cout<<("U"); Sleep(80);
	gotoxy(30,6); cout<<("U"); Sleep(80);
	gotoxy(35,6); cout<<("M"); Sleep(80);
	gotoxy(37,6); cout<<("M"); Sleep(80);
	gotoxy(42,6); cout<<("M"); Sleep(80);
	gotoxy(44,6); cout<<("M"); Sleep(80);
	gotoxy(47,6); cout<<("G"); Sleep(80);
	
	Sleep(200);
	gotoxy(24,7); cout<<("U"); Sleep(80);
	gotoxy(28,7); cout<<("U"); Sleep(80);
    gotoxy(29,7); cout<<("U"); Sleep(80);
    gotoxy(30,7); cout<<("U"); Sleep(80);
	gotoxy(35,7); cout<<("M"); Sleep(80);
	gotoxy(38,7); cout<<("M"); Sleep(80);
	gotoxy(41,7); cout<<("M"); Sleep(80);
	gotoxy(44,7); cout<<("M"); Sleep(80);
	gotoxy(47,7); cout<<("G"); Sleep(80);
	gotoxy(48,7); cout<<("G"); Sleep(60);
	gotoxy(49,7); cout<<("G"); Sleep(60);
	gotoxy(50,7); cout<<("G"); Sleep(60);
	gotoxy(51,7); cout<<("G"); Sleep(60);
	
	Sleep(100);
	gotoxy(24,8); cout<<("U"); Sleep(80);
	gotoxy(28,8); cout<<("U"); Sleep(80);
	gotoxy(29,8); cout<<("U"); Sleep(80);
	gotoxy(30,8); cout<<("U"); Sleep(80);
	gotoxy(35,8); cout<<("M"); Sleep(80);
	gotoxy(39,8); cout<<("M"); Sleep(80);
	gotoxy(40,8); cout<<("M"); Sleep(80);
	gotoxy(44,8); cout<<("M"); Sleep(80);
	gotoxy(47,8); cout<<("G"); Sleep(80);
	gotoxy(51,8); cout<<("G"); Sleep(80);

	Sleep(200);
	gotoxy(24,9); cout<<("U"); Sleep(80);
	gotoxy(28,9); cout<<("U"); Sleep(80);
	gotoxy(29,9); cout<<("U"); Sleep(80);
	gotoxy(30,9); cout<<("U"); Sleep(80);
	gotoxy(35,9); cout<<("M"); Sleep(80);
	gotoxy(44,9); cout<<("M"); Sleep(80);
	gotoxy(47,9); cout<<("G"); Sleep(80);
	gotoxy(51,9); cout<<("G"); Sleep(80);


	Sleep(100);
	gotoxy(24,10); cout<<("U"); Sleep(80);
	gotoxy(25,10); cout<<("U"); Sleep(80);
	gotoxy(26,10); cout<<("U"); Sleep(80);
	gotoxy(27,10); cout<<("U"); Sleep(80);
	gotoxy(28,10); cout<<("U"); Sleep(80);
	gotoxy(29,10); cout<<("U"); Sleep(80);
	gotoxy(30,10); cout<<("U"); Sleep(80);
	gotoxy(35,10); cout<<("M"); Sleep(80);
	gotoxy(44,10); cout<<("M"); Sleep(80);
	gotoxy(47,10); cout<<("G"); Sleep(80);
	gotoxy(48,10); cout<<("G"); Sleep(80);
	gotoxy(49,10); cout<<("G"); Sleep(80);
	gotoxy(50,10); cout<<("G"); Sleep(80);
	gotoxy(51,10); cout<<("G"); Sleep(80);
	
	Sleep(300);
	gotoxy(28,14); cout<<("I"); Sleep(80);
	gotoxy(29,14); cout<<("N"); Sleep(80);
	gotoxy(30,14); cout<<("G"); Sleep(80);
	gotoxy(31,14); cout<<("E"); Sleep(80);
	gotoxy(32,14); cout<<("N"); Sleep(80);
	gotoxy(33,14); cout<<("I"); Sleep(80);
	gotoxy(34,14); cout<<("E"); Sleep(80);
	gotoxy(35,14); cout<<("R"); Sleep(80);
	gotoxy(36,14); cout<<("I"); Sleep(80);
	gotoxy(37,14); cout<<("A"); Sleep(80);
	gotoxy(38,14); cout<<(""); Sleep(80);

	Sleep(300);	
	gotoxy(39,14); cout<<("E"); Sleep(80);
	gotoxy(40,14); cout<<("N"); Sleep(80);
	gotoxy(41,14); cout<<(""); Sleep(80);
	gotoxy(42,14); cout<<("S"); Sleep(80);
	gotoxy(43,14); cout<<("I"); Sleep(80);
	gotoxy(44,14); cout<<("S"); Sleep(80);
	gotoxy(45,14); cout<<("T"); Sleep(80);
	gotoxy(46,14); cout<<("E"); Sleep(80);
	gotoxy(47,14); cout<<("M"); Sleep(80);
	gotoxy(48,14); cout<<("A"); Sleep(80);
	gotoxy(49,14); cout<<("S"); Sleep(80);
	gotoxy(50,14); cout<<(" "); Sleep(80);
	
		Sleep(300);	
	gotoxy(35,15); cout<<("P"); Sleep(80);
	gotoxy(36,15); cout<<("R"); Sleep(80);
	gotoxy(37,15); cout<<("O"); Sleep(80);
	gotoxy(38,15); cout<<("G"); Sleep(80);
	gotoxy(39,15); cout<<("R"); Sleep(80);
	gotoxy(40,15); cout<<("A"); Sleep(80);
	gotoxy(41,15); cout<<("M"); Sleep(80);
	gotoxy(42,15); cout<<("A"); Sleep(80);
	gotoxy(43,15); cout<<("C"); Sleep(80);
	gotoxy(44,15); cout<<("I"); Sleep(80);
	gotoxy(45,15); cout<<("O"); Sleep(80);
	gotoxy(46,15); cout<<("N"); Sleep(80);
	gotoxy(47,15); cout<<(" "); Sleep(80);
	gotoxy(48,15); cout<<("I"); Sleep(80);
		Sleep(300);	
	gotoxy(35,17); cout<<("C"); Sleep(80);
	gotoxy(36,17); cout<<("A"); Sleep(80);
	gotoxy(37,17); cout<<("R"); Sleep(80);
	gotoxy(38,17); cout<<("G"); Sleep(80);
	gotoxy(39,17); cout<<("A"); Sleep(80);
	gotoxy(40,17); cout<<("N"); Sleep(80);
	gotoxy(41,17); cout<<("D"); Sleep(80);
	gotoxy(42,17); cout<<("O"); Sleep(80);
	gotoxy(43,17); cout<<(" "); Sleep(500);
	gotoxy(44,17); cout<<("."); Sleep(500);
	gotoxy(45,17); cout<<("."); Sleep(500);
	gotoxy(46,17); cout<<("."); Sleep(500);
	
	gotoxy(43,17); cout<<("  "); Sleep(500);
	gotoxy(44,17); cout<<("."); Sleep(500);
	gotoxy(45,17); cout<<("."); Sleep(500);
	gotoxy(46,17); cout<<("."); Sleep(500);
	
	gotoxy(35,17); cout<<(" LISTO  "); Sleep(80);
	
	system("color 0a");Beep(500,500);
	system("color b0");Beep(500,500);
	system("color 3f");Beep(900,500);
	Beep(1100,500);
	system("color 0a");
	Beep(784,500);
	Sleep(1000);		
	//////////////////////////
	char login[15], contra[8];	//usuario y contraseña empiezan
 do{
	system("cls");
	system("color f3");
	gotoxy(35,1);cout<<"------------LIBRERIA LA BENDICION-------------\n";
	gotoxy(35,2);cout<<"============================================\n";
	gotoxy(35,3);cout<<"=           ingrese Usuario                 =\n"<<endl;
	gotoxy(35,4);cout<<"=                                           =\n";
	gotoxy(35,5);cout<<":::::::::::::::::::::::::::::::::::::::::::::\n";
	gotoxy(35,6);cout<<"=           ingrese contraseña              =\n"<<endl;
	gotoxy(35,7);cout<<"=                                           =\n";
	gotoxy(35,8);cout<<":::::::::::::::::::::::::::::::::::::::::::::\n";
    gotoxy(50,4);cin>>login;
	gotoxy(50,7);cin>>contra;	
	if ((strcmp(login,"administrador")==0)&&(strcmp(contra,"123")==0)){
	
		//-----------------------------------------------------------------------
		
	system("color f3");
	gotoxy(35,11);cout<<"\n\n\t\t BIENVENIDO AL SISTEMA "<<endl;
	int o=255,x=219;
	
	int i;
	gotoxy(35,13);cout<<"\n\t\t\t\tCargando...\n"<<endl;
	cout<<"\t\t      ";
	for(i=1; i<16; i++){
		Sleep(300);
		cout<<char(x);
		cout<<char(o);
	}
	}	
	else {
		cout<<"\n                                          Usuario y Contraseña incorrectos\n"; 	system("pause");
	}	
	}while((((strcmp(login,"administrador")==0)&&(strcmp(contra,"123")==0)))==0); 
	//usuario y contraseña terminan
	int elecc, opc1;
	char elec[8], opc[8];
	do{
	system("cls");
	system("color 6E");
		gotoxy(15,6);cout<<"+-+-+-+-+-+-+-+- MENU -+-+-+-+-+-+-+-+"<<endl;
		gotoxy(25,8);cout<<" 	|   1. ENTRADAS.              |"<<endl;
		gotoxy(25,9);cout<<" 	|   2. SALIDAS.               |"<<endl;
		gotoxy(25,10);cout<<"	|   3. SALIR.                 |"<<endl;	
		gotoxy(15,11);cout<<"+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+"<<endl;
		gotoxy(25,13);cout<<"¿ QUE DESEA HACER?  ";cin>>opc;
		opc1=atoi(opc);
		switch(opc1){
			case 1:{
				ENTRADA();
				break;
				}
			case 2:{					
				SALIDA();
				}
			case 3:{
				break;
			}
				default:{
					gotoxy(25,15);cout<<"SELECCION INCORRECTA, INTENTELO DE NUEVO"<<endl;
					getch();
				}
			}
		}while(opc1!=2);
}
void ENTRADA(){
	int opc1;
	char opc[5];
	do{
		system("cls");
		system("color F0");
		gotoxy(15,5);cout<<"+-+-+-+-+-+-+-+-ENTRADAS-+-+-+-+-+-+-+-+"<<endl;
		gotoxy(25,7);cout<<"|  1. GUARDAR             |"<<endl;
		gotoxy(25,8);cout<<"|  2. BUSCAR              |"<<endl;
		gotoxy(25,9);cout<<"|  3. ACTUALIZAR           |"<<endl;
		gotoxy(25,10);cout<<"|  4. ELIMINAR            |"<<endl;
		gotoxy(25,11);cout<<"|  5. LEER    |"<<endl;
		gotoxy(25,12);cout<<"|  6. REGRESAR            |"<<endl;
		gotoxy(15,14);cout<<"+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+"<<endl;
		gotoxy(25,15);cout<<"¿QUE DESEA HACER? "; cin>>opc;
		opc1=atoi(opc);
		cin.ignore();
		switch(opc1){
			case 1:{
				Insertar();
				break;
			}
			case 2:{
				Buscar();
				break;
			}
			case 3:{
				Actualizar();
				break;
			}
			case 4:{
			    Eliminar();
				break;
			}
			case 5:{
				Leer();
				break;
			}
			case 6:{
				break;
			}
			default:{
				gotoxy(25,16);cout<<"La opcion ingresada NO EXISTE..."<<endl;
				getch();
			}
		}
	}while(opc1!=6);
}
//----------------------------------------------------------------------------------------------
void SALIDA(){
	int opc1;
	char opc[5];
	do{
		system("cls");
		system("color F0");
		gotoxy(15,5);cout<<"+-+-+-+-+-+-+-+-SALIDA-+-+-+-+-+-+-+-+"<<endl;
		gotoxy(25,7);cout<<"|  1. GUARDAR             |"<<endl;
		gotoxy(25,8);cout<<"|  2. BUSCAR              |"<<endl;
		gotoxy(25,9);cout<<"|  3. ACTUALIZAR           |"<<endl;
		gotoxy(25,10);cout<<"|  4. ELIMINAR            |"<<endl;
		gotoxy(25,11);cout<<"|  5. LEER    |"<<endl;
		gotoxy(25,12);cout<<"|  6. REGRESAR            |"<<endl;
		gotoxy(15,14);cout<<"+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+"<<endl;
		gotoxy(25,15);cout<<"¿QUE DESEA HACER? "; cin>>opc;
		opc1=atoi(opc);
		cin.ignore();
		switch(opc1){
			case 1:{
				Insertar1();
				break;
			}
			case 2:{
				Buscar1();
				break;
			}
			case 3:{
				Actualizar1();
				break;
			}
			case 4:{
			    Eliminar1();
				break;
			}
			case 5:{
				Leer1();
				break;
			}
			case 6:{
				break;
			}
			default:{
				gotoxy(25,16);cout<<"La opcion ingresada NO EXISTE..."<<endl;
				getch();
			}
		}
	}while(opc1!=6);
}
//++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++
void Insertar(){
	ofstream documento;
	documento.open("BASE DE DATOS.txt",ios::app);
	int cod1, cant;
	char cant1[5];
	string nombre, marca, cantidad, precio, descripcion;
	system("cls");
	gotoxy(15,6);cout<<"+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+";
	gotoxy(15,10);cout<<"+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+";
	gotoxy(25,8);cout<<" Cuantos datos ingresara?  "; cin>>cant1;
	cant=atoi(cant1);
	cin.ignore();
	system("cls");
	for(int i=0; i<cant; i++){
		registro1[i].bandera=1;
		system("cls");
		gotoxy(15,3);cout<<"+-+-+-+-+-+-+- INGRESO DE PRODUCTOS -+-+-+-+-+-+-+";
		gotoxy(15,26);cout<<"+-+-+-+-+-+-+-+-+-+-+-+-+-+-+--+-+-+-+-+-+-+-+-+";
		gotoxy(20,5);cout<<"CODIGO: ";
		gotoxy(25,6);cin>>registro1[i].cod; cin.ignore();
		gotoxy(20,8);cout<<"NOMBRE DEL PRODUCTO";
		gotoxy(25,9);getline(cin,registro1[i].nombre);
		gotoxy(20,11);cout<<"MARCA DEL PRODUCTO";
		gotoxy(25,12);getline(cin,registro1[i].marca);
		gotoxy(20,14);cout<<"CANTIDAD";
		gotoxy(25,15);getline(cin,registro1[i].cantidad);
		gotoxy(20,17);cout<<"PRECIO  Q.";
		gotoxy(25,18);getline(cin,registro1[i].precio);
		gotoxy(20,20);cout<<"DESCRIPCION";
		gotoxy(25,21);getline(cin,registro1[i].descripcion);
		gotoxy(20,27);cout<<"EL REGISTRO SE HA GUARDADO CON EXITO..."<<endl;
		getch();
		}
		for(int i=0; i<cant; i++){
		documento<<registro1[i].cod<<","<<registro1[i].nombre<<","<<registro1[i].marca<<","<<registro1[i].cantidad<<","<<registro1[i].precio<<","<<registro1[i].descripcion<<","<<endl;	
		}
		documento.close();
	}
//++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++
void Buscar(){
	int contador=0, codigo, cod2, cantidad;
	float precio;
	char nombre[40],marca[40], linea[225],descripcion[1000];
	bool bandera=false;
	ifstream Leer;
	system("cls");
	Leer.open("BASE DE DATOS.txt");
	gotoxy(15,6);cout<<"+-+-+-+-+-+-+-+-+-+- BUSCADOR -+-+-+-+-+-+-+-+-+-+-+";
	gotoxy(20,8);cout<<"BUSCARDOR DE PRODUCTOS "<<endl;
	gotoxy(25,9);cout<<"INGRESE CODIGO DEL PRODUCTO: ";cin>>codigo;
	gotoxy(15,11);cout<<"+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+";
	Leer.getline(linea,sizeof(linea));
	while(!Leer.eof()){
	for(int i=0;i<7;i++){
			char *arreglo;
			if(i==0){
				arreglo=strtok(linea,",");
				cod2=atoi(arreglo);
			}else if(i==1){
				arreglo=strtok(NULL,",");
				strcpy(nombre,arreglo);
			}else if(i==2){
				arreglo=strtok(NULL,",");
				strcpy(marca,arreglo);
			}else if(i==3){
				arreglo=strtok(NULL,",");
				cantidad=atoi(arreglo);
			}else if(i==4){
				arreglo=strtok(NULL,",");
				precio=atoi(arreglo);
			}else if(i==5){
				arreglo=strtok(NULL,",");
				strcpy(descripcion,arreglo);
			}
		}
	if(codigo==cod2){
	bandera=true;
	gotoxy(15,13);cout<<"+-+-+-+-+-+-+-+ BUSQUEDA ENCONTRADA +-+-+-+-+-+-+-+ ";
	gotoxy(15,23);cout<<"+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+"<<endl;
	gotoxy(25,15);cout<<"CODIGO: "<<codigo;
	gotoxy(25,16);cout<<"NOMBRE: "<<nombre;
	gotoxy(25,17);cout<<"MARCA: "<<marca;
	gotoxy(25,18);cout<<"CANTIDAD: "<<cantidad;
	gotoxy(25,19);cout<<"PRECIO: "<<precio;
	gotoxy(25,20);cout<<"DESCRIPCION: "<<descripcion;
	gotoxy(20,24);cout<<"SE HA REALIZADO LA BUSQUEDA EXITOSA..."<<endl;
	Leer.getline(linea,sizeof(linea));

}else{
	Leer.getline(linea,sizeof(linea));
}
	}
		if(bandera==false){
			gotoxy(25,12);cout<<"LA OPCION INGRESADA NO EXISTE..."<<endl;
		}
	Leer.close();
	system("pause");		
}
//+++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++
void Actualizar(){
	int codigo,cod2,cantidad;
	float precio;
	char nombre[100], marca[100], descripcion[1000];
	string nNombre,nMarca, nDescripcion, nPrecio, nCantidad;
	bool bandera=false;
	ifstream Leer;
	ofstream Temp;
	//int cont=0;
	system("cls");
	Leer.open("BASE DE DATOS.txt");
	Temp.open("BASE_TEMP.txt");
	gotoxy(50,10);cout<<"INGRESE CODIGO A MODIFICAR: ";
	cin>>codigo;
	cin.ignore();
	gotoxy(50,12);cout<<"NUEVO NOMBRE: ";
	getline(cin,nNombre);
	gotoxy(50,14);cout<<"NUEVA MARCA: ";
	getline(cin,nMarca);
	gotoxy(50,16);cout<<"NUEVO PRECIO: ";
	getline(cin,nPrecio);
	gotoxy(50,18);cout<<"NUEVA CANTIDAD: ";
	getline(cin,nCantidad);
	gotoxy(50,20);cout<<"NUEVA DESCRIPCION: ";
	getline(cin,nDescripcion);
	char linea[200];
	Leer.getline(linea,sizeof(linea));
	while(!Leer.eof()){
		for(int i=0;i<5;i++){
			char *puntero;
			if(i==0){
				puntero=strtok(linea,",");
				cod2=atoi(puntero);
			}
			if(i==1){
				puntero=strtok(NULL,",");
				strcpy(nombre,puntero);
			}
			if(i==2){
				puntero=strtok(NULL,",");
				strcpy(marca,puntero);
			}
			if(i==3){
				puntero=strtok(NULL,",");
				precio=atoi(puntero);
			}
			if(i==4){
				puntero=strtok(NULL,",");
				cantidad=atoi(puntero);
			}
			if(i==5){
				puntero=strtok(NULL,",");
				strcpy(descripcion,puntero);
			}
		}
		if(codigo==cod2){
			bandera=true;
			gotoxy(50,24);cout<<"--------------------------------"<<endl;
			gotoxy(50,26);cout<<"NUEVO NOMBRE: "<<nNombre<<endl;
			gotoxy(50,28);cout<<"NUEVA MARCA: "<<nMarca<<endl;
			gotoxy(50,30);cout<<"NUEVO PRECIO: "<<nPrecio<<endl;
			gotoxy(50,32);cout<<"NUEVA CANTIDAD: "<<nCantidad<<endl;
			gotoxy(50,34);cout<<"NUEVA DESCRIPCION: "<<nDescripcion<<endl;
			gotoxy(50,36);cout<<"--------------------------------"<<endl;
			gotoxy(50,36);cout<<"Registro Modificado"<<endl;
			cout<<endl;	
			Leer.getline(linea,sizeof(linea));
			Temp<<cod2<<", "<<nNombre<<", "<<nMarca<<", "<<nPrecio<<", "<<nCantidad<<", "<<nDescripcion<<endl;
		}else{
			Leer.getline(linea,sizeof(linea));
			Temp<<cod2<<", "<<nombre<<", "<<marca<<", "<<precio<<", "<<cantidad<<", "<<descripcion<<endl;
		}
		if(bandera==false){
			gotoxy(50,12);cout<<"El registro no existe"<<endl;
		}
	}
	Leer.close();
	Temp.close();
	remove("BASE DE DATOS.txt");
	rename("BASE_TEMP.txt","BASE DE DATOS.txt");
	system("pause");
}
//------------------------------------------------------------------------------
void Leer(){
	int contador=0, acum=0, codigo,cod2,cantidad;
	float precio;
	char nombre[40],linea[225], marca[30], descripcion[30];
	ifstream Leer;
	system("cls");
	Leer.open("BASE DE DATOS.txt");
	Leer.getline(linea,sizeof(linea));
	while(!Leer.eof()){
		for(int i=0;i<7;i++){
			char *arreglo;
			if(i==0){
				arreglo=strtok(linea,",");
				cod2=atoi(arreglo);
			}else if(i==1){
				arreglo=strtok(NULL,",");
				strcpy(nombre,arreglo);
			}else if(i==2){
				arreglo=strtok(NULL,",");
				strcpy(marca,arreglo);
			}else if(i==3){
				arreglo=strtok(NULL,",");
				cantidad=atoi(arreglo);
			}else if(i==4){
				arreglo=strtok(NULL,",");
				precio=atoi(arreglo);
			}else if(i==5){
				arreglo=strtok(NULL,",");
				strcpy(descripcion,arreglo);
			}
		}
	acum=acum+1;
	cout<<"REGISTRO No.:"<<acum<<endl;
	cout<<"________________________________________________"<<endl;
	cout<<"CODIGO: "<<cod2<<endl;
	cout<<"NOMBRE: "<<nombre<<endl;
	cout<<"MARCA: "<<marca<<endl;
	cout<<"CANTIDAD: "<<cantidad<<endl;
	cout<<"PRECIO: "<<precio<<endl;
	cout<<"DESCRIPCION: "<<descripcion<<endl;
	cout<<"________________________________________________"<<endl;	
	cout<<endl;	
	Leer.getline(linea,sizeof(linea));
	contador++;
	}
		cout<<"Se hizo una cuenta de:  "<<contador<<" registros."<<endl;
	Leer.close();
	system("pause"); 
	}
//*****************************************************************************
void Eliminar(){
		int contador=0, codigo,cod2,cantidad;
		float precio;
		char nombre[40],linea[225],marca[40],descripcion[100];
		bool bandera=false;
		ifstream Leer;
		ofstream Temp;
		system("cls");
		Leer.open("BASE DE DATOS.txt");
		Temp.open("BASE_TEMP.txt");
		gotoxy(15,6);cout<<"+-+-+-+-+-+-+-+ ELIMINACION DE DATOS +-+-+-+-+-+-+-+ ";
		gotoxy(15,10);cout<<"+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+"<<endl;
		gotoxy(25,8);cout<<"¿QUE CODIGO DESEA ELIMINAR? ";cin>>codigo;
		Leer.getline(linea,sizeof(linea));
		while(!Leer.eof()){
			for(int i=0;i<5;i++){
				char *arreglo;
				if(i==0){
					arreglo=strtok(linea,",");
					cod2=atoi(arreglo);
				}else if(i==1){
					arreglo=strtok(NULL,",");
					strcpy(nombre,arreglo);
				}else if(i==2){
					arreglo=strtok(NULL,",");
					strcpy(marca,arreglo);
				}else if(i==3){
					arreglo=strtok(NULL,",");
					cantidad=atoi(arreglo);
				}else if(i==4){
					arreglo=strtok(NULL,",");
					precio=atoi(arreglo);
				}else if(i==5){
					arreglo=strtok(NULL,",");
					strcpy(descripcion,arreglo);
				}
			}
			if(codigo==cod2){
			bandera=true;
		gotoxy(15,12);cout<<"+-+-+-+-+-+-+- DATOS DEL CLIENTE ELIMINADO -+-+-+-+-+-+"<<endl;
		gotoxy(20,14);cout<<"CODIGO: "<<cod2<<endl;
		gotoxy(20,15);cout<<"NOMBRE: "<<nombre;
		gotoxy(20,16);cout<<"MARCA: "<<marca;
		gotoxy(20,17);cout<<"CANTIDAD: "<<cantidad;
		gotoxy(20,18);cout<<"PRECIO: "<<precio<<endl;
		gotoxy(20,19);cout<<"DESCRIPCION: "<<descripcion<<endl;
		cout<<endl;
		gotoxy(55,20);cout<<"CLIENTE ELIMINADO CON EXITO..."<<endl;
		cout<<endl;	
		Leer.getline(linea,sizeof(linea));
	
	}else{
		Leer.getline(linea,sizeof(linea));
		Temp<<cod2<<","<<nombre<<","<<marca<<","<<cantidad<<","<<precio<<","<<descripcion<<endl;
	}
		}
		if(bandera==false){
		gotoxy(25,12);cout<<"OPCION INCORRECTA. Vuelve a intentarlo"<<endl;
		}
		Leer.close();
		Temp.close();
		remove("BASE DE DATOS.txt");
		rename("BASE_TEMP.txt","BASE DE DATOS.txt");
		system("pause");
}
//+++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++

/////*************************************************************************************
//OPCION DE SALIDA
void Insertar1(){
ofstream archivo; 
archivo.open("SALIDA.txt",ios::app);/*Abriendo el archivo txt "el ios::app sirve para identificar si existe el archivo
sino, esa funcion crea el archivo"*/	
int num,canti,cod2, ventacanti, ventaspreci, ventatotal, cont=0;
float preci;
system("cls");
gotoxy(30,9);cout<<"---------------------------------------"<<endl;
gotoxy(30,10);cout<<"CUANTAS VENTAS INGRESARA: ";
cin>>num;
system("cls");
	for(int i=0; i<num; i++){
	ventas1[i].estado=1;
	string nombre,apellido,direccion;
	system("cls");
		gotoxy(30,11);cout<<"---------------------------------------"<<endl;
		gotoxy(30,12);cout<<"INGRESE NÚMERO DE FACTURA: ";
		cin>>ventas1[i].cod;
		cod2=atoi(ventas1[i].cod);
		cin.ignore(); /*Para que despues de ingresar el codigo el programa no se salte los siguientes datos a pedir*/
		gotoxy(30,13);cout<<"INGRESE NOMBRE DEL PRODUCTO: ";
		getline(cin,ventas1[i].nombre);
		gotoxy(30,14);cout<<"INGRESE MARCA: ";
		getline(cin,ventas1[i].marca);
			do{
				gotoxy(30,15);cout<<"INGRESE CANTIDAD: ";
				gotoxy(48,15);getline(cin,ventas1[i].cantidad);
				canti=atoi(ventas1[i].cantidad.c_str());
				cont++;
					if(cont>=1){
						gotoxy(50,15);cout<<"                                ";
					}if(atoi(ventas1[i].cantidad.c_str())!=0){
						gotoxy(48,15);cout<<canti;
					}
			}while(canti==0);
			do{
				gotoxy(30,16);cout<<"INGRESE PRECIO: ";
				gotoxy(48,16);getline(cin,ventas1[i].precio); /*El getline lee datos de tipo cadena como lo el tipo de dato string*/
				preci=atoi(ventas1[i].precio.c_str());  //CONVERTIR STRING A INT
				cont++; /*contador*/
				if(cont>=1){
					gotoxy(50,16);cout<<"                                     ";
				}if(atoi(ventas1[i].precio.c_str())!=0){
					gotoxy(48,16);cout<<preci;
				}
			}while(preci==0);
			gotoxy(30,17);cout<<"INGRESE DESCRIPCION ";
			getline(cin,ventas1[i].descripcion);
			gotoxy(30,18);cout<<"EL TOTAL A CANCELAR ES DE : ";
			ventas1[i].total=canti*preci;
			cout<<ventas1[i].total<<endl;
			gotoxy(30,19);cout<<"---------------------------------------"<<endl;
			gotoxy(30,20);cout<<"Producto Registrado"<<endl;
			getch();
		}
		for(int i=0; i<num; i++){
				archivo<<ventas1[i].cod<<","<<ventas1[i].nombre<<","<<ventas1[i].marca<<","<<ventas1[i].cantidad<<","<<ventas1[i].precio<<","<<ventas1[i].descripcion<<","<<ventas1[i].total<<endl;	
		}
		archivo.close();
}
	//++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++
void Buscar1(){
	int contador=0, codigo, cod2, cantidad;
	float precio,total;
	char nombre[40],marca[40], linea[225],descripcion[1000];
	bool bandera=false;
	ifstream Leer;
	system("cls");
	Leer.open("SALIDA.txt");
	gotoxy(15,6);cout<<"+-+-+-+-+-+-+-+-+-+- BUSCADOR -+-+-+-+-+-+-+-+-+-+-+";
	gotoxy(20,8);cout<<"BUSCARDOR DE PRODUCTOS "<<endl;
	gotoxy(25,9);cout<<"INGRESE CODIGO DEL PRODUCTO: ";cin>>codigo;
	gotoxy(15,11);cout<<"+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+";
	Leer.getline(linea,sizeof(linea));
	while(!Leer.eof()){
	for(int i=0;i<7;i++){
			char *arreglo;
			if(i==0){
				arreglo=strtok(linea,",");
				cod2=atoi(arreglo);
			}else if(i==1){
				arreglo=strtok(NULL,",");
				strcpy(nombre,arreglo);
			}else if(i==2){
				arreglo=strtok(NULL,",");
				strcpy(marca,arreglo);
			}else if(i==3){
				arreglo=strtok(NULL,",");
				cantidad=atoi(arreglo);
			}else if(i==4){
				arreglo=strtok(NULL,",");
				precio=atoi(arreglo);
			}else if(i==5){
				arreglo=strtok(NULL,",");
				strcpy(descripcion,arreglo);
			}else if(i==5){
				arreglo=strtok(NULL,",");
				total=atoi(arreglo);
			}
		}
	if(codigo==cod2){
	bandera=true;
	gotoxy(15,13);cout<<"+-+-+-+-+-+-+-+ BUSQUEDA ENCONTRADA +-+-+-+-+-+-+-+ ";
	gotoxy(15,23);cout<<"+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+"<<endl;
	gotoxy(25,15);cout<<"CODIGO: "<<codigo;
	gotoxy(25,16);cout<<"NOMBRE: "<<nombre;
	gotoxy(25,17);cout<<"MARCA: "<<marca;
	gotoxy(25,18);cout<<"CANTIDAD: "<<cantidad;
	gotoxy(25,19);cout<<"PRECIO: "<<precio;
	gotoxy(25,20);cout<<"DESCRIPCION: "<<descripcion;
	gotoxy(25,21);cout<<"TOTAL: "<<total;
	gotoxy(20,24);cout<<"SE HA REALIZADO LA BUSQUEDA EXITOSA..."<<endl;
	Leer.getline(linea,sizeof(linea));
}else{
	Leer.getline(linea,sizeof(linea));
}
	}
		if(bandera==false){
			gotoxy(25,12);cout<<"LA OPCION INGRESADA NO EXISTE..."<<endl;
		}
	Leer.close();
	system("pause");		
}
//+++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++
	void Actualizar1(){
	int contador=0, codigo,cod1,cantidad,precio;
	char linea[250], cantidad1[50], precio1[50],nombre[50],marca[50],descripcion[150];
	string nombre1,marca1,descripcion1;
	bool bandera=false;
	ifstream Leer;
	ofstream Temporal;
	system("cls");
	Leer.open("SALIDAS.txt");
	Temporal.open("SAL.txt");
	gotoxy(15,6);cout<<"+-+-+-+-+-+-+-+ ACTUALIZACION  DE DATOS +-+-+-+-+-+-+-+ ";
	gotoxy(15,11);cout<<"+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+"<<endl;
	gotoxy(20,8);cout<<"INGRESE NUMERO DE FACTURA A MODIFICAR: "; 
	gotoxy(25,9);cin>>codigo; cin.ignore();
	gotoxy(15,13);cout<<"____________________________________________________";
	gotoxy(15,33);cout<<"____________________________________________________";
	gotoxy(20,15);cout<<"NUEVO NOMBRE: ";
	gotoxy(25,16);getline(cin,nombre1);
	gotoxy(20,18);cout<<"NUEVA MARCA: ";
	gotoxy(25,19);getline(cin,marca1);
	gotoxy(20,21);cout<<"NUEVA CANTIDAD: ";
	gotoxy(25,22);cin>> cantidad1;
				      cantidad= atoi (cantidad1);
	gotoxy(20,24);cout<<"NUEVO PRECIO: ";
	gotoxy(25,25);cin>> precio1;
						cantidad= atoi (precio1);
	gotoxy(20,27);cout<<"NUEVA DESCRIPCION: ";
	gotoxy(25,28);getline(cin,descripcion1);
	cout<<descripcion1<<endl;
	cin.ignore ();
	Leer.getline(linea,sizeof(linea));
	while(!Leer.eof()){
	for(int i=0;i<5;i++){
			char *arreglo;
			if(i==0){
				arreglo=strtok(linea,",");
				cod1=atoi(arreglo);
			}else if (i==1){
				arreglo=strtok(NULL,",");
				strcpy(nombre,arreglo);
			}else if (i==2){
				arreglo=strtok(NULL,",");
				strcpy(marca,arreglo);
			}else if(i==3){
				arreglo=strtok(NULL,",");
				cantidad=atoi(arreglo);
			}else if(i==4){
				arreglo=strtok(NULL,",");
				precio=atoi(arreglo);
			}else if (i==5){
				arreglo=strtok(NULL,",");
				strcpy(descripcion,arreglo);
			}
		}
		if(codigo==cod1){
		bandera=true;
			system("cls");
	gotoxy(25,17);cout<<"NOMBRE MODIFICADO: "<<nombre1<<endl;
	gotoxy(25,18);cout<<"MARCA MODIFICADA: "<<marca1<<endl;
	gotoxy(25,19);cout<<"CANTIDAD MODIFICADA: "<<cantidad1<<endl;
	gotoxy(25,20);cout<<"PRECIO MODIFICADO: "<<precio1<<endl;
	gotoxy(25,21);cout<<"DESCRIPCION MODIFICADA: "<<descripcion1<<endl;
	gotoxy(30,24);cout<<"REGISTRO MODIFICADO CON EXITO"<<endl;
	cout<<endl;	
	Leer.getline(linea,sizeof(linea));
	Temporal<<cod1<<","<<nombre1<<","<<marca1<<","<<cantidad1<<","<<precio1<<","<<descripcion1<<endl;
}else{
	Leer.getline(linea,sizeof(linea));
	Temporal<<cod1<<","<<nombre<<","<<marca<<","<<cantidad<<","<<precio<<","<<descripcion<<endl;
	}
		if(bandera==false){
			gotoxy(25,15);cout<<"+++++ CODIGO DE REGISTRO INVALIDO +++++"<<endl;
		}
	Leer.close();
	Temporal.close();
	remove("SALIDAS.txt");
	rename("SAL.txt","BASE DE DATOS.txt");
	system("pause");
}
}
//+++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++
void Eliminar1(){
	int contador=0, codigo,cod1,cantidad1, precio1, precio, cantidad;
	char nombre[40],linea[225],marca[40],descripcion[100];
	bool bandera=false;
	ifstream Leer;
	ofstream Temporal;
	system("cls");
	Leer.open("SALIDAS.txt");
	Temporal.open("BASE_TEMP.txt");
	gotoxy(15,6);cout<<"+-+-+-+-+-+-+-+ ELIMINACION DE DATOS +-+-+-+-+-+-+-+ ";
	gotoxy(15,10);cout<<"+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+"<<endl;
	gotoxy(25,8);cout<<"¿QUE CODIGO DESEA ELIMINAR? ";cin>>codigo;
	Leer.getline(linea,sizeof(linea));
	while(!Leer.eof()){
		for(int i=0;i<4;i++){
			char *arreglo;
			if(i==0){
				arreglo=strtok(linea,",");
				cod1=atoi(arreglo);
			}else if(i==1){
				arreglo=strtok(NULL,",");
				strcpy(nombre,arreglo);
			}else if(i==2){
				arreglo=strtok(NULL,",");
				strcpy(marca,arreglo);
			}else if(i==3){
				arreglo=strtok(NULL,",");
				cantidad1=atoi(arreglo);
			}else if(i==4){
				arreglo=strtok(NULL,",");
				precio1=atoi(arreglo);
			}else if(i==5){
				arreglo=strtok(NULL,",");
				strcpy(descripcion,arreglo);
			}
			
		}
		if(codigo==cod1){
		bandera=true;
	gotoxy(15,12);cout<<"+-+-+-+-+-+-+- DATOS DEL CLIENTE ELIMINADO -+-+-+-+-+-+"<<endl;
	gotoxy(20,14);cout<<"CODIGO: "<<cod1<<endl;
	gotoxy(20,15);cout<<"NOMBRE: "<<nombre;
	gotoxy(20,16);cout<<"MARCA: "<<marca;
	gotoxy(20,17);cout<<"CANTIDAD: "<<cantidad1;
	gotoxy(20,18);cout<<"PRECIO: "<<precio1<<endl;
	gotoxy(20,19);cout<<"DESCRIPCION: "<<descripcion<<endl;
	cout<<endl;
	gotoxy(55,20);cout<<"CLIENTE ELIMINADO CON EXITO..."<<endl;
	cout<<endl;	
	Leer.getline(linea,sizeof(linea));
}else{
	Leer.getline(linea,sizeof(linea));
	Temporal<<cod1<<","<<nombre<<","<<marca<<","<<cantidad1<<","<<precio1<<","<<descripcion<<endl;
}
	}
	if(bandera==false){
	gotoxy(25,12);cout<<"OPCION INCORRECTA. Vuelve a intentarlo"<<endl;
	}
	Leer.close();
	Temporal.close();
	remove("SALIDAS.txt");
	rename("SAL.txt","BASE DE DATOS.txt");
	system("pause");		
}
//+++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++
void Leer1(){
	int contador=0, acum=0, codigo,cod1,cantidad1, precio, precio1;
	char nombre[40],linea[225], marca[30], descripcion[30];
	ifstream Leer;
	system("cls");
	Leer.open("SALIDAS.txt");
	Leer.getline(linea,sizeof(linea));
	while(!Leer.eof()){
		for(int i=0;i<7;i++){
			char *arreglo;
			if(i==0){
				arreglo=strtok(linea,",");
				cod1=atoi(arreglo);
			}else if(i==1){
				arreglo=strtok(NULL,",");
				strcpy(nombre,arreglo);
			}else if(i==2){
				arreglo=strtok(NULL,",");
				strcpy(marca,arreglo);
			}else if(i==3){
				arreglo=strtok(NULL,",");
				cantidad1=atoi(arreglo);
			}else if(i==4){
				arreglo=strtok(NULL,",");
				precio1=atoi(arreglo);
			}else if(i==5){
				arreglo=strtok(NULL,",");
				strcpy(descripcion,arreglo);
			}
		}
	acum=acum+1;
	cout<<"REGISTRO No.:"<<acum<<endl;
	cout<<"________________________________________________"<<endl;
	cout<<"CODIGO: "<<cod1<<endl;
	cout<<"NOMBRE: "<<nombre<<endl;
	cout<<"MARCA: "<<marca<<endl;
	cout<<"CANTIDAD: "<<cantidad1<<endl;
	cout<<"PRECIO: "<<precio1<<endl;
	cout<<"DESCRIPCION: "<<descripcion<<endl;
	cout<<"________________________________________________"<<endl;	
	cout<<endl;	
	Leer.getline(linea,sizeof(linea));
	contador++;
	}
		cout<<"Se hizo una cuenta de:  "<<contador<<" registros."<<endl;
	Leer.close();
	system("pause"); 
	}  
