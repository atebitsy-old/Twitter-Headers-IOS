//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Intents/INIntentResponse.h>

@class NSUserActivity;

@interface T1ScanQRIntentResponse : INIntentResponse
{
    long long _code;
    NSUserActivity *userActivity;
}

@property(copy, nonatomic) NSUserActivity *userActivity; // @synthesize userActivity;
@property(nonatomic) long long code; // @synthesize code=_code;
- (void).cxx_destruct;
- (id)initWithCode:(long long)arg1 userActivity:(id)arg2;

@end
