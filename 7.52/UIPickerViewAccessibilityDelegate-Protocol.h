//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <T1Twitter/UIPickerViewDelegate-Protocol.h>

@class NSAttributedString, NSString, UIPickerView;

@protocol UIPickerViewAccessibilityDelegate <UIPickerViewDelegate>

@optional
- (NSAttributedString *)pickerView:(UIPickerView *)arg1 accessibilityAttributedHintForComponent:(long long)arg2;
- (NSAttributedString *)pickerView:(UIPickerView *)arg1 accessibilityAttributedLabelForComponent:(long long)arg2;
- (NSString *)pickerView:(UIPickerView *)arg1 accessibilityHintForComponent:(long long)arg2;
- (NSString *)pickerView:(UIPickerView *)arg1 accessibilityLabelForComponent:(long long)arg2;
@end

