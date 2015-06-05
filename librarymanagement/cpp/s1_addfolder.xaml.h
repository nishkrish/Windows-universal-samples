//*********************************************************
//
// Copyright (c) Microsoft. All rights reserved.
//
//*********************************************************

//
// Scenario1.xaml.h
// Declaration of the Scenario1 class
//

#pragma once
#include "S1_AddFolder.g.h"

namespace LibraryManagement
{
    public ref class Scenario1 sealed
    {
    public:
        Scenario1();

    private:
        void AddFolderButton_Click(Platform::Object^ sender, Windows::UI::Xaml::RoutedEventArgs^ e);
    };
}
