//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <TFNUI/TFNViewController.h>

#import <T1Twitter/T1JumpBackToHomeTimelineBehavior-Protocol.h>
#import <T1Twitter/T1PickAndFilterPhotoFlowControllerDelegate-Protocol.h>
#import <T1Twitter/T1TwitterAuthenticated-Protocol.h>
#import <T1Twitter/TFNLayoutMetricsEnvironment-Protocol.h>

@class NSLayoutConstraint, NSString, T1AddAvatarView, T1OnboardingHeaderView, T1PickAndFilterPhotoFlowController, T1ProfileAvatarImageView, TFNTwitterAccount;
@protocol T1AddAvatarViewControllerDelegate;

@interface T1AddAvatarViewController : TFNViewController <TFNLayoutMetricsEnvironment, T1PickAndFilterPhotoFlowControllerDelegate, T1TwitterAuthenticated, T1JumpBackToHomeTimelineBehavior>
{
    _Bool _userAddedAvatar;
    _Bool _navigationPushTransition;
    _Bool _animateAvatar;
    _Bool _requireAvatar;
    _Bool _showCurrentAvatar;
    NSLayoutConstraint *_avatarHSize;
    NSLayoutConstraint *_avatarVSize;
    NSLayoutConstraint *_avatarHPosition;
    NSLayoutConstraint *_avatarVPosition;
    NSString *_title;
    NSString *_subtitle;
    id <T1AddAvatarViewControllerDelegate> _delegate;
    TFNTwitterAccount *_account;
    T1OnboardingHeaderView *_headerView;
    T1AddAvatarView *_addAvatarView;
    T1ProfileAvatarImageView *_avatarImageView;
    T1PickAndFilterPhotoFlowController *_photoPicker;
}

@property(retain, nonatomic) T1PickAndFilterPhotoFlowController *photoPicker; // @synthesize photoPicker=_photoPicker;
@property(retain, nonatomic) T1ProfileAvatarImageView *avatarImageView; // @synthesize avatarImageView=_avatarImageView;
@property(retain, nonatomic) T1AddAvatarView *addAvatarView; // @synthesize addAvatarView=_addAvatarView;
@property(readonly, nonatomic) T1OnboardingHeaderView *headerView; // @synthesize headerView=_headerView;
@property(retain, nonatomic) TFNTwitterAccount *account; // @synthesize account=_account;
- (void).cxx_destruct;
- (void)private_updateContinueButton;
- (id)_scribeElement;
- (id)scribeSection;
- (id)scribePage;
- (void)pickAndFilterPhotoFlowController:(id)arg1 removePhotoType:(long long)arg2;
- (void)pickAndFilterPhotoFlowController:(id)arg1 userDidCancelPhotoType:(long long)arg2;
- (void)pickAndFilterPhotoFlowController:(id)arg1 userDidSelectImage:(id)arg2 type:(long long)arg3;
- (_Bool)tfn_logoTitleViewShown;
- (long long)tfn_preferredToolbarVisibility;
- (_Bool)tfn_prefersNavigationBarShadowHidden;
- (void)tfn_addDirectlyOwnedViewControllersToMutableArray:(id)arg1;
- (id)navigationControllerTransitionForOperation:(long long)arg1 fromViewController:(id)arg2 toViewController:(id)arg3;
- (void)viewWillDisappear:(_Bool)arg1;
- (void)_setupConstraints;
- (void)viewDidLoad;
- (void)_addAvatarPhoto:(id)arg1;
- (void)_nextTapped;
- (void)_skipTapped;
- (void)_avatarTapped:(id)arg1;
- (id)initWithAccount:(id)arg1 title:(id)arg2 subtitle:(id)arg3 nextLabel:(id)arg4 skipLabel:(id)arg5 delegate:(id)arg6 requireAvatar:(_Bool)arg7 showCurrentAvatar:(_Bool)arg8 animateAvatar:(_Bool)arg9;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

