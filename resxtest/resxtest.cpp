// resxtest.cpp : This file contains the 'main' function. Program execution begins and ends there.
//
int main()
{
	System::Resources::ResourceManager^ theResource_ =
		gcnew System::Resources::ResourceManager(L"resxtest.Resource",
			System::Reflection::Assembly::GetExecutingAssembly());
	System::Globalization::CultureInfo^ ci = gcnew System::Globalization::CultureInfo("ja-JP");
	
	System::Windows::Forms::MessageBox::Show(theResource_->GetString("aaa", ci));

	return 0;
}
