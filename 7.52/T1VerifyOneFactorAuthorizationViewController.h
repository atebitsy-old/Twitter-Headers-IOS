//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <T1Twitter/TFNFormViewController.h>

#import <T1Twitter/T1AccountAdder-Protocol.h>
#import <T1Twitter/T1VerifyPINFormDelegate-Protocol.h>

@class NSString, T1OnboardingFormFooterItem, T1OnboardingHeaderViewModel, T1OneFactorAuthorizationRequest, T1VerifyPINForm, TFNBarButtonItem;
@protocol T1VerifyOneFactorAuthorizationDelegate;

@interface T1VerifyOneFactorAuthorizationViewController : TFNFormViewController <T1VerifyPINFormDelegate, T1AccountAdder>
{
    CDUnknownBlockType _didAddAccountBlock;
    T1VerifyPINForm *_form;
    id <T1VerifyOneFactorAuthorizationDelegate> _delegate;
    T1OnboardingHeaderViewModel *_headerItem;
    T1OnboardingFormFooterItem *_footerItem;
    TFNBarButtonItem *_loginBarButtonItem;
    unsigned long long _currentFactorType;
    T1OneFactorAuthorizationRequest *_request;
}

@property(readonly, nonatomic) T1OneFactorAuthorizationRequest *request; // @synthesize request=_request;
@property(nonatomic) unsigned long long currentFactorType; // @synthesize currentFactorType=_currentFactorType;
@property(retain, nonatomic) TFNBarButtonItem *loginBarButtonItem; // @synthesize loginBarButtonItem=_loginBarButtonItem;
@property(retain, nonatomic) T1OnboardingFormFooterItem *footerItem; // @synthesize footerItem=_footerItem;
@property(readonly, nonatomic) T1OnboardingHeaderViewModel *headerItem; // @synthesize headerItem=_headerItem;
@property(nonatomic) __weak id <T1VerifyOneFactorAuthorizationDelegate> delegate; // @synthesize delegate=_delegate;
@property(readonly, nonatomic) T1VerifyPINForm *form; // @synthesize form=_form;
@property(copy, nonatomic) CDUnknownBlockType didAddAccountBlock; // @synthesize didAddAccountBlock=_didAddAccountBlock;
- (void).cxx_destruct;
- (_Bool)tfn_logoTitleViewShown;
- (_Bool)tfn_prefersNavigationBarShadowHidden;
- (void)_logInTapped;
- (void)_logInWithOtherFactor;
- (void)_resendCode;
- (void)_didNotReceiveCode;
- (void)verifyPINFormShouldSubmit:(id)arg1;
- (void)submitForm;
- (unsigned long long)inputRequiredBehavior;
- (id)doneBarButtonItem;
- (id)submitButton;
- (_Bool)includesSubmitButtonAsItem;
- (id)footerItems;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewDidLoad;
- (void)setSections:(id)arg1;
- (void)_scribeAction:(id)arg1 component:(id)arg2 element:(id)arg3;
- (id)scribeSection;
- (id)scribePage;
- (id)scribe;
- (id)initWithFactorType:(unsigned long long)arg1 emailFactor:(id)arg2 smsFactor:(id)arg3 userIdentifier:(id)arg4 verificationRequestID:(id)arg5;
- (id)initWithRequest:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

