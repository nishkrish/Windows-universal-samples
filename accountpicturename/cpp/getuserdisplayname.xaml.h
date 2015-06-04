// Copyright (c) Microsoft. All rights reserved.

#pragma once

#include "GetUserDisplayName.g.h"
#include "MainPage.xaml.h"

namespace AccountPictureName
{
    [Windows::Foundation::Metadata::WebHostHidden]
    public ref class GetUserDisplayName sealed
    {
    public:
        GetUserDisplayName();

    private:
        SDKTemplate::MainPage^ rootPage;
        void GetDisplayNameButton_Click(Platform::Object^ sender, Windows::UI::Xaml::RoutedEventArgs^ e);
    };
}
