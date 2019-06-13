//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <T1Twitter/T1BaseWebViewController.h>

#import <T1Twitter/T1AmbientNotificationDelegate-Protocol.h>
#import <T1Twitter/T1AntiSpamHitTestViewDelegate-Protocol.h>
#import <T1Twitter/T1JumpBackToHomeTimelineBehavior-Protocol.h>
#import <T1Twitter/T1TwitterAuthenticated-Protocol.h>
#import <T1Twitter/T1WebBrowserViewController-Protocol.h>
#import <T1Twitter/TFNPresented-Protocol.h>

@class NSArray, NSMutableArray, NSString, NSURL, T1AmbientNotificationViewController, T1WebViewLogger, T1WebViewRedirectTracker, TFNBarButtonItem, TFNTwitterAccount, TFNTwitterStatus, TFNTwitterURLParserResult, UIView, UIViewController;

@interface T1WebViewController : T1BaseWebViewController <T1TwitterAuthenticated, T1AmbientNotificationDelegate, T1AntiSpamHitTestViewDelegate, TFNPresented, T1JumpBackToHomeTimelineBehavior, T1WebBrowserViewController>
{
    NSArray *_loadingItemsSet;
    NSArray *_loadedItemsSet;
    _Bool _userDidNavigate;
    _Bool _viewDidInitiallyAppear;
    TFNTwitterStatus *_sourceStatus;
    TFNTwitterURLParserResult *_pendingURLParserResult;
    NSString *_subtitle;
    NSString *_restartSuspensionToken;
    NSString *_scribeComponent;
    _Bool _viewIsAppearing;
    _Bool _lastRedirectWentNative;
    T1WebViewRedirectTracker *_redirectTracker;
    _Bool _isAuthenticated;
    _Bool _ampURLReceived;
    _Bool _userTappedButton;
    _Bool _usingInlineErrorMessage;
    _Bool _shouldOnlyScribeRedirectHosts;
    _Bool _shouldHideSecuredIcon;
    _Bool _shouldDisableExternalLinks;
    _Bool _shouldHideNavigationIcons;
    _Bool _shouldDisplayWebviewHTMLTitle;
    _Bool _shouldHideShareSheetIcon;
    _Bool _viewportShouldCoverSafeArea;
    _Bool _presentAsModalSheet;
    _Bool _hasCustomNavigationBar;
    _Bool _errorAlertControllerPresented;
    UIView *_errorMessage;
    TFNTwitterAccount *_account;
    TFNBarButtonItem *_rightBarButtonItem;
    UIViewController *_sourceViewController;
    long long _state;
    T1WebViewLogger *_webViewLogger;
    NSMutableArray *_tapGestureRecognizers;
    T1AmbientNotificationViewController *_ambientNotificationViewController;
}

+ (void)setupWithUserAgentProvider:(id)arg1;
@property(readonly, nonatomic) __weak T1AmbientNotificationViewController *ambientNotificationViewController; // @synthesize ambientNotificationViewController=_ambientNotificationViewController;
@property(retain, nonatomic) NSMutableArray *tapGestureRecognizers; // @synthesize tapGestureRecognizers=_tapGestureRecognizers;
@property(retain, nonatomic) T1WebViewLogger *webViewLogger; // @synthesize webViewLogger=_webViewLogger;
@property(nonatomic) long long state; // @synthesize state=_state;
@property(nonatomic) __weak UIViewController *sourceViewController; // @synthesize sourceViewController=_sourceViewController;
@property(nonatomic, getter=isErrorAlertControllerPresented) _Bool errorAlertControllerPresented; // @synthesize errorAlertControllerPresented=_errorAlertControllerPresented;
@property(readonly, nonatomic) _Bool hasCustomNavigationBar; // @synthesize hasCustomNavigationBar=_hasCustomNavigationBar;
@property(readonly, nonatomic) _Bool presentAsModalSheet; // @synthesize presentAsModalSheet=_presentAsModalSheet;
@property(readonly, nonatomic) TFNBarButtonItem *rightBarButtonItem; // @synthesize rightBarButtonItem=_rightBarButtonItem;
@property(nonatomic) _Bool viewportShouldCoverSafeArea; // @synthesize viewportShouldCoverSafeArea=_viewportShouldCoverSafeArea;
@property(nonatomic) _Bool shouldHideShareSheetIcon; // @synthesize shouldHideShareSheetIcon=_shouldHideShareSheetIcon;
@property(nonatomic) _Bool shouldDisplayWebviewHTMLTitle; // @synthesize shouldDisplayWebviewHTMLTitle=_shouldDisplayWebviewHTMLTitle;
@property(nonatomic) _Bool shouldHideNavigationIcons; // @synthesize shouldHideNavigationIcons=_shouldHideNavigationIcons;
@property(nonatomic) _Bool shouldDisableExternalLinks; // @synthesize shouldDisableExternalLinks=_shouldDisableExternalLinks;
@property(nonatomic) _Bool shouldHideSecuredIcon; // @synthesize shouldHideSecuredIcon=_shouldHideSecuredIcon;
@property(nonatomic) _Bool shouldOnlyScribeRedirectHosts; // @synthesize shouldOnlyScribeRedirectHosts=_shouldOnlyScribeRedirectHosts;
@property(nonatomic) _Bool usingInlineErrorMessage; // @synthesize usingInlineErrorMessage=_usingInlineErrorMessage;
@property(copy, nonatomic) NSString *subtitle; // @synthesize subtitle=_subtitle;
@property(readonly, nonatomic) TFNTwitterStatus *sourceStatus; // @synthesize sourceStatus=_sourceStatus;
@property(nonatomic) __weak TFNTwitterAccount *account; // @synthesize account=_account;
- (void).cxx_destruct;
- (void)scribeDismiss;
- (id)scribeImpressionParameters;
- (id)scribeComponent;
- (id)scribeSection;
- (id)scribePage;
- (id)_scribeParamsWithRootURL:(id)arg1;
- (id)scribeParams;
- (id)scribe;
- (_Bool)accessibilityPerformEscape;
- (void)screenTouched;
- (id)currentViewController;
- (struct CGRect)tabBarFrame;
- (id)tfn_contentScrollView;
- (void)scrollViewDidScroll:(id)arg1;
- (void)scrollViewWillBeginDragging:(id)arg1;
- (_Bool)_t1_viewControllerHierarchyContainsSelf:(id)arg1;
- (void)_t1_viewControllerDidPresent:(id)arg1;
- (void)tfnPresentedCustomPresentFromViewController:(id)arg1 animated:(_Bool)arg2 completion:(CDUnknownBlockType)arg3;
- (void)_openViewControllerForURLParserResult:(id)arg1;
- (_Bool)_isAccountWebViewAuthURL:(id)arg1;
- (_Bool)_hasAuthorizationHeader:(id)arg1;
- (void)setNeedsTitleViewUpdate;
- (void)_getTitle:(out id *)arg1 subtitle:(out id *)arg2 accessoryImage:(out id *)arg3;
- (void)updateTitleView;
@property(readonly, copy, nonatomic) NSString *displaySubtitle;
- (id)displayHTMLTitle;
@property(readonly, copy, nonatomic) NSString *displayTitle;
- (void)setCurrentURL:(id)arg1;
- (void)_navBarTapped:(id)arg1;
- (void)setWebViewHTMLTitle:(id)arg1;
- (void)setTitle:(id)arg1;
- (_Bool)_barButtonsShouldBeOnTop;
- (void)_updateBars;
- (void)_updateToolbarItems;
- (void)_updateNavbarItems:(_Bool)arg1;
- (double)lengthOfLayoutGuide:(long long)arg1 forEnvironment:(id)arg2;
- (void)viewWillTransitionToSize:(struct CGSize)arg1 withTransitionCoordinator:(id)arg2;
- (void)_setupAmbientNotificationViewController;
- (void)_setupTitleView;
- (void)_setupAntiSpamHitTestView;
- (void)_setupSubviews;
- (void)tfn_previewingStateDidChange;
- (void)willAnimateRotationToInterfaceOrientation:(long long)arg1 duration:(double)arg2;
- (void)didMoveToParentViewController:(id)arg1;
- (void)viewDidLayoutSubviews;
- (void)viewWillDisappear:(_Bool)arg1;
- (void)viewDidAppear:(_Bool)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewDidLoad;
- (void)logWebViewProgressWithEstimatedProgressValue:(double)arg1;
- (void)_t1_adjustWebContentViewport;
- (void)didFinishLoadingWithError:(id)arg1;
- (_Bool)shouldStartLoadWithRequest:(id)arg1 navigationType:(long long)arg2;
- (void)willStartLoadingNavigationRequestOfType:(long long)arg1;
- (void)didReceiveNavigationRequestOfType:(long long)arg1;
- (void)webView:(id)arg1 decidePolicyForNavigationResponse:(id)arg2 decisionHandler:(CDUnknownBlockType)arg3;
- (void)_retryMessageTapped:(id)arg1;
@property(readonly, nonatomic) UIView *errorMessage; // @synthesize errorMessage=_errorMessage;
- (id)_authenticatedMutableURLRequestFromSourceRequest:(id)arg1 parameters:(id)arg2;
- (unsigned long long)openExternalURLAndDismissOnSuccess:(id)arg1;
- (id)protocolHandlerContext;
- (unsigned long long)supportedInterfaceOrientations;
- (void)private_logWebViewErrorMessage:(id)arg1;
- (void)private_logCustomActionSheetAction:(id)arg1;
- (void)private_showCustomShareActionSheet:(id)arg1 entityURL:(id)arg2;
- (void)private_showActivityViewController:(id)arg1 entityURL:(id)arg2;
- (void)sendViaDM:(id)arg1;
- (void)private_composeWithURLString:(id)arg1;
- (void)compose:(id)arg1;
- (void)close:(id)arg1;
- (void)tweet:(id)arg1;
- (void)action:(id)arg1;
- (void)_fetchShareEntityURLWithCompletion:(CDUnknownBlockType)arg1;
- (id)tweetCompositionFromCurrentContext;
- (void)_prepWebViewLoggerForRootURL:(id)arg1;
- (void)_loadInitialURLRequestIfNeeded:(id)arg1;
- (_Bool)isUsingNonPersistentDataStore;
- (id)initWithRootURL:(id)arg1 account:(id)arg2 sourceStatus:(id)arg3 scribeComponent:(id)arg4;
- (id)initWithRootURL:(id)arg1 account:(id)arg2 sourceStatus:(id)arg3 entersReaderIfAvailable:(_Bool)arg4 scribeComponent:(id)arg5;
- (void)dealloc;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly, nonatomic) NSURL *rootURL;
@property(readonly) Class superclass;

@end
