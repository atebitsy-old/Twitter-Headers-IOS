//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSError, NSString;

@interface TFNTwitterErrorItem : NSObject
{
    NSError *_error;
    NSString *_mainErrorText;
    NSString *_errorSubtext;
}

@property(copy, nonatomic) NSString *errorSubtext; // @synthesize errorSubtext=_errorSubtext;
@property(copy, nonatomic) NSString *mainErrorText; // @synthesize mainErrorText=_mainErrorText;
@property(retain, nonatomic) NSError *error; // @synthesize error=_error;
- (void).cxx_destruct;
@property(readonly, copy) NSString *description;
- (_Bool)isEqual:(id)arg1;
@property(readonly) unsigned long long hash;
- (id)initWithError:(id)arg1 mainErrorText:(id)arg2 errorSubtext:(id)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) Class superclass;

@end

