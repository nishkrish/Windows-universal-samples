// Copyright (c) Microsoft. All rights reserved.

#include "pch.h"
#include "MainPage.xaml.h"
#include "SampleConfiguration.h"

using namespace SDKTemplate;

Platform::Array<Scenario>^ MainPage::scenariosInner = ref new Platform::Array<Scenario>
{
   { "Use custom commands", "MessageDialogSample.CustomCommand" },
    { "Use default close command", "MessageDialogSample.DefaultCloseCommand" },
    { "Use completed callback", "MessageDialogSample.CompletedCallback" },
    { "Use cancel command", "MessageDialogSample.CancelCommand" }
};
