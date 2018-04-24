#pragma once
#include <iostream>
#include <Windows.h>
#include "MainForm.h"
#include "Functions.h"
#include <stdio.h>
#include <conio.h>
#include <cstdlib>
#include "tab.h"
#define Z 2
using namespace System;
using namespace System::Windows::Forms;
using namespace Minesweeper;
using namespace std;



int main()
{
	Application::EnableVisualStyles();
	Application::SetCompatibleTextRenderingDefault(false);

	Application::Run(gcnew MainForm());
	//delete tab;
	_getch();
	return 0;
}