//Logika AND Tanpa Penyederhanaan

#include <iostream>

using namespace std;

int main()
{
   //Defenisi Variabel dan Tipe data
   int Juara, Hapal; 
   //1 -- Benar
   //0 -- Tidak Benar
   
   //Masukkan Input 
   cout<<" Apakah Bayu Mendapatkan Juara di Kelas : "; cin>>Juara;
   cout<<" Apakah Bayu Hafal Juz 30 : "; cin>>Hapal;
   
   // Kondisi Nested if
   if (Juara == 1)
   {
        //Kondisi 1 - True  
        if (Hapal == 1)
        {
            //Kondisi 2 - True
            cout<<" Bayu Mendapatkan Hadiah Sepeda";
        }
        else
        {
            //Kondisi 2 - False
            cout<<" Bayu Tidak Mendapatkan Hadiah Sepeda";
        }
        
   }
   else 
   {
       //Kondisi 1 - False
        if (Hapal == 1)
        {
            //Kondisi 2 - True
              cout<<" Bayu Tidak Mendapatkan Hadiah Sepeda";
        }
        else
        {
            //Kondisi 2 - False
             cout<<" Bayu Tidak Mendapatkan Hadiah Sepeda";
            
        }
       
   } 

    return 0;
}

//Logika AND Dengan Penyederhanaan


#include <iostream>

using namespace std;

int main()
{
   //Defenisi Variabel dan Tipe data
   int Juara, Hapal; 
   //1 -- Benar
   //0 -- Tidak Benar
   
   //Masukkan Input 
   cout<<" Apakah Bayu Mendapatkan Juara di Kelas : "; cin>>Juara;
   cout<<" Apakah Bayu Hafal Juz 30 : "; cin>>Hapal;
   
   // Kondisi Nested if
   if (Juara == 1)
   {
        //Kondisi 1 - True  
        if (Hapal == 1)
        {
            //Kondisi 2 - True
            cout<<" Bayu Mendapatkan Hadiah Sepeda";
        }
        else
        {
            //Kondisi 2 - False
            cout<<" Bayu Tidak Mendapatkan Hadiah Sepeda";
        }
        
   }
   else 
   {
       //Kondisi 1 - False
       cout<<" Bayu Tidak Mendapatkan Hadiah Sepeda";
   }
   

    return 0;
}



