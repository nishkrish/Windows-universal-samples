// Copyright (c) Microsoft. All rights reserved.

#include "pch.h"
#include "MainPage.xaml.h"
#include "SampleConfiguration.h"

using namespace SDKTemplate;

Platform::Array<Scenario>^ MainPage::scenariosInner = ref new Platform::Array<Scenario>
{
    { "Get display name", "AccountPictureName.GetUserDisplayName" },
    { "Get first and last name", "AccountPictureName.GetUserFirstAndLastName" },
    { "Get account picture", "AccountPictureName.GetAccountPicture" },
    { "Set account picture and listen for changes", "AccountPictureName.SetAccountPicture" }
};
