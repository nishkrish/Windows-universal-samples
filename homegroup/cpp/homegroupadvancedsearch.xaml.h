// Copyright (c) Microsoft. All rights reserved.

#pragma once

#include "HomeGroupAdvancedsearch.g.h"
#include "MainPage.xaml.h"

namespace HomeGroup
{
    [Windows::Foundation::Metadata::WebHostHidden]
    public ref class HomeGroupAdvancedSearch sealed
    {
    public:
        HomeGroupAdvancedSearch();
    protected:
        virtual void OnNavigatedTo(Windows::UI::Xaml::Navigation::NavigationEventArgs^ e) override;
    private:
        SDKTemplate::MainPage^ rootPage;
        void Default_Click(Platform::Object^ sender, Windows::UI::Xaml::RoutedEventArgs^ e);
        void SetButtons();
    };
}
