//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <T1Twitter/NSObject-Protocol.h>

@class NSDictionary, TFNTwitterAccount, TFNTwitterStream;
@protocol TFNTwitterHomeTimelineConfiguration, TFNTwitterHomeTimelineStream, TFNTwitterTimelineScriber, TFSModelBuilder;

@protocol TFNTwitterHomeTimelineStreamFactory <NSObject>
- (TFNTwitterStream<TFNTwitterHomeTimelineStream> *)createWithAccount:(TFNTwitterAccount *)arg1 serializationDictionary:(NSDictionary *)arg2 streamConfiguration:(id <TFNTwitterHomeTimelineConfiguration>)arg3 cacheWipeReason:(long long)arg4 modelBuilder:(id <TFSModelBuilder>)arg5 scriber:(id <TFNTwitterTimelineScriber>)arg6;
@end
