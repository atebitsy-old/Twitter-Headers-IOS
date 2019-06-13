//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <TFNUI/TFNModalSheetViewController.h>

#import <T1Twitter/T1ModalProfileViewController-Protocol.h>
#import <T1Twitter/T1ModalViewControllerNonModalPresentationDelegate-Protocol.h>

@class NSString, T1ProfileModalPresentationContextHelper, TFSTwitterScribeContext, UIViewController;
@protocol T1ModalViewControllerNonModalPresentationDelegate, T1ProfileViewController;

@interface T1ProfileModalSheetViewController : TFNModalSheetViewController <T1ModalProfileViewController, T1ModalViewControllerNonModalPresentationDelegate>
{
    T1ProfileModalPresentationContextHelper *_presentationContextHelper;
    id <T1ModalViewControllerNonModalPresentationDelegate> _nonModalPresentationDelegate;
    UIViewController<T1ProfileViewController> *_profileContentViewController;
    UIViewController *_presentedFromViewController;
}

+ (id)profileModalWithProfileViewController:(id)arg1 sourceView:(id)arg2 sourceRect:(struct CGRect)arg3;
@property(retain, nonatomic) UIViewController *presentedFromViewController; // @synthesize presentedFromViewController=_presentedFromViewController;
@property(retain, nonatomic) UIViewController<T1ProfileViewController> *profileContentViewController; // @synthesize profileContentViewController=_profileContentViewController;
@property(nonatomic) __weak id <T1ModalViewControllerNonModalPresentationDelegate> nonModalPresentationDelegate; // @synthesize nonModalPresentationDelegate=_nonModalPresentationDelegate;
- (void).cxx_destruct;
- (void)_t1_voiceOverStatusDidChange:(id)arg1;
- (void)modalViewController:(id)arg1 nonModallyPresentViewControllerCreatedFromBlock:(CDUnknownBlockType)arg2;
@property(readonly, nonatomic) TFSTwitterScribeContext *scribeContext;
- (void)dismissAndPresentViewControllerCreatedFromBlock:(CDUnknownBlockType)arg1;
- (void)setPresentationContextView:(id)arg1;
- (void)tfnPresentedCustomPresentFromViewController:(id)arg1 animated:(_Bool)arg2 completion:(CDUnknownBlockType)arg3;
- (id)initWithProfileViewController:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

