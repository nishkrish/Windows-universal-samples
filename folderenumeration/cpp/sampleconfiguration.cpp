// Copyright (c) Microsoft. All rights reserved.

#include "pch.h"
#include "MainPage.xaml.h"
#include "SampleConfiguration.h"

using namespace SDKTemplate;

Platform::Array<Scenario>^ MainPage::scenariosInner = ref new Platform::Array<Scenario>
{
    { "Enumerate files and folders in the Pictures library",        "FolderEnumeration.Scenario1" },
    { "Enumerate files in the Pictures library, by groups",         "FolderEnumeration.Scenario2" },
    { "Enumerate files in the Pictures library with prefetch APIs", "FolderEnumeration.Scenario3" },
    { "Enumerate files in a folder and display availability",       "FolderEnumeration.Scenario4" },
};
