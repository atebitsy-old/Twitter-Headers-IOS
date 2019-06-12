//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <TFNUI/TFNViewController.h>

#import <T1Twitter/T1CameraControlsBarDelegate-Protocol.h>
#import <T1Twitter/T1CameraPhotoViewControllerDelegate-Protocol.h>
#import <T1Twitter/T1CameraVideoViewControllerDelegate-Protocol.h>
#import <T1Twitter/T1JumpBackToHomeTimelineBehavior-Protocol.h>
#import <T1Twitter/TFNTooltipDelegate-Protocol.h>
#import <T1Twitter/UIScrollViewDelegate-Protocol.h>

@class NSString, T1CameraControlsBar, T1CameraPhotoViewController, T1CameraToolbar, T1CameraVideoViewController, T1TwitterTooltip, TFNTwitterAccount, TFNTwitterVideoSegmentManager, UITapGestureRecognizer, UIView, UIViewController;
@protocol T1CameraContainerHostedCameraControllerProtocol, T1CameraContainerViewControllerDelegate;

@interface T1CameraContainerViewController : TFNViewController <UIScrollViewDelegate, T1CameraControlsBarDelegate, T1CameraPhotoViewControllerDelegate, T1CameraVideoViewControllerDelegate, TFNTooltipDelegate, T1JumpBackToHomeTimelineBehavior>
{
    long long _source;
    long long _mode;
    long long _videoMode;
    UIViewController<T1CameraContainerHostedCameraControllerProtocol> *_viewController;
    T1CameraPhotoViewController *_photoViewController;
    T1CameraVideoViewController *_videoViewController;
    UIView *_contentView;
    T1CameraControlsBar *_controlsBar;
    T1TwitterTooltip *_tooltip;
    long long _interfaceOrientation;
    UITapGestureRecognizer *_dismissTooltipRecognizer;
    double _toolbarNaturalHeight;
    long long _lockOrientation;
    _Bool _toolbarLandscape;
    struct CGPoint _toolbarCenter;
    _Bool _allowsSwitchingMode;
    id <T1CameraContainerViewControllerDelegate> _delegate;
    long long _preferredDevice;
    TFNTwitterVideoSegmentManager *_segmentManager;
    UIView *_tooltipOverlayView;
    TFNTwitterAccount *_account;
    T1CameraToolbar *_toolbar;
}

@property(readonly, nonatomic) T1CameraToolbar *toolbar; // @synthesize toolbar=_toolbar;
@property(readonly, nonatomic) TFNTwitterAccount *account; // @synthesize account=_account;
@property(retain, nonatomic) UIView *tooltipOverlayView; // @synthesize tooltipOverlayView=_tooltipOverlayView;
@property(retain, nonatomic) TFNTwitterVideoSegmentManager *segmentManager; // @synthesize segmentManager=_segmentManager;
@property(nonatomic) long long preferredDevice; // @synthesize preferredDevice=_preferredDevice;
@property(nonatomic) _Bool allowsSwitchingMode; // @synthesize allowsSwitchingMode=_allowsSwitchingMode;
@property(nonatomic) __weak id <T1CameraContainerViewControllerDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)_logAction:(id)arg1 element:(id)arg2 value:(id)arg3;
- (void)_logAction:(id)arg1 element:(id)arg2;
- (void)_logClickActionWithElement:(id)arg1;
- (id)scribeComponent;
- (id)scribeSection;
- (id)scribePage;
- (id)scribe;
- (void)tooltipDidTap:(id)arg1;
- (void)_dismissTooltipIfVisible;
- (void)_dismissTooltipRecognizerDidTap:(id)arg1;
- (void)_presentTooltipIfNeeded:(long long)arg1;
- (void)_deviceOrientationDidChange:(id)arg1;
- (void)tfn_addDirectlyOwnedViewControllersToMutableArray:(id)arg1;
- (void)videoViewController:(id)arg1 didChangeMode:(long long)arg2 animated:(_Bool)arg3;
- (void)videoViewControllerUnlockControlsOrientation:(id)arg1;
- (void)videoViewController:(id)arg1 lockControlsOrientation:(long long)arg2;
- (void)videoViewController:(id)arg1 setModeButtonHidden:(_Bool)arg2;
- (void)videoViewController:(id)arg1 setCaptureButtonEnabled:(_Bool)arg2;
- (void)videoViewControllerDidStopRecording:(id)arg1;
- (void)videoViewControllerDidStartRecording:(id)arg1;
- (void)videoViewControllerDidCancel:(id)arg1;
- (void)videoViewController:(id)arg1 didAttachVideoAsset:(id)arg2;
- (void)photoViewController:(id)arg1 didUsePhoto:(id)arg2;
- (void)photoViewController:(id)arg1 setCaptureEnabled:(_Bool)arg2;
- (void)photoViewController:(id)arg1 didCapturePhoto:(id)arg2;
- (void)photoViewControllerDidCancel:(id)arg1;
- (void)photoViewController:(id)arg1 didChangeMode:(long long)arg2;
- (void)controlsBar:(id)arg1 didChangeMode:(long long)arg2;
- (void)controlsBarDidStopPressingVideoCapture:(id)arg1;
- (void)controlsBarDidStartPressingVideoCapture:(id)arg1;
- (void)controlsBarDidTapRetakePhoto:(id)arg1;
- (void)controlsBarDidTapUsePhoto:(id)arg1;
- (void)controlsBarDidTapPhotoCapture:(id)arg1;
- (void)_animateToolbarAwayForRecording:(_Bool)arg1;
- (void)_layoutTooltipOverlayView:(long long)arg1;
- (void)_switchToVideo:(_Bool)arg1;
- (void)_switchToPhoto:(_Bool)arg1;
- (void)_addChildViewController:(id)arg1 replaceChildViewController:(id)arg2 animated:(_Bool)arg3;
- (void)_setViewController:(id)arg1 animated:(_Bool)arg2;
@property(readonly, nonatomic) T1CameraVideoViewController *videoViewController;
@property(readonly, nonatomic) T1CameraPhotoViewController *photoViewController;
- (struct CGRect)rectInTooltipOverlayViewForTooltipLocation:(long long)arg1;
- (void)setToolbarHidden:(_Bool)arg1 animated:(_Bool)arg2;
@property(nonatomic) _Bool toolbarHidden;
- (void)refreshToolBarItemsAnimated:(_Bool)arg1;
@property(readonly, nonatomic) double controlsBarHeight;
@property(readonly, nonatomic) struct UIEdgeInsets contentViewInsets;
- (void)viewDidLayoutSubviews;
- (unsigned long long)supportedInterfaceOrientations;
- (_Bool)prefersStatusBarHidden;
- (void)viewDidLoad;
- (void)viewDidDisappear:(_Bool)arg1;
- (void)viewWillDisappear:(_Bool)arg1;
- (void)viewDidFullyAppear:(_Bool)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (void)dealloc;
- (id)initWithMode:(long long)arg1 account:(id)arg2;
- (id)initWithMode:(long long)arg1 account:(id)arg2 source:(long long)arg3;
- (id)initWithCoder:(id)arg1;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
