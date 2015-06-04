// Copyright (c) Microsoft. All rights reserved.

#pragma once

#include "GetAccountPicture.g.h"
#include "MainPage.xaml.h"

namespace AccountPictureName
{
    [Windows::Foundation::Metadata::WebHostHidden]
    public ref class GetAccountPicture sealed
    {
    public:
        GetAccountPicture();
    private:
        SDKTemplate::MainPage^ rootPage;
        void GetSmallImageButton_Click(Platform::Object^ sender, Windows::UI::Xaml::RoutedEventArgs^ e);
        void GetLargeImageButton_Click(Platform::Object^ sender, Windows::UI::Xaml::RoutedEventArgs^ e);
        void GetVideoButton_Click(Platform::Object^ sender, Windows::UI::Xaml::RoutedEventArgs^ e);
        void HideImageAndVideoControls();
    };
}
