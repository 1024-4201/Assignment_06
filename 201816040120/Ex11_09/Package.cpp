#include <iostream>
#include <string>
#include "Package.h"
using namespace std;

Package::Package( string &sN, string &sA, string &sC, string &sS, string &sZC, string &rN, string &rA,
        string &rC, string &Rs, string &rZC,double weigh,double price)/*initial funication*/
        {
            setSenderName(sN);
            setSenderAddress(sA);
            setSenderCity(sC);
            setSenderState(sS);
            setSenderZipCode(sZC);
            setRecipientName(rN);
            setRecipientAddress(rA);
            setRecipientCity(rC);
            setRecipientState(rS);
            setRecipientZipCode(rZC);
            setWeight(weight);
            setPrice(price);
        }
void Package::setSenderName( string &sN)
{
    sendName = sN;
}
string Package::getSenderName() const
{
    return sendName;
}
void Package::setSenderAddress(string &sA)
{
    senderAddress = sA;
}
string Package::getSenderAddress() const
{
    return senderAddress;
}
void Package::setSenderCity(string &sC)
{
    senderCity = sC;
}
string Package::getSenderCity() const
{
    return senderCity;
}
void Package::setSenderState(string &sS)
{
    senderState = sS;
}
string Package::getSenderState() const
{
    return senderState;
}
void Package::setSenderZipCode(string &sZC)
{
    senderZipCode = sZC;
}
string Package::getSenderZipCode() const
{
    return senderZipCode;
}
void Package::setRecipientName(string &rN)
{
    recipientName = rN;
}
string Package::getRecipientName() const
{
    return recipientName;
}
void Package::setRecipientAddress(string &rA)
{
    recipientAddress = rA;
}
string Package::getRecipientAddress() const
{
    return recipientAddress;
}
void Package::setRecipientCity(string &rC)
{
    recipientCity = rC;
}
string Package::getRecipientCity() const
{
    return recipientCity
}
void Package::setRecipientState(string &rS)
{
    recipientState = rS;
}
string Package::getRecipientState() const
{
    return recipientState;
}
void Package::setRecipientZipCode(string &rZC)
{
    recipientZipCode = rZC;
}
string Package::getRecipientZipCode() const
{
    return recipientZipCode;
}
void Package::setWeight(double weight)
{
    this->weight = weight;
}
double Package::getWeight() const
{
    return weight;
}
void Package::setPrice(double price)
{
    this->price = price;
}
double Package::getPrice() const
{
    return price;
}
double Package::calculateCost(double weight, double price)
{
    return weight * price;
}
