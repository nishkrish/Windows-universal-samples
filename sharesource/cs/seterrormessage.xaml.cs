//*********************************************************
//
// Copyright (c) Microsoft. All rights reserved.
// THIS CODE IS PROVIDED *AS IS* WITHOUT WARRANTY OF
// ANY KIND, EITHER EXPRESS OR IMPLIED, INCLUDING ANY
// IMPLIED WARRANTIES OF FITNESS FOR A PARTICULAR
// PURPOSE, MERCHANTABILITY, OR NON-INFRINGEMENT.
//
//*********************************************************

using System;
using Windows.ApplicationModel.DataTransfer;
using Windows.UI.Xaml.Controls;

namespace ShareSource
{
    public sealed partial class SetErrorMessage
    {
        public SetErrorMessage()
        {
            this.InitializeComponent();
        }

        protected override bool GetShareContent(DataRequest request)
        {
            string errorMessage = CustomErrorText.Text;
            if (String.IsNullOrEmpty(errorMessage))
            {
                errorMessage = "Enter a failure display text and try again.";
            }
            request.FailWithDisplayText(errorMessage);
            return false;
        }
    }
}
