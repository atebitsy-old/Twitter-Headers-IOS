//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSDictionary, NSString;

@interface TFNTwitterScribeDebugResponse : NSObject
{
    NSDictionary *_debugInfo;
}

+ (id)debugResponseWithJSONData:(id)arg1 error:(out id *)arg2;
@property(retain, nonatomic) NSDictionary *debugInfo; // @synthesize debugInfo=_debugInfo;
- (void).cxx_destruct;
- (id)initWithDebugInfoDictionary:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

