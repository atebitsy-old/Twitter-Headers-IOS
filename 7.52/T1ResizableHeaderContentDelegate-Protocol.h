//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <T1Twitter/NSObject-Protocol.h>

@class NSString, T1ResizableHeaderContainerViewController, TFNTwitterEntityImageInfo, UIColor, UIViewController;

@protocol T1ResizableHeaderContentDelegate <NSObject>
- (UIViewController *)resizableHeaderContainerViewController:(T1ResizableHeaderContainerViewController *)arg1 viewControllerAtIndex:(long long)arg2;
- (NSString *)resizableHeaderContainerViewController:(T1ResizableHeaderContainerViewController *)arg1 titleAtIndex:(long long)arg2;
- (long long)numberOfEntriesForResizableHeaderContainerViewController:(T1ResizableHeaderContainerViewController *)arg1;

@optional
- (TFNTwitterEntityImageInfo *)resizableHeaderContainerViewController:(T1ResizableHeaderContainerViewController *)arg1 badgeImageInfoForItemAtIndex:(long long)arg2;
- (UIColor *)resizableHeaderContainerViewController:(T1ResizableHeaderContainerViewController *)arg1 customTitleColorAtIndex:(long long)arg2;
- (UIColor *)resizableHeaderContainerViewController:(T1ResizableHeaderContainerViewController *)arg1 customHighlightedTitleColorAtIndex:(long long)arg2;
- (_Bool)resizableHeaderContainerViewControllerShouldAutoHideNavigationBar:(T1ResizableHeaderContainerViewController *)arg1;
- (void)resizableHeaderContainerViewController:(T1ResizableHeaderContainerViewController *)arg1 didUpdateContentHeight:(double)arg2 fromContentHeight:(double)arg3;
- (_Bool)resizableHeaderContainerViewController:(T1ResizableHeaderContainerViewController *)arg1 shouldScrollViewControllerToTop:(UIViewController *)arg2 atIndex:(long long)arg3;
- (void)resizableHeaderContainerViewController:(T1ResizableHeaderContainerViewController *)arg1 didSelectViewController:(UIViewController *)arg2 atIndex:(long long)arg3 indexChanged:(_Bool)arg4;
- (void)resizableHeaderContainerViewController:(T1ResizableHeaderContainerViewController *)arg1 willSelectViewController:(UIViewController *)arg2 atIndex:(long long)arg3 indexChanged:(_Bool)arg4;
@end

