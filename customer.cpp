#include<iostream>
using namespace std;

void issue()
{
    cout<<"\n-------Enquiry Check-------\n";
    cout<<"\nAny enquiry from customer? (yes/no)\n";
    string issue;
    cin>>issue;
    if(issue == "yes")
    {
        cout<<"\nCustomer's enquiry is being processed\n";
        cout<<"\nCustomer's enquiry has been answered.\n";
        // feedback();
    }
    else
    {
        cout<<"\nChecking on sales issues\n";
        // salesIssue();
    }
}

int main()
{
    cout<<"\n-------Welcome to the Customer Support System!-------\n";
    cout<<"\nCustomer found issue\n";
    cout<<"\nCustomer contacting customer service\n";
    issue();
}