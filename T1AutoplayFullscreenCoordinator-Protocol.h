//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <T1Twitter/NSObject-Protocol.h>

@class T1PlayerSessionProducer, UIViewController;

@protocol T1AutoplayFullscreenCoordinator <NSObject>
- (void)viewController:(UIViewController *)arg1 didEndFullscreenPresentationWithPlayerSession:(T1PlayerSessionProducer *)arg2;
- (void)viewController:(UIViewController *)arg1 willBeginFullscreenPresentationWithPlayerSession:(T1PlayerSessionProducer *)arg2;
@end
