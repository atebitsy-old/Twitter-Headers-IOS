//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UICollectionReusableView.h>

@class NSLayoutConstraint, T1PillView, TFNTwitterStickerCategory, UILabel, UIView;

@interface T1StickerCollectionViewSectionHeader : UICollectionReusableView
{
    UIView *_labelContainer;
    UILabel *_label;
    T1PillView *_badge;
    NSLayoutConstraint *_badgeHiddenHeightAnchor;
    UIView *_hairline;
    _Bool _topSection;
    TFNTwitterStickerCategory *_stickerCategory;
    long long _catalogType;
}

@property(nonatomic) long long catalogType; // @synthesize catalogType=_catalogType;
@property(nonatomic, getter=isTopSection) _Bool topSection; // @synthesize topSection=_topSection;
@property(retain, nonatomic) TFNTwitterStickerCategory *stickerCategory; // @synthesize stickerCategory=_stickerCategory;
- (void).cxx_destruct;
- (void)_updateBadgeColors;
- (void)prepareForReuse;
- (id)initWithFrame:(struct CGRect)arg1;

@end

