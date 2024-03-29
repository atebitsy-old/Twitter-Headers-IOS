//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <TFNUI/TFNViewController.h>

#import <T1Twitter/T1AddBioFieldDelegate-Protocol.h>
#import <T1Twitter/T1InterestPickerInterestItemAdapterDelegate-Protocol.h>
#import <T1Twitter/T1TwitterAuthenticated-Protocol.h>

@class NSMutableArray, NSString, T1AddBioField, T1AddBioInterestsCollectionViewBackground, T1AddBioInterestsCollectionViewController, T1OnboardingHeaderView, TFNBarButtonItem, TFNTwitterAccount;
@protocol T1AddBioViewControllerDelegate;

@interface T1AddBioViewController : TFNViewController <T1AddBioFieldDelegate, T1InterestPickerInterestItemAdapterDelegate, T1TwitterAuthenticated>
{
    NSString *_title;
    NSString *_subtitle;
    NSString *_hintText;
    NSString *_accessibilityLabel;
    NSString *_charactersRemainingAccessibilityLabel;
    NSString *_nextLabel;
    NSString *_skipLabel;
    long long _maxLength;
    long long _keyboardType;
    _Bool _secureTextEntry;
    _Bool _multiline;
    _Bool _supportInterests;
    CDUnknownBlockType _nextAction;
    CDUnknownBlockType _skipAction;
    _Bool _showHeader;
    TFNTwitterAccount *_account;
    NSString *_bio;
    T1OnboardingHeaderView *_headerView;
    T1AddBioField *_addBioField;
    TFNBarButtonItem *_nextBarButtonItem;
    NSMutableArray *_customConstraints;
    T1AddBioInterestsCollectionViewController *_interestsCollectionViewController;
    T1AddBioInterestsCollectionViewBackground *_interestsCollectionViewBackground;
    id <T1AddBioViewControllerDelegate> _delegate;
}

@property(readonly, nonatomic) __weak id <T1AddBioViewControllerDelegate> delegate; // @synthesize delegate=_delegate;
@property(retain, nonatomic) T1AddBioInterestsCollectionViewBackground *interestsCollectionViewBackground; // @synthesize interestsCollectionViewBackground=_interestsCollectionViewBackground;
@property(retain, nonatomic) T1AddBioInterestsCollectionViewController *interestsCollectionViewController; // @synthesize interestsCollectionViewController=_interestsCollectionViewController;
@property(retain, nonatomic) NSMutableArray *customConstraints; // @synthesize customConstraints=_customConstraints;
@property(retain, nonatomic) TFNBarButtonItem *nextBarButtonItem; // @synthesize nextBarButtonItem=_nextBarButtonItem;
@property(retain, nonatomic) T1AddBioField *addBioField; // @synthesize addBioField=_addBioField;
@property(readonly, nonatomic) T1OnboardingHeaderView *headerView; // @synthesize headerView=_headerView;
@property(nonatomic) _Bool showHeader; // @synthesize showHeader=_showHeader;
@property(retain, nonatomic) NSString *bio; // @synthesize bio=_bio;
@property(retain, nonatomic) TFNTwitterAccount *account; // @synthesize account=_account;
- (void).cxx_destruct;
- (_Bool)private_isValidText:(id)arg1;
- (void)layoutGuidesDidChange:(long long)arg1;
- (double)lengthOfLayoutGuide:(long long)arg1 forEnvironment:(id)arg2;
- (void)interestAdapter:(id)arg1 didSelectInterest:(id)arg2 atIndexPath:(id)arg3;
- (void)addBioField:(id)arg1 didReturn:(id)arg2;
- (void)addBioFieldDidEndEditing:(id)arg1;
- (void)addBioFieldDidBeginEditing:(id)arg1;
- (void)addBioField:(id)arg1 didChangeText:(id)arg2;
- (id)scribeSection;
- (id)scribePage;
@property(readonly, nonatomic) _Bool hasInterests;
- (void)_nextTapped;
- (void)_skipTapped;
- (_Bool)tfn_logoTitleViewShown;
- (_Bool)tfn_prefersNavigationBarShadowHidden;
- (long long)tfn_preferredToolbarVisibility;
- (void)_updateConstraints;
- (void)viewDidAppear:(_Bool)arg1;
- (void)viewDidLoad;
- (id)initWithAccount:(id)arg1 title:(id)arg2 subtitle:(id)arg3 hintText:(id)arg4 defaultText:(id)arg5 accessibilityLabel:(id)arg6 charactersRemainingAccessibilityLabel:(id)arg7 nextLabel:(id)arg8 nextAction:(CDUnknownBlockType)arg9 skipLabel:(id)arg10 skipAction:(CDUnknownBlockType)arg11 maxLength:(long long)arg12 keyboardType:(long long)arg13 secureTextEntry:(_Bool)arg14 multiline:(_Bool)arg15 supportInterests:(_Bool)arg16;
- (id)initWithAccount:(id)arg1 delegate:(id)arg2 title:(id)arg3 subtitle:(id)arg4 hintText:(id)arg5 defaultText:(id)arg6 accessibilityLabel:(id)arg7 charactersRemainingAccessibilityLabel:(id)arg8 nextLabel:(id)arg9 skipLabel:(id)arg10 maxLength:(long long)arg11 keyboardType:(long long)arg12 secureTextEntry:(_Bool)arg13 multiline:(_Bool)arg14 supportInterests:(_Bool)arg15;
- (id)initWithAccount:(id)arg1 delegate:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

