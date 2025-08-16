#include<iostream>
using namespace std;

void simulateIuuse()
{
    cout<<"\n-------Simulating Issue-------\n";
    cout<<"\nAny simulated issue from customer? (yes/no)\n";
    string simu;
    cin>>simu;
    if(simu == "yes")
    {
        cout<<"\nMoving on the error report\n";
        // error();
    }
    else
    {
        cout<<"\nNo simulated issue found.\n";
        cout<<"\nContact customer for further assistance.\n";
        simulateIuuse();
    }
}

void newIssue()
{
    cout<<"\n-------New Issue Check-------\n";
    cout<<"\nAny new issue from customer? (yes/no)\n";
    string neww;
    cin>>neww;
    if(neww == "yes")
    {
        cout<<"\nResolve the new issue\n";
    }
    else
    {
        cout<<"\nTest the new issue\n";
    }
    simulateIuuse();
}

void technicalIssue()
{
    cout<<"\n-------Technical Issue Check-------\n";
    cout<<"\nAny technical issue from customer? (yes/no)\n";
    string tech;
    cin>>tech;
    if(tech == "yes")
    {
        cout<<"\nRedirecting to technical support...\n";
        cout<<"\nTechnical support is handling the issue.\n";
        cout<<"\nTechnical issue has been resolved.\n";
        cout<<"\nConfirming with customer...\n";
        cout<<"\nCustomer is satisfied with the resolution.\n";
        // feedback();
    }
    else
    {
        cout<<"\nChecking on sales issue\n";
        newIssue();
    }
}

void salesIssue()
{
    cout<<"\n-------Sales Issue Check-------\n";
    cout<<"\nAny sales issue from customer? (yes/no)\n";
    string sales;
    cin>>sales;
    if(sales == "yes")
    {
        cout<<"\nRedirecting to sales department...\n";
        cout<<"\nSales department is handling the issue.\n";
        cout<<"\nSales issue has been resolved.\n";
        cout<<"\nConfirming with customer...\n";
        cout<<"\nCustomer is satisfied with the resolution.\n";
        // feedback();
    }
    else
    {
        cout<<"\nChecking on technical issue\n";
        technicalIssue();
    }
}

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
        salesIssue();
    }
}

int main()
{
    cout<<"\n-------Welcome to the Customer Support System!-------\n";
    cout<<"\nCustomer found issue\n";
    cout<<"\nCustomer contacting customer service\n";
    issue();
}