//*********************************************************
//
// Copyright (c) Microsoft. All rights reserved.
// This code is licensed under the MIT License (MIT).
// THIS CODE IS PROVIDED *AS IS* WITHOUT WARRANTY OF
// ANY KIND, EITHER EXPRESS OR IMPLIED, INCLUDING ANY
// IMPLIED WARRANTIES OF FITNESS FOR A PARTICULAR
// PURPOSE, MERCHANTABILITY, OR NON-INFRINGEMENT.
//
//*********************************************************

#include "pch.h"
#include "MainPage.xaml.h"

using namespace SDKTemplate;

using namespace Platform;
using namespace Windows::ApplicationModel;
using namespace Windows::ApplicationModel::Activation;
using namespace Windows::Foundation;
using namespace Windows::Foundation::Collections;
using namespace Windows::UI::Xaml;
using namespace Windows::UI::Xaml::Controls;
using namespace Windows::UI::Xaml::Controls::Primitives;
using namespace Windows::UI::Xaml::Data;
using namespace Windows::UI::Xaml::Input;
using namespace Windows::UI::Xaml::Interop;
using namespace Windows::UI::Xaml::Media;
using namespace Windows::UI::Xaml::Navigation;

void App::OnActivated(IActivatedEventArgs^ args)
{
    // Check to see if the app was activated via a protocol
    if (args->Kind == ActivationKind::Protocol)
    {
        auto protocolArgs = safe_cast<ProtocolActivatedEventArgs^>(args);
        if (protocolArgs->Uri->SchemeName->Equals("ms-accountpictureprovider"))
        {
            if (Window::Current->Content == nullptr)
            {
                auto rootFrame = ref new Frame();
                TypeName pageType = { "SDKTemplate.MainPage", TypeKind::Custom };
                rootFrame->Navigate(pageType);
                Window::Current->Content = rootFrame;
                Window::Current->Activate();
            }

            MainPage::Current->NavigateToScenario("AccountPictureName.SetAccountPicture");
        }
    }
}
