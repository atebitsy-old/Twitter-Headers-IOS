//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <TFNUI/TFNViewController.h>

#import <T1Twitter/T1NewsCameraCaptureViewControllerDelegate-Protocol.h>
#import <T1Twitter/T1TweetComposeViewControllerDelegate-Protocol.h>
#import <T1Twitter/TFNSwappingContainerViewControllerHelperDelegate-Protocol.h>

@class NSArray, NSString, T1ComposeSessionConfig, T1TweetComposeViewController, TFNSwappingContainerViewControllerHelper, TFNTwitterAccount, UILayoutGuide, UINavigationController, UIView, UIViewController;
@protocol T1TweetComposeContainerViewControllerDelegate;

@interface T1TweetComposeContainerViewController : TFNViewController <T1NewsCameraCaptureViewControllerDelegate, T1TweetComposeViewControllerDelegate, TFNSwappingContainerViewControllerHelperDelegate>
{
    id <T1TweetComposeContainerViewControllerDelegate> _delegate;
    TFNTwitterAccount *_account;
    T1ComposeSessionConfig *_sessionConfig;
    NSArray *_compositions;
    unsigned long long _mode;
    UILayoutGuide *_viewLayoutMarginsGuide;
    TFNSwappingContainerViewControllerHelper *_containerViewControllerHelper;
    UIView *_contentView;
    T1TweetComposeViewController *_tweetComposeViewController;
    UINavigationController *_tweetComposeNagivationController;
}

@property(retain, nonatomic) UINavigationController *tweetComposeNagivationController; // @synthesize tweetComposeNagivationController=_tweetComposeNagivationController;
@property(retain, nonatomic) T1TweetComposeViewController *tweetComposeViewController; // @synthesize tweetComposeViewController=_tweetComposeViewController;
@property(retain, nonatomic) UIView *contentView; // @synthesize contentView=_contentView;
@property(readonly, nonatomic) TFNSwappingContainerViewControllerHelper *containerViewControllerHelper; // @synthesize containerViewControllerHelper=_containerViewControllerHelper;
@property(retain, nonatomic) UILayoutGuide *viewLayoutMarginsGuide; // @synthesize viewLayoutMarginsGuide=_viewLayoutMarginsGuide;
@property(nonatomic) unsigned long long mode; // @synthesize mode=_mode;
@property(readonly, copy, nonatomic) NSArray *compositions; // @synthesize compositions=_compositions;
@property(retain, nonatomic) T1ComposeSessionConfig *sessionConfig; // @synthesize sessionConfig=_sessionConfig;
@property(readonly, nonatomic) TFNTwitterAccount *account; // @synthesize account=_account;
@property(nonatomic) __weak id <T1TweetComposeContainerViewControllerDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)newsCameraCaptureViewController:(id)arg1 dismissWithResult:(id)arg2;
- (id)newsCameraCaptureViewControllerPreferredPresentation:(id)arg1;
- (void)tweetComposeViewControllerDidCompleteComposing:(id)arg1;
- (void)tweetComposeViewControllerDidCancelComposing:(id)arg1;
- (void)tweetComposeViewControllerDidTapNewsCameraButton:(id)arg1;
- (void)contentViewControllerWillSwapWithTransitionCoordinator:(id)arg1;
@property(readonly, nonatomic) UIView *swappingContainerView;
- (void)tfn_keyboardDismissModalAction;
- (_Bool)tfn_canKeyboardDismissModal;
- (void)tfn_addDirectlyOwnedViewControllersToMutableArray:(id)arg1;
- (long long)preferredInterfaceOrientationForPresentation;
- (unsigned long long)supportedInterfaceOrientations;
- (_Bool)shouldAutorotate;
- (id)childViewControllerForStatusBarHidden;
- (id)childViewControllerForStatusBarStyle;
- (void)_t1_main_loadContentViewWithConstraints:(id)arg1;
- (void)viewDidLoad;
- (void)prepareForDismissWithPrompting:(_Bool)arg1 completion:(CDUnknownBlockType)arg2;
@property(readonly, nonatomic) UIViewController *contentViewController;
- (id)_t1_main_loadNewsCameraCaptureViewController;
- (id)_t1_main_loadTweetComposeNavigationController;
- (void)_t1_main_updateContentViewControllerAnimated:(_Bool)arg1;
- (id)initWithAccount:(id)arg1 compositions:(id)arg2;
- (id)initWithCoder:(id)arg1;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
