//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <TFNUI/TFNNavigationController.h>

#import <T1Twitter/T1PanelRootViewController-Protocol.h>
#import <T1Twitter/T1SearchTextViewDelegate-Protocol.h>
#import <T1Twitter/T1TweetDraftsViewControllerDelegate-Protocol.h>
#import <T1Twitter/TFNNavigationControllerTransitionProvider-Protocol.h>
#import <T1Twitter/TFNTooltipDelegate-Protocol.h>
#import <T1Twitter/TFNTwitterProgressCenterObserver-Protocol.h>
#import <T1Twitter/UIDropInteractionDelegate-Protocol.h>

@class NSDate, NSString, T1DashBarButtonItem, T1SearchViewContainerView, TFNBarButtonItem, TFNTwitterAccount, UILongPressGestureRecognizer, UIView;
@protocol NSCopying, T1DashPresenter, T1TabView;

@interface T1TabNavigationController : TFNNavigationController <T1SearchTextViewDelegate, TFNTooltipDelegate, UIDropInteractionDelegate, T1TweetDraftsViewControllerDelegate, TFNTwitterProgressCenterObserver, T1PanelRootViewController, TFNNavigationControllerTransitionProvider>
{
    _Bool _selectionBeganWithPushedViewController;
    _Bool _isAnimatingSearch;
    NSDate *_lastViewed;
    TFNTwitterAccount *_account;
    UIView<T1TabView> *_tabView;
    id <T1DashPresenter> _dashPresenter;
    T1DashBarButtonItem *_dashItem;
    TFNBarButtonItem *_cameraComposeItem;
    TFNBarButtonItem *_peopleItem;
    TFNBarButtonItem *_peopleDiscoveryItem;
    TFNBarButtonItem *_peopleDiscoveryRightSideItem;
    TFNBarButtonItem *_searchItem;
    T1SearchViewContainerView *_searchTextFieldContainerView;
    UILongPressGestureRecognizer *_dashButtonLongPressRecognizer;
    UILongPressGestureRecognizer *_composeLongPressGestureRecognizer;
}

+ (long long)panelID;
@property(nonatomic) _Bool isAnimatingSearch; // @synthesize isAnimatingSearch=_isAnimatingSearch;
@property(retain, nonatomic) UILongPressGestureRecognizer *composeLongPressGestureRecognizer; // @synthesize composeLongPressGestureRecognizer=_composeLongPressGestureRecognizer;
@property(retain, nonatomic) UILongPressGestureRecognizer *dashButtonLongPressRecognizer; // @synthesize dashButtonLongPressRecognizer=_dashButtonLongPressRecognizer;
@property(retain, nonatomic) T1SearchViewContainerView *searchTextFieldContainerView; // @synthesize searchTextFieldContainerView=_searchTextFieldContainerView;
@property(retain, nonatomic) TFNBarButtonItem *searchItem; // @synthesize searchItem=_searchItem;
@property(retain, nonatomic) TFNBarButtonItem *peopleDiscoveryRightSideItem; // @synthesize peopleDiscoveryRightSideItem=_peopleDiscoveryRightSideItem;
@property(retain, nonatomic) TFNBarButtonItem *peopleDiscoveryItem; // @synthesize peopleDiscoveryItem=_peopleDiscoveryItem;
@property(retain, nonatomic) TFNBarButtonItem *peopleItem; // @synthesize peopleItem=_peopleItem;
@property(retain, nonatomic) TFNBarButtonItem *cameraComposeItem; // @synthesize cameraComposeItem=_cameraComposeItem;
@property(retain, nonatomic) T1DashBarButtonItem *dashItem; // @synthesize dashItem=_dashItem;
@property(nonatomic) __weak id <T1DashPresenter> dashPresenter; // @synthesize dashPresenter=_dashPresenter;
@property(nonatomic) _Bool selectionBeganWithPushedViewController; // @synthesize selectionBeganWithPushedViewController=_selectionBeganWithPushedViewController;
@property(readonly, nonatomic) UIView<T1TabView> *tabView; // @synthesize tabView=_tabView;
@property(readonly, nonatomic) TFNTwitterAccount *account; // @synthesize account=_account;
@property(readonly, nonatomic) NSDate *lastViewed; // @synthesize lastViewed=_lastViewed;
- (void).cxx_destruct;
- (void)_t1_main_updateSearchTextFieldContainerDropInteraction;
- (void)_t1_notification_accountFeatureSwitchDidUpdate:(id)arg1;
- (void)_t1_notification_voiceOverStatusDidChange:(id)arg1;
- (void)dropInteraction:(id)arg1 sessionDidEnter:(id)arg2;
- (_Bool)dropInteraction:(id)arg1 canHandleSession:(id)arg2;
- (void)tweetDraftsViewControllerDidTapClose:(id)arg1;
- (void)tweetDraftsViewControllerDidTapComposeTweet:(id)arg1;
- (void)tweetDraftsViewController:(id)arg1 didSelectComposition:(id)arg2;
- (void)_t1_main_updateTabBarShadowHidden;
- (void)tfn_setNeedsTabBarShadowHiddenUpdate;
- (void)navigationController:(id)arg1 didShowViewController:(id)arg2 animated:(_Bool)arg3;
- (void)navigationController:(id)arg1 willShowViewController:(id)arg2 animated:(_Bool)arg3;
- (id)navigationControllerTransitionForOperation:(long long)arg1 fromViewController:(id)arg2 toViewController:(id)arg3;
- (void)searchTextViewWasTapped:(id)arg1;
- (_Bool)_t1_main_isCameraComposeActive;
- (void)_t1_main_updateCameraComposeButtonItem;
- (void)viewWillTransitionToSize:(struct CGSize)arg1 withTransitionCoordinator:(id)arg2;
- (void)viewDidDisappear:(_Bool)arg1;
- (void)viewDidLayoutSubviews;
- (void)viewWillLayoutSubviews;
- (void)viewWillAppear:(_Bool)arg1;
- (_Bool)_t1_main_cameraComposeEnabledForViewController:(id)arg1 isRoot:(_Bool)arg2 traitCollection:(id)arg3;
- (void)_t1_main_updateNavigationItemForViewController:(id)arg1 isRoot:(_Bool)arg2;
- (void)setViewControllers:(id)arg1;
- (void)pushViewController:(id)arg1 animated:(_Bool)arg2;
- (_Bool)leftBarButtonItemTemporaryDelayEnabled;
- (void)_t1_main_triggerTooltip;
- (void)_t1_main_cleanupTooltip;
- (void)_t1_main_initializeTooltip;
- (void)handleSearchKeyCommand;
- (void)handleComposeTweetKeyCommand;
- (void)handlePanelKeyCommand:(id)arg1;
- (_Bool)_t1_main_canHandleSearchKeyCommand;
- (id)keyCommands;
- (_Bool)t1_showsActionButton;
- (id)t1_actionButtonItems;
- (_Bool)tfn_dashGestureEnabled;
- (void)_t1_action_didTapPeopleButton:(id)arg1;
- (void)_t1_action_didTapSearchButton:(id)arg1;
- (void)_t1_action_didTapComposeButton:(id)arg1;
- (void)_t1_action_didLongPressDashButton:(id)arg1;
- (void)_t1_action_didTapDashButton:(id)arg1;
- (void)progressCenter:(id)arg1 didCompleteProgress:(id)arg2;
- (void)progressCenter:(id)arg1 didUpdateProgress:(id)arg2;
- (void)progressCenter:(id)arg1 didStartProgress:(id)arg2;
- (void)_t1_updateCollapsingNavigationBar;
- (void)initializeProgress;
@property(readonly, nonatomic) _Bool canPresentNewsCamera;
@property(readonly, nonatomic) _Bool canPresentDash;
- (void)showPhotoGalleryComposerFromBarButtonItem:(id)arg1;
- (void)showGIFSearchComposerFromBarButtonItem:(id)arg1;
- (void)showNewsCameraFromBarButtonItem:(id)arg1;
- (void)showDraftsFromBarButtonItem:(id)arg1;
- (void)showComposeFromBarButtonItem:(id)arg1;
- (void)_t1_main_showSearchFromBarButtonItem:(id)arg1;
@property(readonly, nonatomic) _Bool isShowingSearchTypeahead;
- (void)performSearchTextViewTapAction;
- (void)backButtonLongPressAction:(id)arg1;
- (void)tabWasLongPressed;
- (void)tabWasSelectedWithOptions:(long long)arg1;
- (id)rootTabViewControllerForAccount:(id)arg1;
@property(readonly, nonatomic) NSString *scribePage;
@property(readonly, nonatomic) long long panelID;
- (void)dealloc;
- (id)initWithAccount:(id)arg1 tabView:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;
@property(readonly, nonatomic) id <NSCopying> uniqueID;

@end

