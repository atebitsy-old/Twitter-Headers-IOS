//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableArray, NSNumber, NSString;

@interface TFNTwitterConversationRearrangeMetaBranch : NSObject
{
    long long _cacheIndex;
    NSNumber *_root;
    NSMutableArray *_replies;
    NSString *_branchGUID;
}

+ (id)branchForStatus:(id)arg1;
@property(retain, nonatomic) NSString *branchGUID; // @synthesize branchGUID=_branchGUID;
@property(retain, nonatomic) NSMutableArray *replies; // @synthesize replies=_replies;
@property(retain, nonatomic) NSNumber *root; // @synthesize root=_root;
@property(nonatomic) long long cacheIndex; // @synthesize cacheIndex=_cacheIndex;
- (void).cxx_destruct;
- (_Bool)isSubsetOfBranch:(id)arg1;
- (id)init;

@end

