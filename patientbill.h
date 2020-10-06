#ifndef PATIENTBILL_H_INCLUDED
#define PATIENTBILL_H_INCLUDED

#include "patient.h"
#include <string>
#include <cstdint>
#include <list>
#include <iterator>

class PatientBilling
{
	
	float treatment_charges=500;
	float bed_charges=200;
	std::list <PatientBase> patient;
	
	public:
	
	void addPatient(std::string name,int id,std::string phone,int age,std::string sex,std::string bloodgrp);
	void viewdetails();
	bool Search(int id);
	void Discharge(int id);
	double Preparebill(int id,int days);
};

#endif
