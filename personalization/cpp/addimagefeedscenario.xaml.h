//*********************************************************
//
// Copyright (c) Microsoft. All rights reserved.
//
//*********************************************************

//
// AddImageFeedScenario.xaml.h
// Declaration of the AddImageFeedScenario class
//

#pragma once
#include "AddImageFeedScenario.g.h"

namespace Personalization
{
    public ref class AddImageFeedScenario sealed
    {
    public:
        AddImageFeedScenario();

    private:
        void SetDefaultButton_Click(Platform::Object^ sender, Windows::UI::Xaml::RoutedEventArgs^ e);
        void RemoveFeedButton_Click(Platform::Object^ sender, Windows::UI::Xaml::RoutedEventArgs^ e);
    };
}
