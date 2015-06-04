// Copyright (c) Microsoft. All rights reserved.

#include "pch.h"
#include "MainPage.xaml.h"
#include "SampleConfiguration.h"

using namespace SDKTemplate;

Platform::Array<Scenario>^ MainPage::scenariosInner = ref new Platform::Array<Scenario>
{
    { "Open the file picker at HomeGroup",    "HomeGroup.HomeGroupPicker" },
    { "Search HomeGroup",                     "HomeGroup.SearchHomeGroup" },
    { "Stream video from Homegroup",          "HomeGroup.HomeGroupVideoStream" },
    { "Advanced search",                      "HomeGroup.HomeGroupAdvancedSearch" }
};
