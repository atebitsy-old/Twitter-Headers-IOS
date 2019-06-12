//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <T1Twitter/TFNSizeThatFitsHelperDelegate-Protocol.h>

@class NSString, T1UserView, T1UserViewLayoutState, TFNLayoutMetrics, TFNTwitterAccount, UIFont;
@protocol T1UserViewActionControlProvider, T1UserViewModel;

@protocol T1UserViewLayoutDelegate <TFNSizeThatFitsHelperDelegate>
+ (UIFont *)infoTextFontForCellStyle:(long long)arg1 expanded:(_Bool)arg2;
+ (UIFont *)usernameFontForCellStyle:(long long)arg1 expanded:(_Bool)arg2;
+ (UIFont *)fullNameFontForCellStyle:(long long)arg1 expanded:(_Bool)arg2;
+ (UIFont *)socialTextFontForCellStyle:(long long)arg1 expanded:(_Bool)arg2;
+ (double)estimatedHeightForUserViewModel:(id <T1UserViewModel>)arg1 cellStyle:(long long)arg2 avatarSize:(struct CGSize)arg3 showBio:(_Bool)arg4 bioMaxLines:(unsigned long long)arg5 showUserBlocked:(_Bool)arg6 showDesignatorBadge:(_Bool)arg7 showReplyBadge:(_Bool)arg8 replyBadgeText:(NSString *)arg9 expanded:(_Bool)arg10 layoutMetrics:(TFNLayoutMetrics *)arg11;
+ (double)heightForUserViewModel:(id <T1UserViewModel>)arg1 account:(TFNTwitterAccount *)arg2 cellStyle:(long long)arg3 followControlType:(unsigned long long)arg4 followControlVariant:(unsigned long long)arg5 avatarSize:(struct CGSize)arg6 showBio:(_Bool)arg7 bioMaxLines:(unsigned long long)arg8 showUserBlocked:(_Bool)arg9 showDesignatorBadge:(_Bool)arg10 showReplyBadge:(_Bool)arg11 replyBadgeText:(NSString *)arg12 expanded:(_Bool)arg13 layoutMetrics:(TFNLayoutMetrics *)arg14;
+ (double)heightForUserViewModel:(id <T1UserViewModel>)arg1 account:(TFNTwitterAccount *)arg2 cellStyle:(long long)arg3 actionControlProvider:(id <T1UserViewActionControlProvider>)arg4 avatarSize:(struct CGSize)arg5 showBio:(_Bool)arg6 bioMaxLines:(unsigned long long)arg7 showUserBlocked:(_Bool)arg8 showDesignatorBadge:(_Bool)arg9 showReplyBadge:(_Bool)arg10 replyBadgeText:(NSString *)arg11 expanded:(_Bool)arg12 layoutMetrics:(TFNLayoutMetrics *)arg13;
+ (struct CGSize)defaultAvatarSizeForStyle:(long long)arg1 showBio:(_Bool)arg2 layoutMetrics:(TFNLayoutMetrics *)arg3;
- (TFNLayoutMetrics *)adjustedLayoutMetricsForLayoutMetrics:(TFNLayoutMetrics *)arg1;
- (T1UserViewLayoutState *)layoutStateForUserView:(T1UserView *)arg1;
@end
