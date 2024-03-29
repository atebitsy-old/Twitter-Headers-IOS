//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <T1Twitter/T1CardViewAccessible.h>

#import <T1Twitter/T1BroadcastCardViewModelDelegate-Protocol.h>
#import <T1Twitter/T1ImageViewFetchHelperDelegate-Protocol.h>

@class NSString, T1BroadcastCardViewModel, T1BroadcastCellCardViewModel, T1PillView, UIImageView, UILabel;

@interface T1BroadcastCellCardView : T1CardViewAccessible <T1BroadcastCardViewModelDelegate, T1ImageViewFetchHelperDelegate>
{
    T1BroadcastCellCardViewModel *_viewModel;
    UILabel *_categoryLabel;
    UILabel *_categorySpacerLabel;
    UILabel *_liveBadge;
    UILabel *_titleLabel;
    UIImageView *_imageView;
    T1PillView *_periscopePillView;
    T1BroadcastCardViewModel *_broadcastUpdateObserver;
}

@property(retain, nonatomic) T1BroadcastCardViewModel *broadcastUpdateObserver; // @synthesize broadcastUpdateObserver=_broadcastUpdateObserver;
@property(readonly, nonatomic) T1PillView *periscopePillView; // @synthesize periscopePillView=_periscopePillView;
@property(readonly, nonatomic) UIImageView *imageView; // @synthesize imageView=_imageView;
@property(readonly, nonatomic) UILabel *titleLabel; // @synthesize titleLabel=_titleLabel;
@property(readonly, nonatomic) UILabel *liveBadge; // @synthesize liveBadge=_liveBadge;
@property(readonly, nonatomic) UILabel *categorySpacerLabel; // @synthesize categorySpacerLabel=_categorySpacerLabel;
@property(readonly, nonatomic) UILabel *categoryLabel; // @synthesize categoryLabel=_categoryLabel;
@property(retain, nonatomic) T1BroadcastCellCardViewModel *viewModel; // @synthesize viewModel=_viewModel;
- (void).cxx_destruct;
- (id)accessibilityHint;
- (id)accessibilityLabel;
- (_Bool)isAccessibilityElement;
- (void)_t1_cleanup;
- (id)accessibilityStringForStatusText:(id)arg1;
- (id)previewingViewControllerForLocation:(struct CGPoint)arg1 outSourceRect:(struct CGRect *)arg2;
- (void)prepareForReuse;
- (void)cardContextDidUpdate;
- (void)fetchImages;
- (void)setImagePipeline:(id)arg1;
- (id)imageFetchingViews;
- (id)cardMediaView;
- (void)broadcastCardViewModelDidUpdate:(id)arg1;
- (void)updateSubviews;
- (void)dealloc;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

