//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIViewController.h>

@interface UIViewController (TFNPresented)
+ (void)_tfn_forceEndIgnoringInteractionEvents:(id)arg1;
- (id)_tfn_presentedDebugDescription;
- (id)_tfn_scheduleForceEndIgnoringInteractionEventsTimerWithDebugInfo:(id)arg1;
- (void)_tfn_addPresentationInterceptorsToArray:(id)arg1;
- (id)_tfn_findPresentationInterceptors;
- (_Bool)_tfn_presentViewControllerAsModal:(id)arg1;
- (void)_tfn_recursivelyDismissPresentedViewController:(id)arg1 animated:(_Bool)arg2 completion:(CDUnknownBlockType)arg3;
- (_Bool)_tfn_warnIfInProgressTransitionPreventsDismissFromViewController:(id)arg1;
- (_Bool)_tfn_warnIfInProgressTransitionForViewController:(id)arg1 preventsPresentationFromViewController:(id)arg2;
@property(readonly, nonatomic) _Bool tfn_ignoreInteractionEventsDuringDismissal;
@property(readonly, nonatomic) _Bool tfn_ignoreInteractionEventsDuringPresentation;
@property(nonatomic) _Bool tfn_isDismissingFrom;
@property(nonatomic) _Bool tfn_isCustomDismissing;
@property(nonatomic) _Bool tfn_isPresentingFrom;
@property(nonatomic) _Bool tfn_isCustomPresenting;
@property(nonatomic) _Bool tfn_presentAsModal;
- (void)tfn_recursivelyDismissPresentedViewControllersAnimated:(_Bool)arg1 completion:(CDUnknownBlockType)arg2;
- (void)tfn_recursivelyDismissPresentedViewControllersWithCompletion:(CDUnknownBlockType)arg1;
- (void)tfn_dismissAnimated:(_Bool)arg1 completion:(CDUnknownBlockType)arg2;
- (void)tfn_dismissAnimated:(_Bool)arg1;
- (void)tfn_dismissAnimated;
- (void)tfn_presentFromVisibleViewControllerAnimated:(_Bool)arg1 completion:(CDUnknownBlockType)arg2;
- (void)tfn_presentFromVisibleViewControllerAnimated:(_Bool)arg1;
- (void)tfn_presentFromVisibleViewController;
- (void)tfn_presentFromViewController:(id)arg1 animated:(_Bool)arg2 completion:(CDUnknownBlockType)arg3;
- (void)tfn_presentFromViewController:(id)arg1 animated:(_Bool)arg2;
- (void)tfn_presentFromViewController:(id)arg1;
@end

