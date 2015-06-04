//*********************************************************
//
// THIS CODE AND INFORMATION IS PROVIDED "AS IS" WITHOUT WARRANTY OF 
// ANY KIND, EITHER EXPRESSED OR IMPLIED, INCLUDING BUT NOT LIMITED TO 
// THE IMPLIED WARRANTIES OF MERCHANTABILITY AND/OR FITNESS FOR A 
// PARTICULAR PURPOSE. 
//
// Copyright (c) Microsoft. All rights reserved.
//
//*********************************************************

//
// FindId.xaml.h
// Declaration of the FindId class
//

#pragma once
#include "Scenario1_FindId.g.h"
#include <vector>
#include <string>

namespace UnicodeSample
{
    public ref class Scenario1_FindId sealed
    {
    public:
        Scenario1_FindId();

    private:
        std::vector<std::wstring> FindIdsInString(Platform::String^ inputString);

        void Default_Click(Platform::Object^ sender, Windows::UI::Xaml::RoutedEventArgs^ e);
    };
}
