//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSNumber;

@interface TFNFlexibleSpaceItem : NSObject
{
    double _pinHeightWithin;
    NSNumber *_previousHeight;
    double _minimumHeight;
    double _weight;
}

+ (id)tfn_defaultDataViewAdapter;
@property(nonatomic) double weight; // @synthesize weight=_weight;
@property(nonatomic) double minimumHeight; // @synthesize minimumHeight=_minimumHeight;
@property(retain, nonatomic) NSNumber *previousHeight; // @synthesize previousHeight=_previousHeight;
@property(nonatomic) double pinHeightWithin; // @synthesize pinHeightWithin=_pinHeightWithin;
- (void).cxx_destruct;
- (id)initWithMinimumHeight:(double)arg1 weight:(double)arg2;
- (id)init;

@end
