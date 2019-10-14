# include <iostream>
# include <cmath>
# include <string>

using namespace std;

void aralik(){
	 int i=1, u=1, sum=0,ctr=0;
 cout << "\n\nFind the Perfect numbers and number of Perfect numbers between 1 to 10000:\n";
 cout << "------------------------------------------------------------------------------\n";
cout << "The Perfect numbers are : \n";
   while(i<=10000)
 {                                 
   while(u<=10000)
   {                              
     if(u<i)
     {
      if(i%u==0 )
      sum=sum+u;
     }                         
     u++;
   }                           
   if(sum==i)
   {
       ctr++;
    cout<<i<<" is a Perfect number."<<"\n";
   }
   i++;
   u=1;  sum=0;
 } 
     cout<<"Number of Perfect numbers between 1 to 10000 is: "<<ctr<<"\n";
}


int formul(){
	int asalsayi = 0;
	unsigned int mukemmel;
	
	cout<<"(2 / 3 / 5 / 7 / 11 / 13)"<<endl;
	cout<<"Asal sayinizi giriniz : ";
	cin>>asalsayi;
	
	return mukemmel=pow(2,(asalsayi-1))*(pow(2,asalsayi)-1);
	
}

void enYuksek(){
	cout <<"*******************************************************\n///////////////////////////////////////////////////////\n5416252628436584741265446537439131614085649053903169578\n4603920818387206994158534859198999921056719921919057390\n0802636461592800138276054397462627889030573034455058270\n2839513947520776904492443149486172943511312628083790493\n0462740681717960465867348720992572190569465545299629919\n8234310310926242444635477896354414813917198164416055867\n8809214788667732139875666162471455172696430221755428178\n4254817319611951659855553573937788923405146222324506715\n9791937573728208608782143220522275845375528974762561793\n9517662442631448031344693508520365758479824753602117288\n0403783048602873621259313789994900336673941503747224966\n9840282408060421086900776703952592318946662736152127756\n0353576470795225017385830517102860302123489664785136394\n9928904973292145107505979911456221519899345764984291328\n\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\ \n*******************************************************";
}


int main()
{
	
   int secim;
   cout<<"1-10000 arasindaki mukemmel sayilari gormek icin (1)\nKendi girdiginiz asal sayinin mukemmel sayi karsiligi icin (2) yi tuslayiniz\n15. siradaki mukemmel sayiyi gormek icin (3) u tuslayiniz"<<endl;
   cin>>secim;
   
   if(secim == 1){
   	aralik();
   }
   else if(secim == 2){
   	cout <<formul();
   }
   else if(secim == 3){
	enYuksek();
   }
   else{
   	cout<<"Yanlis tuslama";
   }
}
