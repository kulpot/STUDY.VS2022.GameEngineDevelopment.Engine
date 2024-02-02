


//---------------------- Initial Folder Setup ------------------------
//ref link:https://www.youtube.com/watch?v=pNsqHoE49eg

/*
* --------------setting up TortoiseSVN---------------------------
* 
* It's very important to prepare TortoiseSVN BEFORE creating any of the Visual Studio projects, otherwise it will probably be a nightmare (or at least it was for me).

1) After installing TortoiseSVN, create a repository folder. This has to be an empty folder. I think this folder will store all of the data for different versions of your project.
2) Right click and "SVN Checkout" the folder you plan on saving your Visual Studio project files in. In this video, Jamie uses D:\MyEngine\ProjectFiles. The "URL of repository" is the file that you made in step 1, and the Checkout Directory should be the folder you are trying to Checkout. The format for the URL of repository is "file:///" and then the file path, i.e. "file:///C:/MyEngine/MyRepository/". Note the 3 slashes after "file:".
* 
* I thought there would be more steps, but uh.. after you do these two things, everything should function properly as it does in this video (ability to Add.. and Commit) once you're created the project files.
* 
* ---------------Other Isues----------------------
* 
* I downloaded and installed the Tortoise SVN but I don't appear to have the Add.. option like you do, all the other options are there though. Any ideas?
* 
* "Add" only shows up if you already have a repository. There are a couple ways to fix this. The easiest is to choose "Checkout" instead, drop the URL to your repo, then let that run. Then you will get the "Add" option.
* 
*/
//->ConfigProperties->IntermediateDirectory->$(Configuration)\Tmp\



void main()
{

}






























// Engine.cpp : This file contains the 'main' function. Program execution begins and ends there.
//
//
//#include <iostream>
//
//int main()
//{
//    std::cout << "Hello World!\n";
//}
//
//// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
//// Debug program: F5 or Debug > Start Debugging menu
//
//// Tips for Getting Started: 
////   1. Use the Solution Explorer window to add/manage files
////   2. Use the Team Explorer window to connect to source control
////   3. Use the Output window to see build output and other messages
////   4. Use the Error List window to view errors
////   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
////   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
