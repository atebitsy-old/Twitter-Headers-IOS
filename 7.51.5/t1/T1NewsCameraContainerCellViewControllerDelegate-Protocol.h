//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

@class T1NewsCameraContainerCellViewController;

@protocol T1NewsCameraContainerCellViewControllerDelegate
- (void)containerCellViewControllerDidRequestHideChrome:(T1NewsCameraContainerCellViewController *)arg1;
- (void)containerCellViewControllerDidRequestShowChrome:(T1NewsCameraContainerCellViewController *)arg1;
- (void)containerCellViewControllerDidRequestOpenWebSettings:(T1NewsCameraContainerCellViewController *)arg1;
- (void)containerCellViewControllerDidRequestContentRefresh:(T1NewsCameraContainerCellViewController *)arg1;
- (void)containerCellViewControllerShouldNavigateToPreviousTweetIfPossible:(T1NewsCameraContainerCellViewController *)arg1;
- (void)containerCellViewControllerShouldNavigateToNextTweetIfPossible:(T1NewsCameraContainerCellViewController *)arg1;
- (void)containerCellViewControllerDidLoadCapsuleView:(T1NewsCameraContainerCellViewController *)arg1;
- (void)containerCellViewController:(T1NewsCameraContainerCellViewController *)arg1 didSwipeDownToOffset:(struct CGPoint)arg2;
- (void)containerCellViewController:(T1NewsCameraContainerCellViewController *)arg1 didSwipeDownAnimated:(_Bool)arg2;
- (void)containerCellViewController:(T1NewsCameraContainerCellViewController *)arg1 willDismissAnimated:(_Bool)arg2;
- (void)containerCellViewController:(T1NewsCameraContainerCellViewController *)arg1 didReceiveTapAtPoint:(struct CGPoint)arg2;
- (void)containerCellViewController:(T1NewsCameraContainerCellViewController *)arg1 didScrollToChyronOffset:(struct CGPoint)arg2 scrollOffset:(struct CGPoint)arg3 topInset:(double)arg4;
@end

