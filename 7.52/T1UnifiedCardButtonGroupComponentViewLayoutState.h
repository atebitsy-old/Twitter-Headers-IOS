//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <T1Twitter/T1UnifiedCardComponentViewLayoutState-Protocol.h>

@class NSArray, TFNLayoutMetrics;
@protocol TFNTwitterUnifiedCardComponentModel;

@interface T1UnifiedCardButtonGroupComponentViewLayoutState : NSObject <T1UnifiedCardComponentViewLayoutState>
{
    id <TFNTwitterUnifiedCardComponentModel> _component;
    NSArray *_buttonFrames;
    TFNLayoutMetrics *_layoutMetrics;
    struct CGSize _size;
}

@property(readonly, nonatomic) TFNLayoutMetrics *layoutMetrics; // @synthesize layoutMetrics=_layoutMetrics;
@property(readonly, nonatomic) NSArray *buttonFrames; // @synthesize buttonFrames=_buttonFrames;
@property(readonly, nonatomic) id <TFNTwitterUnifiedCardComponentModel> component; // @synthesize component=_component;
@property(readonly, nonatomic) struct CGSize size; // @synthesize size=_size;
- (void).cxx_destruct;
- (id)initWithButtonGroupComponent:(id)arg1 size:(struct CGSize)arg2 buttonFrames:(id)arg3 layoutMetrics:(id)arg4;

@end

