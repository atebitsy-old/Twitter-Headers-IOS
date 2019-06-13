//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <T1Twitter/T1CardViewLayoutState.h>

@class T1BroadcastCardViewModel, T1BroadcastContainerViewLayoutState;

@interface T1BroadcastCardViewLayoutState : T1CardViewLayoutState
{
    T1BroadcastCardViewModel *_viewModel;
    T1BroadcastContainerViewLayoutState *_broadcastContainerViewLayoutState;
    struct CGRect _backgroundViewFrame;
    struct CGRect _broadcastContainerViewFrame;
    struct CGRect _thumbnailImageViewFrame;
    struct CGRect _highlightViewFrame;
    struct CGRect _detailsViewFrame;
    struct CGRect _errorViewFrame;
    struct CGRect _detailsSeparatorFrame;
    struct CGRect _broadcastContentViewFrame;
}

@property(nonatomic) struct CGRect broadcastContentViewFrame; // @synthesize broadcastContentViewFrame=_broadcastContentViewFrame;
@property(nonatomic) struct CGRect detailsSeparatorFrame; // @synthesize detailsSeparatorFrame=_detailsSeparatorFrame;
@property(nonatomic) struct CGRect errorViewFrame; // @synthesize errorViewFrame=_errorViewFrame;
@property(nonatomic) struct CGRect detailsViewFrame; // @synthesize detailsViewFrame=_detailsViewFrame;
@property(nonatomic) struct CGRect highlightViewFrame; // @synthesize highlightViewFrame=_highlightViewFrame;
@property(nonatomic) struct CGRect thumbnailImageViewFrame; // @synthesize thumbnailImageViewFrame=_thumbnailImageViewFrame;
@property(nonatomic) struct CGRect broadcastContainerViewFrame; // @synthesize broadcastContainerViewFrame=_broadcastContainerViewFrame;
@property(nonatomic) struct CGRect backgroundViewFrame; // @synthesize backgroundViewFrame=_backgroundViewFrame;
@property(retain, nonatomic) T1BroadcastContainerViewLayoutState *broadcastContainerViewLayoutState; // @synthesize broadcastContainerViewLayoutState=_broadcastContainerViewLayoutState;
@property(retain, nonatomic) T1BroadcastCardViewModel *viewModel; // @synthesize viewModel=_viewModel;
- (void).cxx_destruct;
- (_Bool)isLayoutStateValidForCardContext:(id)arg1;

@end
