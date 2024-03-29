//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <T1Twitter/TFNTwitterTimelineObject-Protocol.h>

@class NSString;
@protocol TFNTwitterTimelineEntryContext;

@interface TFNTwitterSessionStartMarker : NSObject <TFNTwitterTimelineObject>
{
    NSString *_localizedText;
}

@property(readonly, nonatomic) NSString *localizedText; // @synthesize localizedText=_localizedText;
- (void).cxx_destruct;
@property(readonly, nonatomic) id <TFNTwitterTimelineEntryContext> timelineEntryContext;
- (id)initWithLocalizedText:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

