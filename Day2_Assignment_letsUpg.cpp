#include <iostream.h>
using namespace std;



struct student {
    
    int roll_no;
    float marks;
} ;
int main(){
struct student *ptr;
  int details;
  cout<<"Enter the details: "<<endl;
  cin>>details;

  // Memory allocation for details structures
  ptr = (struct student *)malloc(details * sizeof(struct student));
  cout<<"Enter roll_no and marks:\n";
  for (int i = 0; i < details; ++i) {
	  cin>>(ptr + i)->roll_no>>(ptr + i)->marks;
  }

  cout<<"Displaying Information:\n";
  for (int i = 0; i < details; ++i) {
    cout<< (ptr + i)->roll_no<<" "<<(ptr + i)->marks<<endl;
  }

  free(ptr);

  return 0;
}
