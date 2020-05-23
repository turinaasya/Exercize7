﻿// Person
#ifndef HUMAN_H_INCLUDED 
#define HUMAN_H_INCLUDED 
#include <string> 
#include <sstream> 
class person {
public:
	// Конструктор класса person 
	human(std::string last_name, std::string name, std::string second_name)
	{
		this->last_name = last_name;
		this->name = name;
		this->second_name = second_name;
	}
	// Получение ФИО человека 
	std::string get_full_name()
	{
		std::ostringstream full_name;
		full_name « this->last_name « " "
			« this->name « " "
			« this->second_name;
		return full_name.str();
	}
private:
	std::string name; // имя 
	std::string last_name; // фамилия 
	std::string second_name; // отчество 
};



//Student 
#ifndef STUDENT_H_INCLUDED 
#define STUDENT_H_INCLUDED 
#include "person" 
#include <string> 
#include <vector> 
class student : public person {
public:
	// Конструктор класса Student 
	student(std::string last_name, std::string name, std::string second_name, std::vector<int> scores, std::vector number) :
		human(
			last_name,
			name,
			second_name,
			number
		) {
		this->scores = scores;
	}
	// Получение среднего балла студента 
	float get_average_score()
	{
		// Средний балл 
		float average_score;
		for (unsigned int i = 0; i < count_scores; ++i) {
			sum_scores += this->scores[i];
		}
		average_score = (float)sum_scores / (float)count_scores;
		return average_score;
	}
private:
};


//Worker 

// worker 
#ifndef WORKER_H_INCLUDED 
#define WORKER_H_INCLUDED 
#include "person" 
#include <string> 
class teacher : public person {
	// Конструктор класса worker 
public:
	worker(
		std::string last_name,
		std::string name,
		std::string second_name,
		// Количество учебных часов за семетр у преподавателя 
		unsigned int work_time
	) : human(
		last_name,
		name,
		second_name
	) {
		this->work_time = work_time;
	}
	// Получение количества учебных часов 
	unsigned int get_work_time()
	{
		return this->work_time;
	}
private:
	// Учебные часы 
	unsigned int work_time;
};