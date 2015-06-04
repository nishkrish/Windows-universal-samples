//*********************************************************
//
// Copyright (c) Microsoft. All rights reserved.
//
//*********************************************************

//
// Scenario2.xaml.h
// Declaration of the Scenario2 class
//

#pragma once
#include "S2_ListFolders.g.h"

namespace LibraryManagement
{
    public ref class Scenario2 sealed
    {
    public:
        Scenario2();

    private:
        void ListFoldersButton_Click(Platform::Object^ sender, Windows::UI::Xaml::RoutedEventArgs^ e);
        void UpdateHeaderText();

        Windows::Storage::StorageLibrary^ picturesLibrary;
    };
}
