//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <T1Twitter/T1ResizableHeaderView.h>

#import <T1Twitter/T1PlacePageInfoViewDelegate-Protocol.h>

@class NSString, T1PlacePageInfoView;
@protocol T1PlacePageHeaderViewDelegate;

@interface T1PlacePageHeaderView : T1ResizableHeaderView <T1PlacePageInfoViewDelegate>
{
    T1PlacePageInfoView *_placeInfoView;
}

@property(retain, nonatomic) T1PlacePageInfoView *placeInfoView; // @synthesize placeInfoView=_placeInfoView;
- (void).cxx_destruct;
- (void)placePageInfoViewDidTapCTA:(id)arg1;
- (void)updateWithPlace:(id)arg1;
- (id)bannerOverlayGradient;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
- (struct CGSize)preferredSize;
- (void)layoutSubviews;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(nonatomic) __weak id <T1PlacePageHeaderViewDelegate> delegate; // @dynamic delegate;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

