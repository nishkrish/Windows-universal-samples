// Copyright (c) Microsoft. All rights reserved.

#pragma once

#include "GetUserFirstAndLastName.g.h"
#include "MainPage.xaml.h"

namespace AccountPictureName
{
    [Windows::Foundation::Metadata::WebHostHidden]
    public ref class GetUserFirstAndLastName sealed
    {
    public:
        GetUserFirstAndLastName();
    private:
        SDKTemplate::MainPage^ rootPage;
        void GetFirstNameButton_Click(Platform::Object^ sender, Windows::UI::Xaml::RoutedEventArgs^ e);
        void GetLastNameButton_Click(Platform::Object^ sender, Windows::UI::Xaml::RoutedEventArgs^ e);
    };
}
