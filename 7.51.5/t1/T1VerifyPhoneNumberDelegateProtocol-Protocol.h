//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <T1Twitter/NSObject-Protocol.h>

@class T1VerifyPINForm, T1VerifyPhoneNumberViewController;

@protocol T1VerifyPhoneNumberDelegateProtocol <NSObject>
- (void)verifyPhoneNumberViewController:(T1VerifyPhoneNumberViewController *)arg1 verifyPhoneNumberWithForm:(T1VerifyPINForm *)arg2;
- (void)verifyPhoneNumberViewController:(T1VerifyPhoneNumberViewController *)arg1 didTapResendSender:(id)arg2;
@end
