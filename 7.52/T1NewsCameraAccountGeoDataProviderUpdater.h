//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class TFNTwitterAccount, TFSTimer, TFSTwitterLocation;
@protocol T1NewsCameraAccountGeoDataProviderUpdaterDelegate;

@interface T1NewsCameraAccountGeoDataProviderUpdater : NSObject
{
    id <T1NewsCameraAccountGeoDataProviderUpdaterDelegate> _delegate;
    TFNTwitterAccount *_account;
    NSObject *_updateTag;
    TFSTimer *_updateTimer;
}

@property(retain, nonatomic) TFSTimer *updateTimer; // @synthesize updateTimer=_updateTimer;
@property(retain, nonatomic) NSObject *updateTag; // @synthesize updateTag=_updateTag;
@property(readonly, nonatomic) TFNTwitterAccount *account; // @synthesize account=_account;
@property(nonatomic) __weak id <T1NewsCameraAccountGeoDataProviderUpdaterDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)_t1_timer_updateTimerDidFire:(id)arg1;
- (void)_t1_main_invalidateUpdate;
- (void)_t1_main_didUpdateCurrentLocation;
- (void)_t1_main_didFailToUpdateCurrentLocationWithError:(id)arg1;
- (void)_t1_main_updateCurrentLocation;
- (void)update;
- (void)requestServiceAuthorizationWithCompletion:(CDUnknownBlockType)arg1;
@property(readonly, nonatomic) TFSTwitterLocation *currentLocation;
- (id)initWithAccount:(id)arg1;
- (id)init;

@end
