//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <T1Twitter/T1AdaptiveOnboardingFlow.h>

@class NSArray, TFNTwitterAccount;

@interface T1SingleSignOnFlow : T1AdaptiveOnboardingFlow
{
    TFNTwitterAccount *_account;
    NSArray *_steps;
}

- (id)steps;
- (id)account;
- (void).cxx_destruct;
- (void)_t1_stepController:(id)arg1 didAddAccount:(id)arg2;
- (void)completeFlowAnimated:(_Bool)arg1 completion:(CDUnknownBlockType)arg2;
- (id)initWithViewAccountOnCompletion:(_Bool)arg1;
- (id)initWithConsumerKey:(id)arg1 consumerSecret:(id)arg2 oauthCallbackURLString:(id)arg3 sourceAppBundleID:(id)arg4 nonce:(id)arg5;

@end
