//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <T1Twitter/TFSTwitterLiveAuthorizedStreamRestriction.h>

@class NSString;

@interface TFSTwitterLiveAuthorizedStreamCopyrightRestriction : TFSTwitterLiveAuthorizedStreamRestriction
{
    NSString *_copyrightHolderName;
    NSString *_copyrightedWorkName;
}

@property(readonly, copy, nonatomic) NSString *copyrightedWorkName; // @synthesize copyrightedWorkName=_copyrightedWorkName;
@property(readonly, copy, nonatomic) NSString *copyrightHolderName; // @synthesize copyrightHolderName=_copyrightHolderName;
- (void).cxx_destruct;
- (_Bool)isEqual:(id)arg1;
- (id)initWithCopyrightHolderName:(id)arg1 copyrightedWorkName:(id)arg2;

@end

