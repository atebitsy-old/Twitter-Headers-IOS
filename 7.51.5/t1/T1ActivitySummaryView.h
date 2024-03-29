//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class TFNTappableHighlightView, TFNTwitterAccount, UILabel;

@interface T1ActivitySummaryView : UIView
{
    TFNTappableHighlightView *_retweetsHighlightView;
    UILabel *_retweetsLabel;
    id _retweetsTarget;
    SEL _retweetsAction;
    TFNTappableHighlightView *_favoritesHighlightView;
    UILabel *_favoritesLabel;
    id _favoritesTarget;
    SEL _favoritesAction;
    UIView *_accessibilityAnchorView;
    TFNTwitterAccount *_account;
    unsigned long long _favoriteCount;
    unsigned long long _retweetCount;
    long long _style;
}

+ (double)activityDefaultSpacing;
@property(nonatomic) long long style; // @synthesize style=_style;
@property(readonly, nonatomic) unsigned long long retweetCount; // @synthesize retweetCount=_retweetCount;
@property(readonly, nonatomic) unsigned long long favoriteCount; // @synthesize favoriteCount=_favoriteCount;
@property(retain, nonatomic) TFNTwitterAccount *account; // @synthesize account=_account;
- (void).cxx_destruct;
- (long long)indexOfAccessibilityElement:(id)arg1;
- (id)accessibilityElementAtIndex:(long long)arg1;
- (void)_favoritesAction;
- (void)_retweetsAction;
- (struct CGRect)favoritesFrame;
- (void)setFavoritesTarget:(id)arg1 action:(SEL)arg2;
- (struct CGRect)retweetsFrame;
- (void)setRetweetsTarget:(id)arg1 action:(SEL)arg2;
- (id)_attributedStatLabelForCount:(id)arg1 format:(id)arg2;
- (id)_attributedFavoritesLabel;
- (id)_attributedRetweetsLabel;
- (void)_updateStyle;
- (void)update;
- (void)layoutSubviews;
- (void)setFavoriteCount:(unsigned long long)arg1 retweetCount:(unsigned long long)arg2;
- (id)initWithFrame:(struct CGRect)arg1;

@end

