//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <T1Twitter/T1CardViewLayoutState.h>

#import <T1Twitter/T1EmbeddedCarouselLayoutState-Protocol.h>

@class NSString, T1AppCardDetailsViewLayoutState;

@interface T1MediaAppCardViewLayoutState : T1CardViewLayoutState <T1EmbeddedCarouselLayoutState>
{
    T1AppCardDetailsViewLayoutState *_detailsLayoutState;
    double _borderWidth;
    struct CGRect _borderSeparatorFrame;
    struct CGRect _imageFrame;
    struct CGRect _imageHighlightFrame;
    struct CGRect _detailsFrame;
    struct CGRect _appCategoryLabelFrame;
}

@property(nonatomic) double borderWidth; // @synthesize borderWidth=_borderWidth;
@property(nonatomic) struct CGRect appCategoryLabelFrame; // @synthesize appCategoryLabelFrame=_appCategoryLabelFrame;
@property(nonatomic) struct CGRect detailsFrame; // @synthesize detailsFrame=_detailsFrame;
@property(nonatomic) struct CGRect imageHighlightFrame; // @synthesize imageHighlightFrame=_imageHighlightFrame;
@property(nonatomic) struct CGRect imageFrame; // @synthesize imageFrame=_imageFrame;
@property(nonatomic) struct CGRect borderSeparatorFrame; // @synthesize borderSeparatorFrame=_borderSeparatorFrame;
@property(retain, nonatomic) T1AppCardDetailsViewLayoutState *detailsLayoutState; // @synthesize detailsLayoutState=_detailsLayoutState;
- (void).cxx_destruct;

// Remaining properties
@property(readonly, nonatomic) _Bool bodyMayHaveHashflags;
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly, nonatomic) struct CGSize size;
@property(readonly) Class superclass;

@end
