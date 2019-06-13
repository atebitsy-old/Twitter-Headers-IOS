//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <T1Twitter/T1UnifiedCardComponentViewLayoutDelegate-Protocol.h>
#import <T1Twitter/TFNLayoutableViewLayoutDelegate-Protocol.h>

@class NSCache, NSString;

@interface T1UnifiedCardDetailsComponentViewLayoutDelegate : NSObject <T1UnifiedCardComponentViewLayoutDelegate, TFNLayoutableViewLayoutDelegate>
{
    NSCache *_textModelCache;
}

+ (id)textModelCacheKeyForText:(id)arg1 color:(id)arg2 font:(id)arg3 shouldRenderFromRight:(_Bool)arg4;
@property(readonly, nonatomic) NSCache *textModelCache; // @synthesize textModelCache=_textModelCache;
- (void).cxx_destruct;
- (void)layoutSubviewsForLayoutableView:(id)arg1;
@property(readonly, nonatomic) _Bool omitTrailingSpaceAsBottomComponent;
@property(readonly, nonatomic) double topSpacing;
- (_Bool)isLayoutState:(id)arg1 validForComponent:(id)arg2 layoutMetrics:(id)arg3;
- (id)layoutStateForComponent:(id)arg1 layoutMetrics:(id)arg2 previousLayoutState:(id)arg3 account:(id)arg4;
- (id)textModelForText:(id)arg1 color:(id)arg2 font:(id)arg3 shouldRenderFromRight:(_Bool)arg4;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
