//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class T1AvatarImageView, UILabel;

@interface T1SingleSignOnAvatarView : UIView
{
    UIView *_caretSpacer;
    T1AvatarImageView *_avatarImageView;
    UIView *_caretButton;
    UILabel *_displayNameLabel;
    UILabel *_usernameLabel;
    CDUnknownBlockType _handleShowAccountSwitcher;
}

+ (struct CGSize)avatarSize;
@property(copy, nonatomic) CDUnknownBlockType handleShowAccountSwitcher; // @synthesize handleShowAccountSwitcher=_handleShowAccountSwitcher;
@property(readonly, nonatomic) UILabel *usernameLabel; // @synthesize usernameLabel=_usernameLabel;
@property(readonly, nonatomic) UILabel *displayNameLabel; // @synthesize displayNameLabel=_displayNameLabel;
@property(readonly, nonatomic) UIView *caretButton; // @synthesize caretButton=_caretButton;
@property(readonly, nonatomic) T1AvatarImageView *avatarImageView; // @synthesize avatarImageView=_avatarImageView;
@property(readonly, nonatomic) UIView *caretSpacer; // @synthesize caretSpacer=_caretSpacer;
- (void).cxx_destruct;
- (void)_t1_didTapCaret:(id)arg1;
- (void)layoutSubviews;
- (id)initWithFrame:(struct CGRect)arg1;

@end
