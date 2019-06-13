//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <T1Twitter/TFNOnboardingSettingsValue.h>

@class NSObject, NSString, TFNOnboardingRichText;
@protocol TFNOnboardingSettingsValueDictionaryTranslatable;

@interface TFNOnboardingMutableSettingsValue : TFNOnboardingSettingsValue
{
    NSObject<TFNOnboardingSettingsValueDictionaryTranslatable> *_mutableValueData;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSObject<TFNOnboardingSettingsValueDictionaryTranslatable> *valueData; // @synthesize valueData=_mutableValueData;
@property(retain, nonatomic) NSString *identifier; // @dynamic identifier;
@property(retain, nonatomic) TFNOnboardingRichText *secondaryText; // @dynamic secondaryText;
@property(retain, nonatomic) TFNOnboardingRichText *primaryText; // @dynamic primaryText;
- (id)settingsGroupData;
- (id)booleanData;

// Remaining properties
@property(nonatomic) long long type; // @dynamic type;

@end
