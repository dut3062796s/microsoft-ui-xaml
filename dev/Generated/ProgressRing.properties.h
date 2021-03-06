// Copyright (c) Microsoft Corporation. All rights reserved.
// Licensed under the MIT License. See LICENSE in the project root for license information.

// DO NOT EDIT! This file was generated by CustomTasks.DependencyPropertyCodeGen
#pragma once

class ProgressRingProperties
{
public:
    ProgressRingProperties();

    void IsActive(bool value);
    bool IsActive();

    void TemplateSettings(winrt::ProgressRingTemplateSettings const& value);
    winrt::ProgressRingTemplateSettings TemplateSettings();

    static winrt::DependencyProperty IsActiveProperty() { return s_IsActiveProperty; }
    static winrt::DependencyProperty TemplateSettingsProperty() { return s_TemplateSettingsProperty; }

    static GlobalDependencyProperty s_IsActiveProperty;
    static GlobalDependencyProperty s_TemplateSettingsProperty;

    static void EnsureProperties();
    static void ClearProperties();

    static void OnIsActivePropertyChanged(
        winrt::DependencyObject const& sender,
        winrt::DependencyPropertyChangedEventArgs const& args);
};
