//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <T1Twitter/TFNOnboardingSubtask.h>

@class TFNOnboardingHeaderImage, TFNOnboardingNavigationLink, TFNOnboardingRichText;

@interface TFNOnboardingCTASubtask : TFNOnboardingSubtask
{
    long long _style;
    TFNOnboardingRichText *_primaryText;
    TFNOnboardingRichText *_secondaryText;
    TFNOnboardingRichText *_detailText;
    TFNOnboardingHeaderImage *_headerImage;
    TFNOnboardingNavigationLink *_primaryActionLink;
    TFNOnboardingNavigationLink *_secondaryActionLink;
    unsigned long long _primaryActionStyle;
    unsigned long long _secondaryActionStyle;
    long long _textAlignment;
}

+ (long long)version;
+ (id)typeNames;
@property(readonly, nonatomic) long long textAlignment; // @synthesize textAlignment=_textAlignment;
@property(readonly, nonatomic) unsigned long long secondaryActionStyle; // @synthesize secondaryActionStyle=_secondaryActionStyle;
@property(readonly, nonatomic) unsigned long long primaryActionStyle; // @synthesize primaryActionStyle=_primaryActionStyle;
@property(readonly, nonatomic) TFNOnboardingNavigationLink *secondaryActionLink; // @synthesize secondaryActionLink=_secondaryActionLink;
@property(readonly, nonatomic) TFNOnboardingNavigationLink *primaryActionLink; // @synthesize primaryActionLink=_primaryActionLink;
@property(readonly, nonatomic) TFNOnboardingHeaderImage *headerImage; // @synthesize headerImage=_headerImage;
@property(readonly, nonatomic) TFNOnboardingRichText *detailText; // @synthesize detailText=_detailText;
@property(readonly, nonatomic) TFNOnboardingRichText *secondaryText; // @synthesize secondaryText=_secondaryText;
@property(readonly, nonatomic) TFNOnboardingRichText *primaryText; // @synthesize primaryText=_primaryText;
@property(readonly, nonatomic) long long style; // @synthesize style=_style;
- (void).cxx_destruct;
- (long long)preferredPresentationType;
- (id)initWithSubtaskID:(id)arg1 style:(long long)arg2 primaryText:(id)arg3 secondaryText:(id)arg4 detailText:(id)arg5 primaryActionLink:(id)arg6 secondaryActionLink:(id)arg7 primaryActionStyle:(unsigned long long)arg8 secondaryActionStyle:(unsigned long long)arg9 textAlignment:(long long)arg10 backNavigationType:(long long)arg11;
- (id)initWithJSONDictionary:(id)arg1 subtaskID:(id)arg2 typeName:(id)arg3 backNavigationType:(long long)arg4 error:(id *)arg5;

@end
