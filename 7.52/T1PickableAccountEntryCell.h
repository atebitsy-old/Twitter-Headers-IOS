//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <T1Twitter/TFNPickableItemCell.h>

@class T1AccountListEntry, T1AvatarImageView, T1ProfileAvatarImageView, TFNBadgeView, UIImage, UIImageView;

@interface T1PickableAccountEntryCell : TFNPickableItemCell
{
    T1AvatarImageView *_avatarImageView;
    UIImageView *_verifiedOrProtectedBadge;
    T1ProfileAvatarImageView *_contributorBadgeView;
    UIImage *_profileImage;
    UIImage *_contributorProfileImage;
    UIImage *_cachedPlaceholderAvatarImage;
    T1AccountListEntry *_accountEntry;
    TFNBadgeView *_accessoryBadgeView;
}

@property(retain, nonatomic) TFNBadgeView *accessoryBadgeView; // @synthesize accessoryBadgeView=_accessoryBadgeView;
@property(retain, nonatomic) T1AccountListEntry *accountEntry; // @synthesize accountEntry=_accountEntry;
- (void).cxx_destruct;
- (void)_accountUserDidUpdate:(id)arg1;
- (void)setSelected:(_Bool)arg1 animated:(_Bool)arg2;
- (void)setHighlighted:(_Bool)arg1 animated:(_Bool)arg2;
- (void)layoutSubviews;
- (void)updateSubviews;
- (struct CGSize)_avatarSize;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;

@end
