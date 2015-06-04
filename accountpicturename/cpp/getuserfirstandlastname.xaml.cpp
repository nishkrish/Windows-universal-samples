// Copyright (c) Microsoft. All rights reserved.

#include "pch.h"
#include "GetUserFirstAndLastName.xaml.h"

using namespace SDKTemplate;
using namespace AccountPictureName;

using namespace concurrency;
using namespace Platform;
using namespace Windows::Foundation;
using namespace Windows::Foundation::Collections;
using namespace Windows::System::UserProfile;
using namespace Windows::UI::Xaml;
using namespace Windows::UI::Xaml::Controls;
using namespace Windows::UI::Xaml::Controls::Primitives;
using namespace Windows::UI::Xaml::Data;
using namespace Windows::UI::Xaml::Input;
using namespace Windows::UI::Xaml::Media;
using namespace Windows::UI::Xaml::Navigation;

// The Blank Page item template is documented at http://go.microsoft.com/fwlink/?LinkId=234238

GetUserFirstAndLastName::GetUserFirstAndLastName() : rootPage(MainPage::Current)
{
    InitializeComponent();
}

void GetUserFirstAndLastName::GetFirstNameButton_Click(Platform::Object^ sender, Windows::UI::Xaml::RoutedEventArgs^ e)
{
    if (UserInformation::NameAccessAllowed)
    {
        create_task(UserInformation::GetFirstNameAsync()).then([this](String^ firstName)
        {
            if (firstName != nullptr)
            {
                rootPage->NotifyUser("First name = " + firstName, NotifyType::StatusMessage);
            }
            else
            {
                rootPage->NotifyUser("No first name was returned.", NotifyType::ErrorMessage);
            }
        });
    }
    else
    {
        rootPage->NotifyUser("Access to name disabled by Privacy Setting or Group Policy.", NotifyType::ErrorMessage);
    }
}

void GetUserFirstAndLastName::GetLastNameButton_Click(Platform::Object^ sender, Windows::UI::Xaml::RoutedEventArgs^ e)
{
    if (UserInformation::NameAccessAllowed)
    {
        create_task(UserInformation::GetLastNameAsync()).then([this](String^ lastName)
        {
            if (lastName != nullptr)
            {
                rootPage->NotifyUser("Last name = " + lastName, NotifyType::StatusMessage);
            }
            else
            {
                rootPage->NotifyUser("No last name was returned.", NotifyType::ErrorMessage);
            }
        });
    }
    else
    {
        rootPage->NotifyUser("Access to name disabled by Privacy Setting or Group Policy.", NotifyType::ErrorMessage);
    }
}
