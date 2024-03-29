//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray, NSString, TFSTwitterPlace;

@interface TFNTwitterPlaceResponse : NSObject
{
    NSArray *_places;
    TFSTwitterPlace *_defaultPlace;
    NSArray *_attributions;
}

+ (id)unifiedPlacesWithJSONData:(id)arg1 error:(id *)arg2;
@property(readonly, copy, nonatomic) NSArray *attributions; // @synthesize attributions=_attributions;
@property(readonly, nonatomic) TFSTwitterPlace *defaultPlace; // @synthesize defaultPlace=_defaultPlace;
@property(readonly, copy, nonatomic) NSArray *places; // @synthesize places=_places;
- (void).cxx_destruct;
- (id)initWithPlaces:(id)arg1 defaultPlace:(id)arg2;
- (id)initWithPlaces:(id)arg1 defaultPlace:(id)arg2 attributions:(id)arg3;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

