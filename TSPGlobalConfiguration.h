//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@protocol TSPLogger;

@interface TSPGlobalConfiguration : NSObject
{
    _Bool _simulateDiskError;
    id <TSPLogger> _internalLogger;
}

+ (id)sharedInstance;
@property(retain) id <TSPLogger> internalLogger; // @synthesize internalLogger=_internalLogger;
@property _Bool simulateDiskError; // @synthesize simulateDiskError=_simulateDiskError;
- (void).cxx_destruct;
@property(nonatomic, getter=areAssertsEnabled) _Bool assertsEnabled;
@property(retain) id <TSPLogger> logger;
- (id)initInternal;
- (id)init;

@end
