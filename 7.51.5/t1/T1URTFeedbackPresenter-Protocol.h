//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <T1Twitter/NSObject-Protocol.h>

@class NSDictionary, NSString, T1URTFeedbackContext, UIView, UIViewController;

@protocol T1URTFeedbackPresenter <NSObject>
- (void)dismissActiveFeedbackPresentation:(_Bool)arg1;
- (void)presentFeedbackContext:(T1URTFeedbackContext *)arg1 forEntryID:(NSString *)arg2 fromView:(UIView *)arg3 onController:(UIViewController *)arg4 withScribeComponent:(NSString *)arg5 parameters:(NSDictionary *)arg6;
@end
