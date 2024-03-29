//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSAttributedString, NSString, TFNButtonAppearanceImpl, TFNButtonAppearanceKey, UIColor, UIFont, UIImage;

@interface TFNButtonStateData : NSObject
{
    UIImage *_cachedDisplayImage;
    _Bool _shouldDisplayImage;
    double _opacity;
    NSString *_title;
    UIFont *_titleFont;
    UIColor *_titleColor;
    long long _lineBreakMode;
    NSString *_accessibilityLabel;
    NSString *_accessibilityHint;
    NSAttributedString *_attributedTitle;
    UIImage *_displayImage;
    TFNButtonAppearanceKey *_appearanceKey;
    TFNButtonAppearanceImpl *_appearance;
    struct CGSize _buttonFrameSize;
    struct CGSize _intrinsicContentSize;
    struct CGRect _titleLabelFrame;
    struct CGRect _imageViewFrame;
    struct CGRect _backgroundImageViewFrame;
}

@property(nonatomic) __weak TFNButtonAppearanceImpl *appearance; // @synthesize appearance=_appearance;
@property(retain, nonatomic) TFNButtonAppearanceKey *appearanceKey; // @synthesize appearanceKey=_appearanceKey;
@property(retain, nonatomic) UIImage *displayImage; // @synthesize displayImage=_displayImage;
@property(nonatomic) _Bool shouldDisplayImage; // @synthesize shouldDisplayImage=_shouldDisplayImage;
@property(copy, nonatomic) NSAttributedString *attributedTitle; // @synthesize attributedTitle=_attributedTitle;
@property(copy, nonatomic) NSString *accessibilityHint; // @synthesize accessibilityHint=_accessibilityHint;
@property(copy, nonatomic) NSString *accessibilityLabel; // @synthesize accessibilityLabel=_accessibilityLabel;
@property(nonatomic) long long lineBreakMode; // @synthesize lineBreakMode=_lineBreakMode;
@property(retain, nonatomic) UIColor *titleColor; // @synthesize titleColor=_titleColor;
@property(retain, nonatomic) UIFont *titleFont; // @synthesize titleFont=_titleFont;
@property(copy, nonatomic) NSString *title; // @synthesize title=_title;
@property(nonatomic) double opacity; // @synthesize opacity=_opacity;
@property(nonatomic) struct CGSize intrinsicContentSize; // @synthesize intrinsicContentSize=_intrinsicContentSize;
@property(nonatomic) struct CGRect backgroundImageViewFrame; // @synthesize backgroundImageViewFrame=_backgroundImageViewFrame;
@property(nonatomic) struct CGRect imageViewFrame; // @synthesize imageViewFrame=_imageViewFrame;
@property(nonatomic) struct CGRect titleLabelFrame; // @synthesize titleLabelFrame=_titleLabelFrame;
@property(nonatomic) struct CGSize buttonFrameSize; // @synthesize buttonFrameSize=_buttonFrameSize;
- (void).cxx_destruct;

@end

