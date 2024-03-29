//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class UIImageView;

@interface T1CameraFocusLockIndicatorView : UIView
{
    UIImageView *_iconView;
    _Bool _autoFocusLocked;
    _Bool _autoExposureLocked;
}

@property(nonatomic, getter=isAutoExposureLocked) _Bool autoExposureLocked; // @synthesize autoExposureLocked=_autoExposureLocked;
@property(nonatomic, getter=isAutoFocusLocked) _Bool autoFocusLocked; // @synthesize autoFocusLocked=_autoFocusLocked;
- (void).cxx_destruct;
- (void)_animateOut;
- (void)_animateIn;
- (void)_updateIconImage;
- (void)setFrame:(struct CGRect)arg1 transform:(struct CGAffineTransform)arg2 animated:(_Bool)arg3;
- (void)setHidden:(_Bool)arg1 animated:(_Bool)arg2;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
- (struct CGSize)intrinsicContentSize;
- (id)initWithFrame:(struct CGRect)arg1;

@end

