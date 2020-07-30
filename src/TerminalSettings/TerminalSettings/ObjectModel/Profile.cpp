#include "pch.h"
#include "Profile.h"
#include "ObjectModel.Profile.g.cpp"

using namespace winrt::Windows::UI::Xaml;
using namespace winrt::ObjectModel::implementation;

HorizontalAlignment Profile::BackgroundImageHorizontalAlignment() const noexcept
{
    return std::get<0>(_BackgroundImageAlignment);
}

void Profile::BackgroundImageHorizontalAlignment(const HorizontalAlignment& value) noexcept
{
    std::get<0>(_BackgroundImageAlignment) = value;
}

VerticalAlignment Profile::BackgroundImageVerticalAlignment() const noexcept
{
    return std::get<1>(_BackgroundImageAlignment);
}

void Profile::BackgroundImageVerticalAlignment(const VerticalAlignment& value) noexcept
{
    std::get<1>(_BackgroundImageAlignment) = value;
}