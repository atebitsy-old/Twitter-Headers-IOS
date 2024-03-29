//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <T1Twitter/T1ResizableHeaderView.h>

@class TFNGradientView, TFNPullToRefreshControl, TFNSolidColorView, UILabel, UITapGestureRecognizer, UIView;

@interface T1LiveEventHeaderView : T1ResizableHeaderView
{
    _Bool _previewing;
    _Bool _contentEmpty;
    _Bool _useCustomNavigationBar;
    _Bool _navigationBarHidden;
    _Bool _headerLockingEnabled;
    TFNPullToRefreshControl *_customPullToLoadTopControl;
    TFNSolidColorView *_customNavigationBarSeparatorLine;
    TFNGradientView *_statusBarGradientView;
    UITapGestureRecognizer *_navigationBarExpandTapGestureRecognizer;
    double _pullToRefreshControlOffset;
    UILabel *_navigationBarTitleLabel;
    UIView *_navigationBarTitleView;
}

@property(retain, nonatomic) UIView *navigationBarTitleView; // @synthesize navigationBarTitleView=_navigationBarTitleView;
@property(retain, nonatomic) UILabel *navigationBarTitleLabel; // @synthesize navigationBarTitleLabel=_navigationBarTitleLabel;
@property(nonatomic, getter=_t1_pullToRefreshControlOffset) double pullToRefreshControlOffset; // @synthesize pullToRefreshControlOffset=_pullToRefreshControlOffset;
@property(retain, nonatomic) UITapGestureRecognizer *navigationBarExpandTapGestureRecognizer; // @synthesize navigationBarExpandTapGestureRecognizer=_navigationBarExpandTapGestureRecognizer;
@property(readonly, nonatomic, getter=isHeaderLockingEnabled) _Bool headerLockingEnabled; // @synthesize headerLockingEnabled=_headerLockingEnabled;
@property(nonatomic, getter=isNavigationBarHidden) _Bool navigationBarHidden; // @synthesize navigationBarHidden=_navigationBarHidden;
@property(readonly, nonatomic) TFNGradientView *statusBarGradientView; // @synthesize statusBarGradientView=_statusBarGradientView;
@property(readonly, nonatomic) TFNSolidColorView *customNavigationBarSeparatorLine; // @synthesize customNavigationBarSeparatorLine=_customNavigationBarSeparatorLine;
@property(readonly, nonatomic) _Bool useCustomNavigationBar; // @synthesize useCustomNavigationBar=_useCustomNavigationBar;
@property(readonly, nonatomic) TFNPullToRefreshControl *customPullToLoadTopControl; // @synthesize customPullToLoadTopControl=_customPullToLoadTopControl;
@property(nonatomic, getter=isContentEmpty) _Bool contentEmpty; // @synthesize contentEmpty=_contentEmpty;
@property(nonatomic, getter=isPreviewing) _Bool previewing; // @synthesize previewing=_previewing;
- (void).cxx_destruct;
- (void)_t1_didPullToLoadTop;
- (void)_t1_configureNavigationBarTitleView;
- (void)_t1_configureUI;
- (double)headerBannerHeightForWidth:(double)arg1 bannerAspectRatio:(double)arg2;
- (double)bannerAspectRatioForTraitCollection:(id)arg1;
- (id)bannerOverlayGradient;
- (void)layoutSubviews;
- (void)addSubview:(id)arg1;
@property(readonly, nonatomic) double contentTopMargin;
- (void)setContainerNavigationBarTitle:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1 useCustomNavigationBar:(_Bool)arg2 isHeaderLockingEnabled:(_Bool)arg3;
- (id)initWithCoder:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;

@end

