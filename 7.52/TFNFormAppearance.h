//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableDictionary, TFNLayoutMetrics, UIColor, UIFont;

@interface TFNFormAppearance : NSObject
{
    NSMutableDictionary *_fieldBackgroundImages;
    TFNLayoutMetrics *_fieldBackgroundImagesLayoutMetrics;
    NSMutableDictionary *_separatorCoverImages;
    _Bool _insetSeparators;
    _Bool _overlapped;
    double _lineSpacing;
    double _fieldSpacing;
    double _fieldBorderWidth;
    UIFont *_customItemFont;
    UIColor *_backgroundColor;
    UIColor *_highlightedBackgroundColor;
    UIColor *_inputDisabledBackgroundColor;
    UIColor *_inputDisabledTextColor;
    UIColor *_borderColor;
    struct UIEdgeInsets _sectionInset;
}

+ (id)sectionedAppearanceWithInsetSeparators:(_Bool)arg1;
+ (id)unsectionedAppearance;
@property(retain, nonatomic) UIColor *borderColor; // @synthesize borderColor=_borderColor;
@property(nonatomic, getter=isOverlapped) _Bool overlapped; // @synthesize overlapped=_overlapped;
@property(nonatomic) _Bool insetSeparators; // @synthesize insetSeparators=_insetSeparators;
@property(retain, nonatomic) UIColor *inputDisabledTextColor; // @synthesize inputDisabledTextColor=_inputDisabledTextColor;
@property(retain, nonatomic) UIColor *inputDisabledBackgroundColor; // @synthesize inputDisabledBackgroundColor=_inputDisabledBackgroundColor;
@property(retain, nonatomic) UIColor *highlightedBackgroundColor; // @synthesize highlightedBackgroundColor=_highlightedBackgroundColor;
@property(retain, nonatomic) UIColor *backgroundColor; // @synthesize backgroundColor=_backgroundColor;
@property(retain, nonatomic) UIFont *customItemFont; // @synthesize customItemFont=_customItemFont;
@property(nonatomic) struct UIEdgeInsets sectionInset; // @synthesize sectionInset=_sectionInset;
@property(nonatomic) double fieldBorderWidth; // @synthesize fieldBorderWidth=_fieldBorderWidth;
@property(nonatomic) double fieldSpacing; // @synthesize fieldSpacing=_fieldSpacing;
@property(nonatomic) double lineSpacing; // @synthesize lineSpacing=_lineSpacing;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)init;
- (struct UIEdgeInsets)sectionInsetForLayoutMetrics:(id)arg1;
- (double)fieldSpacingForLayoutMetrics:(id)arg1;
- (double)lineSpacingForLayoutMetrics:(id)arg1;
- (struct UIEdgeInsets)counterContentEdgeInsetsForLayoutMetrics:(id)arg1;
- (struct UIEdgeInsets)errorContentEdgeInsetsForLayoutMetrics:(id)arg1;
- (struct UIEdgeInsets)errorEdgeInsetsForLayoutMetrics:(id)arg1;
- (struct UIEdgeInsets)contentEdgeInsetsForLayoutMetrics:(id)arg1;
- (struct CGSize)validityIndicatorSizeForFormField:(id)arg1 validityState:(unsigned long long)arg2;
- (id)validityIndicatorImageForFormField:(id)arg1 validityState:(unsigned long long)arg2;
- (_Bool)_areDynamicColorsUpToDateForImage:(id)arg1 object:(id)arg2;
- (id)generateSeparatorCoverImageForSectionBreaks:(unsigned long long)arg1 inset:(double)arg2 backgroundColor:(id)arg3;
- (id)_generateSeparatorCoverImageWithIdentifier:(id)arg1 forSectionBreaks:(unsigned long long)arg2 inset:(double)arg3 regeneratingForObject:(id)arg4;
- (id)separatorCoverImageForSectionBreaks:(unsigned long long)arg1 inset:(double)arg2;
- (id)generateFieldBackgroundImageForSectionBreaks:(unsigned long long)arg1 withBackgroundColor:(id)arg2 borderColor:(id)arg3 layoutMetrics:(id)arg4;
- (id)_generateFieldBackgroundImageWithIdentifier:(id)arg1 forSectionBreaks:(unsigned long long)arg2 highlighted:(_Bool)arg3 inputDisabled:(_Bool)arg4 layoutMetrics:(id)arg5 regeneratingForObject:(id)arg6;
- (id)fieldBackgroundImageForSectionBreaks:(unsigned long long)arg1 highlighted:(_Bool)arg2 inputDisabled:(_Bool)arg3 layoutMetrics:(id)arg4;

@end

