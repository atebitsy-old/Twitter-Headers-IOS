//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <TwitterLifecycleTools/TLTWatchdog.h>

#import <T1Twitter/TLTWatchdogDelegate-Protocol.h>

@class NSString, TFSStopwatch;

@interface TFNTwitterWatchdog : TLTWatchdog <TLTWatchdogDelegate>
{
    NSString *_scribeSection;
    TFSStopwatch *_firstWaitingForHangStopwatch;
    TFSStopwatch *_waitingForHangStopwatch;
}

+ (void)setWatchdogDisabledInPreviousLaunch:(_Bool)arg1;
+ (_Bool)isWatchdogDisabledInPreviousLaunch;
+ (id)createAndStartWatchdog;
+ (id)createAndStartWatchdogWithIntervalSinceStartTime:(double)arg1;
@property(retain, nonatomic) TFSStopwatch *waitingForHangStopwatch; // @synthesize waitingForHangStopwatch=_waitingForHangStopwatch;
@property(retain, nonatomic) TFSStopwatch *firstWaitingForHangStopwatch; // @synthesize firstWaitingForHangStopwatch=_firstWaitingForHangStopwatch;
@property(retain, nonatomic) NSString *scribeSection; // @synthesize scribeSection=_scribeSection;
- (void).cxx_destruct;
- (void)crash;
- (void)watchdog:(id)arg1 didChangeFromState:(unsigned long long)arg2 toState:(unsigned long long)arg3;
- (id)initAndStartWithIntervalSinceStartTime:(double)arg1 hangInterval:(double)arg2 watchdogInterval:(double)arg3 mainThreadReschedulingDelay:(double)arg4 scribeSection:(id)arg5;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

