//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <T1Twitter/TFNTwitterFeedbackInfoSource-Protocol.h>
#import <T1Twitter/TFNTwitterSuggestedItem-Protocol.h>
#import <T1Twitter/TFNTwitterTimelineObject-Protocol.h>

@class NSString, NSURL, TFNTwitterFeedbackInfo, TFNTwitterSuggestsInfo, TFNTwitterUser, TFSTwitterMediaColorPalette;
@protocol TFNTwitterTimelineEntryContext;

@interface TFNTwitterLiveBannerItem : NSObject <TFNTwitterFeedbackInfoSource, TFNTwitterSuggestedItem, TFNTwitterTimelineObject>
{
    _Bool _liveBadgeHidden;
    _Bool _iconHidden;
    _Bool _isDispensable;
    TFNTwitterFeedbackInfo *_feedbackInfo;
    TFNTwitterSuggestsInfo *_suggestsInfo;
    id <TFNTwitterTimelineEntryContext> _timelineEntryContext;
    NSURL *_url;
    NSString *_headerText;
    NSString *_detailText;
    NSString *_categoryText;
    TFNTwitterUser *_user;
    NSString *_badgeText;
    NSURL *_imageURL;
    TFSTwitterMediaColorPalette *_palette;
    struct CGSize _imageDimensions;
}

@property(readonly, nonatomic) _Bool isDispensable; // @synthesize isDispensable=_isDispensable;
@property(readonly, nonatomic) TFSTwitterMediaColorPalette *palette; // @synthesize palette=_palette;
@property(readonly, nonatomic) struct CGSize imageDimensions; // @synthesize imageDimensions=_imageDimensions;
@property(readonly, nonatomic) NSURL *imageURL; // @synthesize imageURL=_imageURL;
@property(readonly, nonatomic, getter=isIconHidden) _Bool iconHidden; // @synthesize iconHidden=_iconHidden;
@property(readonly, nonatomic) NSString *badgeText; // @synthesize badgeText=_badgeText;
@property(readonly, nonatomic, getter=isLiveBadgeHidden) _Bool liveBadgeHidden; // @synthesize liveBadgeHidden=_liveBadgeHidden;
@property(readonly, nonatomic) TFNTwitterUser *user; // @synthesize user=_user;
@property(readonly, nonatomic) NSString *categoryText; // @synthesize categoryText=_categoryText;
@property(readonly, nonatomic) NSString *detailText; // @synthesize detailText=_detailText;
@property(readonly, nonatomic) NSString *headerText; // @synthesize headerText=_headerText;
@property(readonly, nonatomic) NSURL *url; // @synthesize url=_url;
@property(readonly, nonatomic) id <TFNTwitterTimelineEntryContext> timelineEntryContext; // @synthesize timelineEntryContext=_timelineEntryContext;
@property(readonly, nonatomic) TFNTwitterSuggestsInfo *suggestsInfo; // @synthesize suggestsInfo=_suggestsInfo;
@property(readonly, nonatomic) TFNTwitterFeedbackInfo *feedbackInfo; // @synthesize feedbackInfo=_feedbackInfo;
- (void).cxx_destruct;
- (id)init;
- (id)initWithJSONDictionary:(id)arg1;
- (id)initWithTimelineEntryContext:(id)arg1 URL:(id)arg2 headerText:(id)arg3 detailText:(id)arg4 categoryText:(id)arg5 user:(id)arg6 liveBadgeHidden:(_Bool)arg7 badgeText:(id)arg8 iconHidden:(_Bool)arg9 imageURL:(id)arg10 imageDimensions:(struct CGSize)arg11 palette:(id)arg12 feedbackInfo:(id)arg13 suggestsInfo:(id)arg14 isDispensable:(_Bool)arg15;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
