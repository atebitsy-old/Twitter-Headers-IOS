//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <T1Twitter/NSObject-Protocol.h>

@class T1AddBannerViewController, UIImage;

@protocol T1AddBannerViewControllerDelegate <NSObject>
- (void)addBannerViewControllerDidTapSkip:(T1AddBannerViewController *)arg1;
- (void)addBannerViewController:(T1AddBannerViewController *)arg1 didTapNextWithImage:(UIImage *)arg2;

@optional
- (void)addBannerViewController:(T1AddBannerViewController *)arg1 userDidSelectImage:(UIImage *)arg2;
@end
