// Copyright (c) Microsoft. All rights reserved.

#pragma once

#include "SetAccountPicture.g.h"
#include "MainPage.xaml.h"

namespace AccountPictureName
{
    [Windows::Foundation::Metadata::WebHostHidden]
    public ref class SetAccountPicture sealed
    {
    public:
        SetAccountPicture();
    protected:
        virtual void OnNavigatedTo(Windows::UI::Xaml::Navigation::NavigationEventArgs^ e) override;
        virtual void OnNavigatedFrom(Windows::UI::Xaml::Navigation::NavigationEventArgs^ e) override;

    private:
        SDKTemplate::MainPage^ rootPage;
        void SetImageButton_Click(Platform::Object^ sender, Windows::UI::Xaml::RoutedEventArgs^ e);
        void SetVideoButton_Click(Platform::Object^ sender, Windows::UI::Xaml::RoutedEventArgs^ e);
        void PictureChanged(Platform::Object^ sender, Platform::Object^ e);

        Windows::Foundation::EventRegistrationToken accountPictureChangedToken;
    };
}
