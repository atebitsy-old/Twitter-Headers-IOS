//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@interface T1HomeTimelineFetchManager : NSObject
{
    // Error parsing type: , name: operationQueue
    // Error parsing type: , name: fetchQueue
    // Error parsing type: , name: taskManager
    // Error parsing type: , name: storeIdentifier
    // Error parsing type: , name: lastBackgroundTimeKey
    // Error parsing type: , name: lastSuccessfulFetchTimeKey
    // Error parsing type: , name: lastSuccessfulFetchUserIDKey
    // Error parsing type: , name: pendingCompletion
    // Error parsing type: , name: backgroundFetchSinceBackgroundThreshold
    // Error parsing type: , name: successfulBackgroundFetchToLaunchThreshold
    // Error parsing type: , name: account
}

+ (id)shared;
- (void).cxx_destruct;
- (id)init;
- (void)accountDidBecomeActiveWithNotification:(id)arg1;
- (void)update:(CDUnknownBlockType)arg1;

@end

