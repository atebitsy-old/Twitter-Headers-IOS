//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString, TFNTwitterAccount, UIViewController;

@interface T1PushLandingHelper : NSObject
{
    UIViewController *_presentingController;
    TFNTwitterAccount *_account;
    NSString *_scribePage;
}

@property(copy, nonatomic) NSString *scribePage; // @synthesize scribePage=_scribePage;
@property(retain, nonatomic) TFNTwitterAccount *account; // @synthesize account=_account;
@property(nonatomic) __weak UIViewController *presentingController; // @synthesize presentingController=_presentingController;
- (void).cxx_destruct;
- (void)scribeMessageClickForItem:(id)arg1;
- (void)scribeMessageImpressionForItem:(id)arg1;
- (id)scribeElementForItem:(id)arg1;
- (id)messageForItem:(id)arg1;
- (long long)queryableSettingForPushLandingChannel:(long long)arg1;
- (id)settingsControllerForItem:(id)arg1;
- (void)presentNotificationSettingsForItem:(id)arg1 sender:(id)arg2;
- (void)presentLandingOptionsForItem:(id)arg1 sender:(id)arg2;

@end

