//this code can be executed on TurboC++ IDE.

#include<iostream.h> 
void main()
{
    int a[15],n,i,beg,end,mid,item; 
    clrscr(); 
    cout<<"Enter the size of array: ";
    cin>>n; 
    cout<<"Enter array elements in sorted order: "; 
    for(i=0;i<n,i++)
        cin>a[i]; 
#include<conio.h> 
    cout<<"Enter search element: "; 
    cin>>item; 
    beg=1; 
    end=n; 
    mid=(beg+end)/2; 
    while(beg<=end && a[mid]!=item) 
    {
        if(a[mid]<item) 
            beg=mid+1; 
        else 
            end=mid-1; 
            mid=(beg+end)/2;
    }
    if(a[mid]==item) 
        cout<<"Element is found at location "<<mid<<endl;
    else 
        cout<<"Element is not found"<<endl; 
    getch();
}            
