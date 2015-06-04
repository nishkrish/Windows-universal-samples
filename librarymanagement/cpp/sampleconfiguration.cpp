// Copyright (c) Microsoft. All rights reserved.

#include "pch.h"
#include "MainPage.xaml.h"
#include "SampleConfiguration.h"

using namespace SDKTemplate;

Platform::Array<Scenario>^ MainPage::scenariosInner = ref new Platform::Array<Scenario>
{
    { "Adding a folder to the Pictures library",     "LibraryManagement.Scenario1" },
    { "Listing folders in the Pictures library",     "LibraryManagement.Scenario2" },
    { "Removing a folder from the Pictures library", "LibraryManagement.Scenario3" }
};
