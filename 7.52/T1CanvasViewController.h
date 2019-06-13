//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <TFNUI/TFNViewController.h>

#import <T1Twitter/T1CanvasInnerViewControllerDelegate-Protocol.h>
#import <T1Twitter/TFNCanvasEventHandlerDelegate-Protocol.h>
#import <T1Twitter/TFNPresented-Protocol.h>
#import <T1Twitter/UIGestureRecognizerDelegate-Protocol.h>
#import <T1Twitter/UIViewControllerTransitioningDelegate-Protocol.h>

@class NSMutableDictionary, NSString, T1CanvasTweetBar, TFNCanvasBackgroundView, UIPanGestureRecognizer, UIView, UIViewController;
@protocol T1CanvasInnerViewControllerProtocol, TFNCanvasControllableElementView, TFNCanvasEventHandler, TFNCanvasEventHandlerDelegate;

@interface T1CanvasViewController : TFNViewController <UIGestureRecognizerDelegate, UIViewControllerTransitioningDelegate, TFNCanvasEventHandlerDelegate, T1CanvasInnerViewControllerDelegate, TFNPresented>
{
    struct CGPoint _panStartLocation;
    struct CGAffineTransform _elementViewTransform;
    _Bool _topRightBarButtonItemHidden;
    UIViewController *_sourceViewController;
    TFNViewController<T1CanvasInnerViewControllerProtocol> *_innerViewController;
    T1CanvasTweetBar *_tweetBar;
    UIPanGestureRecognizer *_gestureRecognizer;
    NSMutableDictionary *_barButtonItemDictionary;
    NSMutableDictionary *_topChromeDictionary;
    NSMutableDictionary *_bottomChromeDictionary;
    id <TFNCanvasEventHandler> _eventHandler;
}

@property(retain, nonatomic) id <TFNCanvasEventHandler> eventHandler; // @synthesize eventHandler=_eventHandler;
@property(readonly, nonatomic) NSMutableDictionary *bottomChromeDictionary; // @synthesize bottomChromeDictionary=_bottomChromeDictionary;
@property(readonly, nonatomic) NSMutableDictionary *topChromeDictionary; // @synthesize topChromeDictionary=_topChromeDictionary;
@property(readonly, nonatomic) NSMutableDictionary *barButtonItemDictionary; // @synthesize barButtonItemDictionary=_barButtonItemDictionary;
@property(readonly, nonatomic) UIPanGestureRecognizer *gestureRecognizer; // @synthesize gestureRecognizer=_gestureRecognizer;
@property(readonly, nonatomic) T1CanvasTweetBar *tweetBar; // @synthesize tweetBar=_tweetBar;
@property(retain, nonatomic) TFNViewController<T1CanvasInnerViewControllerProtocol> *innerViewController; // @synthesize innerViewController=_innerViewController;
@property(readonly, nonatomic) UIViewController *sourceViewController; // @synthesize sourceViewController=_sourceViewController;
@property(nonatomic, getter=isTopRightBarButtonItemHidden) _Bool topRightBarButtonItemHidden; // @synthesize topRightBarButtonItemHidden=_topRightBarButtonItemHidden;
- (void).cxx_destruct;
- (void)setBottomChrome:(id)arg1 forOrientations:(unsigned long long)arg2;
- (void)setTopBarBackgroundImage:(id)arg1 forOrientations:(unsigned long long)arg2;
- (void)setTopRightBarButtonItem:(unsigned long long)arg1 text:(id)arg2 target:(id)arg3 action:(SEL)arg4 forOrientations:(unsigned long long)arg5;
- (void)innerViewControllerRequestedDismissal:(id)arg1;
- (void)innerViewControllerDidTransitionToFullScreen:(id)arg1;
@property(readonly, nonatomic) double elementViewPadding;
- (void)eventHandler:(id)arg1 didHandleViewEvent:(id)arg2;
- (void)handleViewEvent:(id)arg1;
- (void)tfnPresentedCustomDismissAnimated:(_Bool)arg1 completion:(CDUnknownBlockType)arg2;
- (void)tfnPresentedCustomPresentFromViewController:(id)arg1 animated:(_Bool)arg2 completion:(CDUnknownBlockType)arg3;
- (_Bool)gestureRecognizer:(id)arg1 shouldReceiveTouch:(id)arg2;
- (id)animationControllerForDismissedController:(id)arg1;
- (id)animationControllerForPresentedController:(id)arg1 presentingController:(id)arg2 sourceController:(id)arg3;
- (_Bool)tfn_locksOrientationWhenPresented;
- (void)tfn_addDirectlyOwnedViewControllersToMutableArray:(id)arg1;
- (long long)preferredStatusBarUpdateAnimation;
- (long long)preferredStatusBarStyle;
- (_Bool)prefersStatusBarHidden;
- (void)viewDidLayoutSubviews;
- (void)viewDidLoad;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;
- (void)dealloc;
- (void)_setChromeHidden:(_Bool)arg1 animated:(_Bool)arg2;
- (void)_restoreAfterDistanceDragged:(double)arg1;
- (void)_updateWithDistanceDragged:(double)arg1;
- (void)_didDragElement:(id)arg1;
- (void)_updateChromeForMask:(unsigned long long)arg1 position:(long long)arg2 orientation:(long long)arg3 animated:(_Bool)arg4;
- (void)_updateRightBarButtonItemForMask:(unsigned long long)arg1 orientation:(long long)arg2 animated:(_Bool)arg3;
- (id)_barButtonItem:(unsigned long long)arg1 withText:(id)arg2 target:(id)arg3 action:(SEL)arg4;
- (void)_setupElementViewWithPreviewView:(id)arg1;
@property(readonly, nonatomic) UIView<TFNCanvasControllableElementView> *elementView;
@property(readonly, nonatomic) UIView *bottomBar;
@property(readonly, nonatomic) UIView *topBar;
@property(readonly, nonatomic) TFNCanvasBackgroundView *backgroundView;
@property(readonly, nonatomic) double backgroundHeight;
- (void)setOrientation:(long long)arg1 animated:(_Bool)arg2;
- (unsigned long long)supportedInterfaceOrientations;
- (id)initWithViewController:(id)arg1 sourceViewController:(id)arg2 previewView:(id)arg3 account:(id)arg4 status:(id)arg5 eventHandler:(id)arg6;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(nonatomic) __weak id <TFNCanvasEventHandlerDelegate> eventHandlerDelegate;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
