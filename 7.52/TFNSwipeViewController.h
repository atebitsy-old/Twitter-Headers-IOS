//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIViewController.h>

#import <TFNUI/UIScrollViewDelegate-Protocol.h>

@class NSMutableArray, NSString, UIScrollView;
@protocol TFNSwipeViewControllerDataSource, TFNSwipeViewControllerDelegate;

@interface TFNSwipeViewController : UIViewController <UIScrollViewDelegate>
{
    NSMutableArray *_entries;
    _Bool _visible;
    _Bool _viewHasAppeared;
    long long _targetIndex;
    _Bool _establishingTargetIndex;
    double _endDragContentOffsetX;
    _Bool _forceNotification;
    CDUnknownBlockType _scrollAnimationCompletion;
    _Bool _swiping;
    id <TFNSwipeViewControllerDataSource> _dataSource;
    id <TFNSwipeViewControllerDelegate> _delegate;
    double _viewSpacing;
    UIScrollView *_scrollView;
    long long _currentIndex;
    long long _viewControllerPreloadDistance;
}

@property(nonatomic) long long viewControllerPreloadDistance; // @synthesize viewControllerPreloadDistance=_viewControllerPreloadDistance;
@property(nonatomic) long long currentIndex; // @synthesize currentIndex=_currentIndex;
@property(readonly, nonatomic) _Bool swiping; // @synthesize swiping=_swiping;
@property(readonly, nonatomic) UIScrollView *scrollView; // @synthesize scrollView=_scrollView;
@property(nonatomic) double viewSpacing; // @synthesize viewSpacing=_viewSpacing;
@property(nonatomic) __weak id <TFNSwipeViewControllerDelegate> delegate; // @synthesize delegate=_delegate;
@property(nonatomic) __weak id <TFNSwipeViewControllerDataSource> dataSource; // @synthesize dataSource=_dataSource;
- (void).cxx_destruct;
- (id)_accessibilityStringForEntryAtIndex:(long long)arg1;
- (_Bool)accessibilityScroll:(long long)arg1;
- (void)_setScrollsToTop:(_Bool)arg1 onView:(id)arg2 ofEntry:(id)arg3;
- (void)_updateScrollsToTop;
- (void)_performDelayedLoadOfCurrentViewController;
- (void)_cancelDelayedLoadOfCurrentViewController;
- (void)_scheduleDelayedLoadOfCurrentViewController;
- (void)_detachEntry:(id)arg1;
- (_Bool)_attachViewControllerAtIndex:(long long)arg1 visible:(_Bool)arg2 load:(_Bool)arg3 animated:(_Bool)arg4;
- (void)_updateAttachedViewControllers;
- (void)_updateCurrentIndex;
- (void)_scrollToIndex:(long long)arg1 animated:(_Bool)arg2 forceNotification:(_Bool)arg3 shouldLoadTarget:(_Bool)arg4 completion:(CDUnknownBlockType)arg5;
- (void)_layoutViewControllers;
- (void)_recalculateContentSize;
- (void)_didEndScrolling;
- (void)scrollViewDidEndScrollingAnimation:(id)arg1;
- (void)scrollViewDidEndDecelerating:(id)arg1;
- (void)scrollViewDidEndDragging:(id)arg1 willDecelerate:(_Bool)arg2;
- (void)scrollViewWillBeginDragging:(id)arg1;
- (void)_notifyWillUpdateCurrentIndex;
- (void)scrollViewDidScroll:(id)arg1;
- (void)tfn_addDirectlyOwnedViewControllersToMutableArray:(id)arg1;
- (void)_endAppearanceTransition:(_Bool)arg1 animated:(_Bool)arg2;
- (void)_beginAppearanceTransition:(_Bool)arg1 animated:(_Bool)arg2;
- (id)childViewControllerForStatusBarHidden;
- (_Bool)shouldAutomaticallyForwardAppearanceMethods;
- (void)viewDidDisappear:(_Bool)arg1;
- (void)viewWillDisappear:(_Bool)arg1;
- (void)viewDidAppear:(_Bool)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewDidLayoutSubviews;
- (void)viewDidLoad;
- (void)enumerateViewControllersWithBlock:(CDUnknownBlockType)arg1;
- (_Bool)unloadViewControllerAtIndex:(long long)arg1;
- (_Bool)isViewControllerLoadedAtIndex:(long long)arg1;
- (void)_viewControllersDidChange:(_Bool)arg1;
- (void)moveViewControllerAtIndex:(long long)arg1 toIndex:(long long)arg2;
- (void)removeViewControllerAtIndex:(long long)arg1;
- (void)insertViewControllerAtIndex:(long long)arg1;
- (void)reloadViewControllerData;
- (id)viewControllerAtIndex:(long long)arg1;
- (long long)numberOfViewControllers;
@property(readonly, nonatomic) UIViewController *currentViewController;
- (void)setCurrentIndex:(long long)arg1 animated:(_Bool)arg2 completion:(CDUnknownBlockType)arg3;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

