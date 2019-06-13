//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <T1Twitter/NSObject-Protocol.h>

@class NSData, NSError, NSURL, UIImage;

@protocol PTVTwitterCameraCaptureDelegate <NSObject>

@optional
- (void)twitterCameraCaptureDidRenderVideoURL:(NSURL *)arg1 error:(NSError *)arg2;
- (void)twitterCameraCaptureDidCapturePhoto:(NSData *)arg1 error:(NSError *)arg2;
- (void)twitterCameraCaptureVideoTimeDidTickWithDuration:(float)arg1;
- (void)twitterCameraCaptureVideoReachedMaximumThreshold;
- (void)twitterCameraCaptureVideoReachedMinimumThreshold;
- (void)twitterCameraCaptureShouldBeginPostCaptureTransition:(UIImage *)arg1;
@end
