#include <iostream>
using namespace std;
int main() {
int d,m,a;
cout<< "Ingrese La Fecha" <<endl;
cin>>d>>m>>a;
if (d>0 && d<=31) {
if (d==31 && (m>0 && m<13))
{	if (m==2 || m==4 || m==6 || m==9 || m==11){ cout<< "Fecha Errada";}else{
	cout<< "Treintaiuno ";}
}
if (d==30 && (m>0 && m<13))
{	if (m==2){cout<< "Fecha Errada"<<endl;}else{
	cout<< "Treinta ";}
}
if ((d==29) && (m>0 && m<13) && (a==1952 || a==1956 || a==1960 || a==1964 || a==1968 || a==1972 || a==1976 || a==1980 || a==1984 || a==1988 || a==1992 || a==1996 || a==2000 || a==2004 || a==2008 || a==2012 || a==2016 || a==2020))
{	if (m==2){ cout<< "Fecha Errada"<<endl;}else{
	cout<< "Veintinueve ";}
}
if (d==28 && (m>0 && m<13))
{	cout<< "Veintiocho ";}
if (d==27 && (m>0 && m<13))
{	cout<< "Veintisiete ";}
if (d==26 && (m>0 && m<13))
{	cout<< "Veintiseis ";}
if (d==25 && (m>0 && m<13))
{	cout<< "Veinticinco ";}
if (d==24 && (m>0 && m<13))
{	cout<< "Veinticuatro ";}
if (d==23 && (m>0 && m<13))
{	cout<< "Veintintres ";}
if (d==22 && (m>0 && m<13))
{	cout<< "Veintidos";}
if (d==21 && (m>0 && m<13))
{	cout<< "Veintiuno ";}
if (d==20 && (m>0 && m<13))
{	cout<< "Veinte ";}
if (d==19 && (m>0 && m<13))
{	cout<< "Diecinueve ";}
if (d==18 && (m>0 && m<13))
{	cout<< "Dieciocho ";}
if (d==17 && (m>0 && m<13))
{	cout<< "Diecisiete ";}
if (d==16 && (m>0 && m<13))
{	cout<< "Dieciseis ";}
if (d==15 && (m>0 && m<13))
{	cout<< "Quince ";}
if (d==14 && (m>0 && m<13))
{	cout<< "Catorce ";}
if (d==13 && (m>0 && m<13))
{	cout<< "Trece ";}
if (d==12 && (m>0 && m<13))
{	cout<< "Doce ";}
if (d==11 && (m>0 && m<13))
{	cout<< "Once ";}
if (d==10 && (m>0 && m<13))
{	cout<< "Diez ";}
if (d==9 && (m>0 && m<13))
{	cout<< "Nueve ";}
if (d==8 && (m>0 && m<13))
{	cout<< "Ocho ";}
if (d==7 && (m>0 && m<13))
{	cout<< "Siete ";}
if (d==6 && (m>0 && m<13))
{	cout<< "Seis ";}
if (d==5 && (m>0 && m<13))
{	cout<< "Cinco ";}
if (d==4 && (m>0 && m<13))
{	cout<< "Cuatro ";}
if (d==3 && (m>0 && m<13))
{	cout<< "Tres ";}
if (d==2 && (m>0 && m<13))
{	cout<< "Dos ";}
if (d==1 && (m>0 && m<13))
{	cout<< "Uno ";}
}else{	cout<< "Fecha Errada"<<endl;}

if (m>=1 && m<=12) {
if (m==1)
{	cout<< "de Enero ";}
if (m==2)
{	if ((d>=1 && d<29) && (a==1952 || a==1956 || a==1960 || a==1964 || a==1968 || a==1972 || a==1976 || a==1980 || a==1984 || a==1988 || a==1992 || a==1996 || a==2000 || a==2004 || a==2008 || a==2012 || a==2016 || a==2020))
		{cout<< "de Febrero ";}
}
if (m==3)
{	cout<< "de Marzo ";}
if (m==4)
{	if (d>=1 && d<=30) 
		{cout<< "de Abril ";}
}
if (m==5)
{	cout<< "de Mayo ";}
if (m==6)
{	if (d>=1 && d<=30)
	{cout<< "de Junio ";}
}
if (m==7)
{	cout<< "de Julio ";}
if (m==8)
{	cout<< "de Agosto ";}
if (m==9)
{	if (d>=1 && d<=30)
	{cout<< "de Septiembre ";}
}
if (m==10)
{	cout<< "de Octubre ";}
if (m==11)
{	if (d>=1 && d<=30)
	{cout<< "de Noviembre ";} 
}
if (m==12)
{	cout<< "de Diciembre ";}
}else{ cout<< "Fecha Errada"<<endl;} 

if (a>=1950 && a<=2020);{
	if (a==2020)
		if ((d>0 && d<=31) && (m>0 && m<13))
	{cout<< "de Dos mil veinte."<<endl;}
	if (a==2019)
		if ((d>0 && d<=31) && (m>0 && m<13))
	{cout<< "de Dos mil diecinueve."<<endl;}
	if (a==2018)	
		if ((d>0 && d<=31) && (m>0 && m<13))
	{cout<< "de Dos mil dieciocho."<<endl;}
	if (a==2017)	
		if ((d>0 && d<=31) && (m>0 && m<13))
	{cout<< "de Dos mil diecisiete."<<endl;}
	if (a==2016)	
		if ((d>0 && d<=31) && (m>0 && m<13))
	{cout<< "de Dos mil dieciseis."<<endl;}
	if (a==2015)	
		if ((d>0 && d<=31) && (m>0 && m<13))
	{cout<< "de Dos mil quince."<<endl;}
	if (a==2014)	
		if ((d>0 && d<=31) && (m>0 && m<13))
	{cout<< "de Dos mil catorce."<<endl;}
	if (a==2013)	
		if ((d>0 && d<=31) && (m>0 && m<13))
	{cout<< "de Dos mil trece."<<endl;}
	if (a==2012)	
		if ((d>0 && d<=31) && (m>0 && m<13))
	{cout<< "de Dos mil doce."<<endl;}
	if (a==2011)	
		if ((d>0 && d<=31) && (m>0 && m<13))
	{cout<< "de Dos mil once."<<endl;}
	if (a==2010)	
		if ((d>0 && d<=31) && (m>0 && m<13))
	{cout<< "de Dos mil diez."<<endl;}
	if (a==2009)	
		if ((d>0 && d<=31) && (m>0 && m<13))
	{cout<< "de Dos mil nueve."<<endl;}
	if (a==2008)	
		if ((d>0 && d<=31) && (m>0 && m<13))
	{cout<< "de Dos mil ocho."<<endl;}
	if (a==2007)	
		if ((d>0 && d<=31) && (m>0 && m<13))
	{cout<< "de Dos mil siete."<<endl;}
	if (a==2006)	
		if ((d>0 && d<=31) && (m>0 && m<13))
	{cout<< "de Dos mil seis."<<endl;}
	if (a==2005)	
	{cout<< "de Dos mil cinco."<<endl;}
		if ((d>0 && d<=31) && (m>0 && m<13))
	if (a==2004)	
	{cout<< "de Dos mil cuatro."<<endl;}
		if ((d>0 && d<=31) && (m>0 && m<13))
	if (a==2003)	
	{cout<< "de Dos mil tres."<<endl;}
		if ((d>0 && d<=31) && (m>0 && m<13))
	if (a==2002)	
	{cout<< "de Dos mil dos."<<endl;}
		if ((d>0 && d<=31) && (m>0 && m<13))
	if (a==2001)	
	{cout<< "de Dos mil uno."<<endl;}
		if ((d>0 && d<=31) && (m>0 && m<13))
	if (a==2000)	
	{cout<< "de Dos mil."<<endl;}
		if ((d>0 && d<=31) && (m>0 && m<13))
	if (a==1999)	
	{cout<< "de Mil novecientos noventa y nueve."<<endl;}
	if (a==1998)	
		if ((d>0 && d<=31) && (m>0 && m<13))
	{cout<< "de Mil novecientos noventa y ocho."<<endl;}
	if (a==1997)	
		if ((d>0 && d<=31) && (m>0 && m<13))
	{cout<< "de Mil novecientos noventa y siete."<<endl;}
	if (a==1996)	
		if ((d>0 && d<=31) && (m>0 && m<13))
	{cout<< "de Mil novecientos noventa y seis."<<endl;}
	if (a==1995)	
		if ((d>0 && d<=31) && (m>0 && m<13))
	{cout<< "de Mil novecientos noventa y cinco."<<endl;}
	if (a==1994)	
		if ((d>0 && d<=31) && (m>0 && m<13))
	{cout<< "de Mil novecientos noventa y cuatro."<<endl;}
	if (a==1993)	
		if ((d>0 && d<=31) && (m>0 && m<13))
	{cout<< "de Mil novecientos noventa y tres."<<endl;}
	if (a==1992)	
		if ((d>0 && d<=31) && (m>0 && m<13))
	{cout<< "de Mil novecientos noventa y dos."<<endl;}
	if (a==1991)	
		if ((d>0 && d<=31) && (m>0 && m<13))
	{cout<< "de Mil novecientos noventa y uno."<<endl;}
	if (a==1990)	
		if ((d>0 && d<=31) && (m>0 && m<13))
	{cout<< "de Mil novecientos noventa."<<endl;}
	if (a==1989)	
		if ((d>0 && d<=31) && (m>0 && m<13))
	{cout<< "de Mil novecientos ochenta y nueve."<<endl;}
	if (a==1988)	
		if ((d>0 && d<=31) && (m>0 && m<13))
	{cout<< "de Mil novecientos ochenta y ocho."<<endl;}
	if (a==1987)	
		if ((d>0 && d<=31) && (m>0 && m<13))
	{cout<< "de Mil novecientos ochenta y siete."<<endl;}
	if (a==1986)	
		if ((d>0 && d<=31) && (m>0 && m<13))
	{cout<< "de Mil novecientos ochenta y seis."<<endl;}
	if (a==1985)	
		if ((d>0 && d<=31) && (m>0 && m<13))
	{cout<< "de Mil novecientos ochenta y cinco."<<endl;}
	if (a==1984)	
		if ((d>0 && d<=31) && (m>0 && m<13))
	{cout<< "de Mil novecientos ochenta y cuatro."<<endl;}
	if (a==1983)	
		if ((d>0 && d<=31) && (m>0 && m<13))
	{cout<< "de Mil novecientos ochenta y tres."<<endl;}
	if (a==1982)	
		if ((d>0 && d<=31) && (m>0 && m<13))
	{cout<< "de Mil novecientos ochenta y dos."<<endl;}
	if (a==1981)	
		if ((d>0 && d<=31) && (m>0 && m<13))
	{cout<< "de Mil novecientos ochenta y uno."<<endl;}
	if (a==1980)	
		if ((d>0 && d<=31) && (m>0 && m<13))
	{cout<< "de Mil novecientos ochenta."<<endl;}
	if (a==1979)	
		if ((d>0 && d<=31) && (m>0 && m<13))
	{cout<< "de Mil novecientos setenta y nueve."<<endl;}
	if (a==1978)	
		if ((d>0 && d<=31) && (m>0 && m<13))
	{cout<< "de Mil novecientos setenta y ocho."<<endl;}
	if (a==1977)	
		if ((d>0 && d<=31) && (m>0 && m<13))
	{cout<< "de Mil novecientos setenta y siete."<<endl;}
	if (a==1976)	
		if ((d>0 && d<=31) && (m>0 && m<13))
	{cout<< "de Mil novecientos setenta y seis."<<endl;}
	if (a==1975)	
		if ((d>0 && d<=31) && (m>0 && m<13))
	{cout<< "de Mil novecientos setenta y cinco."<<endl;}
	if (a==1974)	
		if ((d>0 && d<=31) && (m>0 && m<13))
	{cout<< "de Mil novecientos setenta y cuatro."<<endl;}
	if (a==1973)	
		if ((d>0 && d<=31) && (m>0 && m<13))
	{cout<< "de Mil novecientos setenta y tres."<<endl;}
	if (a==1972)	
		if ((d>0 && d<=31) && (m>0 && m<13))
	{cout<< "de Mil novecientos setenta y dos."<<endl;}
	if (a==1971)	
		if ((d>0 && d<=31) && (m>0 && m<13))
	{cout<< "de Mil novecientos setenta y uno."<<endl;}
	if (a==1970)	
		if ((d>0 && d<=31) && (m>0 && m<13))
	{cout<< "de Mil novecientos setenta."<<endl;}
	if (a==1969)	
		if ((d>0 && d<=31) && (m>0 && m<13))
	{cout<< "de Mil novecientos sesenta y nueve."<<endl;}
	if (a==1968)	
		if ((d>0 && d<=31) && (m>0 && m<13))
	{cout<< "de Mil novecientos sesenta y ocho."<<endl;}
	if (a==1967)	
		if ((d>0 && d<=31) && (m>0 && m<13))
	{cout<< "de Mil novecientos sesenta y siete."<<endl;}
	if (a==1966)	
		if ((d>0 && d<=31) && (m>0 && m<13))
	{cout<< "de Mil novecientos sesenta y seis."<<endl;}
	if (a==1965)	
		if ((d>0 && d<=31) && (m>0 && m<13))
	{cout<< "de Mil novecientos sesenta y cinco."<<endl;}
	if (a==1964)	
		if ((d>0 && d<=31) && (m>0 && m<13))
	{cout<< "de Mil novecientos sesenta y cuatro."<<endl;}
	if (a==1963)	
		if ((d>0 && d<=31) && (m>0 && m<13))
	{cout<< "de Mil novecientos sesenta y tres."<<endl;}
	if (a==1962)	
		if ((d>0 && d<=31) && (m>0 && m<13))
	{cout<< "de Mil novecientos sesenta y dos."<<endl;}
	if (a==1961)	
		if ((d>0 && d<=31) && (m>0 && m<13))
	{cout<< "de Mil novecientos sesenta y uno."<<endl;}
	if (a==1960)	
		if ((d>0 && d<=31) && (m>0 && m<13))
	{cout<< "de Mil novecientos sesenta."<<endl;}
	if (a==1959)	
		if ((d>0 && d<=31) && (m>0 && m<13))
	{cout<< "de Mil novecientos cincuenta y nueve."<<endl;}
	if (a==1958)	
		if ((d>0 && d<=31) && (m>0 && m<13))
	{cout<< "de Mil novecientos cincuenta y ocho."<<endl;}
	if (a==1957)	
		if ((d>0 && d<=31) && (m>0 && m<13))
	{cout<< "de Mil novecientos cincuenta y siete."<<endl;}
	if (a==1956)	
		if ((d>0 && d<=31) && (m>0 && m<13))
	{cout<< "de Mil novecientos cincuenta y seis."<<endl;}
	if (a==1955)	
		if ((d>0 && d<=31) && (m>0 && m<13))
	{cout<< "de Mil novecientos cincuenta y cinco."<<endl;}
	if (a==1954)	
		if ((d>0 && d<=31) && (m>0 && m<13))
	{cout<< "de Mil novecientos cincuenta y cuatro."<<endl;}
	if (a==1953)	
		if ((d>0 && d<=31) && (m>0 && m<13))
	{cout<< "de Mil novecientos cincuenta y tres."<<endl;}
	if (a==1952)	
		if ((d>0 && d<=31) && (m>0 && m<13))
	{cout<< "de Mil novecientos cincuenta y dos."<<endl;}
	if (a==1951)	
		if ((d>0 && d<=31) && (m>0 && m<13))
	{cout<< "de Mil novecientos cincuenta y uno."<<endl;}
	if (a==1950)	
		if ((d>0 && d<=31) && (m>0 && m<13))
	{cout<< "de Mil novecientos ciencuenta."<<endl;}
}
 
return 0;
}
