//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIControl.h>

#import <TFNUI/TFNHapticFeedback-Protocol.h>
#import <TFNUI/TFNPullToLoadTopControl-Protocol.h>

@class NSString, UIActivityIndicatorView, UIColor, UIImageView, UIImpactFeedbackGenerator, UINotificationFeedbackGenerator, UIScrollView, UISelectionFeedbackGenerator;

@interface TFNPullToRefreshControl : UIControl <TFNPullToLoadTopControl, TFNHapticFeedback>
{
    long long _status;
    _Bool _fromScrolling;
    _Bool _needsContentInsetUpdate;
    _Bool _managesScrollViewContentInset;
    _Bool _hideWhenNotInUse;
    _Bool _shouldTriggerHapticFeedback;
    double _thresholdOffsetY;
    UIImpactFeedbackGenerator *_impactFeedbackGenerator;
    UIColor *_pullToRefreshColor;
    UIScrollView *_savedScrollView;
    UIImageView *_arrowView;
    UIActivityIndicatorView *_activityView;
    struct CGSize _controlOffset;
    struct UIEdgeInsets _savedScrollInsets;
}

+ (void)setPullToRefreshColor:(id)arg1;
+ (void)setAreSoundEffectsEnabledBlock:(CDUnknownBlockType)arg1;
@property(retain, nonatomic) UIActivityIndicatorView *activityView; // @synthesize activityView=_activityView;
@property(retain, nonatomic) UIImageView *arrowView; // @synthesize arrowView=_arrowView;
@property(readonly, nonatomic) struct UIEdgeInsets savedScrollInsets; // @synthesize savedScrollInsets=_savedScrollInsets;
@property(nonatomic) __weak UIScrollView *savedScrollView; // @synthesize savedScrollView=_savedScrollView;
@property(nonatomic) _Bool shouldTriggerHapticFeedback; // @synthesize shouldTriggerHapticFeedback=_shouldTriggerHapticFeedback;
@property(retain, nonatomic) UIColor *pullToRefreshColor; // @synthesize pullToRefreshColor=_pullToRefreshColor;
@property(readonly, nonatomic) UIImpactFeedbackGenerator *impactFeedbackGenerator; // @synthesize impactFeedbackGenerator=_impactFeedbackGenerator;
@property(nonatomic) double thresholdOffsetY; // @synthesize thresholdOffsetY=_thresholdOffsetY;
@property(nonatomic) _Bool hideWhenNotInUse; // @synthesize hideWhenNotInUse=_hideWhenNotInUse;
@property(nonatomic) struct CGSize controlOffset; // @synthesize controlOffset=_controlOffset;
@property(nonatomic) _Bool managesScrollViewContentInset; // @synthesize managesScrollViewContentInset=_managesScrollViewContentInset;
- (void).cxx_destruct;
- (void)performHapticFeedback:(unsigned long long)arg1;
- (void)prepareHapticFeedback:(unsigned long long)arg1;
- (void)_playSoundNamed:(id)arg1;
- (double)_hideWhenNotInUseAlphaForScrollView:(id)arg1;
- (void)_setStatus:(unsigned long long)arg1 fromScrolling:(_Bool)arg2;
- (void)_updateContentInset:(id)arg1 animated:(_Bool)arg2;
- (void)updateScrollViewContentInset:(id)arg1 animated:(_Bool)arg2;
- (void)scrollViewContentInsetDidReset:(id)arg1;
- (void)scrollViewDidEndDragging:(id)arg1 willDecelerate:(_Bool)arg2;
- (void)scrollViewDidScroll:(id)arg1;
- (void)setLoading:(_Bool)arg1 completion:(CDUnknownBlockType)arg2;
@property(nonatomic) _Bool loading;
- (void)layoutSubviews;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
@property(readonly, nonatomic) _Bool isCurrentlyInUse;
@property(retain, nonatomic) UIColor *color;
@property(nonatomic) _Bool showsIcon;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly, nonatomic) UINotificationFeedbackGenerator *notificationFeedbackGenerator;
@property(readonly, nonatomic) UISelectionFeedbackGenerator *selectionFeedbackGenerator;
@property(readonly) Class superclass;

@end

