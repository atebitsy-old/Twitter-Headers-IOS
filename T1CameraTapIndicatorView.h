//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class CAShapeLayer;

@interface T1CameraTapIndicatorView : UIView
{
    CAShapeLayer *_indicatorLayer;
    _Bool _blinking;
}

@property(nonatomic, getter=isBlinking) _Bool blinking; // @synthesize blinking=_blinking;
- (void).cxx_destruct;
- (void)hideIndicator;
- (void)showIndicatorWithBlinking:(_Bool)arg1;
- (id)_indicatorPathForRect:(struct CGRect)arg1;
- (void)layoutSubviews;
- (struct CGSize)intrinsicContentSize;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
- (id)initWithFrame:(struct CGRect)arg1;

@end
