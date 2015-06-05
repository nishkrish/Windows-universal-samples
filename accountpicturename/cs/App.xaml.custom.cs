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

using System;
using Windows.ApplicationModel;
using Windows.ApplicationModel.Activation;
using Windows.UI.Xaml;
using Windows.UI.Xaml.Controls;
using Windows.UI.Xaml.Navigation;

// The Blank Application template is documented at http://go.microsoft.com/fwlink/?LinkId=402347&clcid=0x409

namespace SDKTemplate
{
    /// <summary>
    /// Provides sample-specific behavior to supplement the default Application class.
    /// </summary>
    sealed partial class App : Application
    {
        protected override void OnActivated(IActivatedEventArgs args)
        {
            // Check to see if the app was activated via a protocol
            if (args.Kind == ActivationKind.Protocol)
            {
                var protocolArgs = (ProtocolActivatedEventArgs)args;

                // This app was activated via the Account picture apps section in PC Settings / Personalize / Account picture.
                // Here you would do app-specific logic so that the user receives account picture selection UX.
                if (protocolArgs.Uri.Scheme == "ms-accountpictureprovider")
                {
                    // The Content might be null if App has not yet been activated, if so first activate the main page.
                    if (Window.Current.Content == null)
                    {
                        ConstructMainPage();
                    }
                    MainPage.Current.NavigateToScenario(typeof(AccountPictureName.SetAccountPicture));
                }
            }
        }

        private void ConstructMainPage()
        {
            Frame rootFrame = new Frame();

            if (Window.Current.Content == null)
            {
                rootFrame.Navigate(typeof(MainPage));
                Window.Current.Content = rootFrame;
            }
            Window.Current.Activate();
        }

    }
}
