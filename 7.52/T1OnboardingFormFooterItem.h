//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <T1Twitter/TFNFormCustomItem.h>

@class NSString, TFNButton;

@interface T1OnboardingFormFooterItem : TFNFormCustomItem
{
    TFNButton *_submitButton;
    TFNButton *_secondaryButton;
    NSString *_submitButtonLabel;
    NSString *_secondaryButtonLabel;
}

@property(copy, nonatomic) NSString *secondaryButtonLabel; // @synthesize secondaryButtonLabel=_secondaryButtonLabel;
@property(copy, nonatomic) NSString *submitButtonLabel; // @synthesize submitButtonLabel=_submitButtonLabel;
@property(retain, nonatomic) TFNButton *secondaryButton; // @synthesize secondaryButton=_secondaryButton;
@property(retain, nonatomic) TFNButton *submitButton; // @synthesize submitButton=_submitButton;
- (void).cxx_destruct;
- (id)initWithSubmitButtonLabel:(id)arg1 secondaryButtonLabel:(id)arg2 action:(SEL)arg3;

@end

