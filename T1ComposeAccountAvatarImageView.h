//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <T1Twitter/T1AvatarImageView.h>

@class TFNTwitterAccount;

@interface T1ComposeAccountAvatarImageView : T1AvatarImageView
{
    TFNTwitterAccount *_account;
    struct CGSize _avatarSize;
}

@property(nonatomic) struct CGSize avatarSize; // @synthesize avatarSize=_avatarSize;
@property(retain, nonatomic) TFNTwitterAccount *account; // @synthesize account=_account;
- (void).cxx_destruct;
- (void)_t1_notification_accountUserDidUpdate:(id)arg1;
- (struct CGSize)intrinsicContentSize;
- (void)_t1_main_updateUser;
- (id)initWithFrame:(struct CGRect)arg1;
- (id)initWithCoder:(id)arg1;

@end
