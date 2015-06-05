// Copyright (c) Microsoft. All rights reserved.

#include "pch.h"
#include "MainPage.xaml.h"
#include "SampleConfiguration.h"

using namespace SDKTemplate;

Platform::Array<Scenario>^ MainPage::scenariosInner = ref new Platform::Array<Scenario>
{
    { "Language Detection", "ELS.Scenario1_LanguageDetection" },
    { "Script Detection", "ELS.Scenario2_ScriptDetection" },
    { "Transliteration", "ELS.Scenario3_Transliteration" }
};
