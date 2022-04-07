		 		   
#include<iostream>
#include<vector>
#include<string.h>
#include<iterator>
using namespace std;

int main(){
     	vector<string> vector1;  
	vector<string> vector2;  
	vector<string>::iterator ptr1;  
	vector<string>::iterator ptr2;
	vector<string> output;
	int a;
	cout<<"Number of elements vector 1 and vector 2: ";
	cin>>a;
	cout<<"Elements for Vector 1: ";
	for(int i=0;i<a;i++){	
		        string s1;
		        cin>>s1;
		        vector1.push_back(s1);
	     }
	cout<<"Elemnents for vector 2: ";
	for(int i=0;i<a;i++){	
		        string s1;
		        cin>>s1;
		        vector2.push_back(s1);
	     }
	     
	     
	for (ptr1 = vector1.begin(); ptr1 < vector1.end(); ptr1++){
			            for (ptr2 = vector2.begin(); ptr2 < vector2.end(); ptr2++){
					      		if(*ptr2==*ptr1)
							vector2.erase(ptr2);
					   }
					   }

        for (ptr1 = vector1.begin(); ptr1 < vector1.end(); ptr1++){
						output.push_back(*ptr1);
	      }
	for (ptr2 = vector2.begin(); ptr2 < vector2.end(); ptr2++){
				                output.push_back(*ptr2);
	      }
	     cout<<"\n\n";
	     cout<<"output: \n";
	    
	for (ptr2 = output.begin(); ptr2 < output.end(); ptr2++){
                         cout<<*ptr2<<"\n";
    		}

}
