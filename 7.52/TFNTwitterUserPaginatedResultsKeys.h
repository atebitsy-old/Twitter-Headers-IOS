//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString;

@interface TFNTwitterUserPaginatedResultsKeys : NSObject
{
    NSString *_usersKey;
    NSString *_nextCursorKey;
    NSString *_previousCursorKey;
    NSString *_totalCountKey;
}

+ (id)defaultKeys;
@property(readonly, copy, nonatomic) NSString *totalCountKey; // @synthesize totalCountKey=_totalCountKey;
@property(readonly, copy, nonatomic) NSString *previousCursorKey; // @synthesize previousCursorKey=_previousCursorKey;
@property(readonly, copy, nonatomic) NSString *nextCursorKey; // @synthesize nextCursorKey=_nextCursorKey;
@property(readonly, copy, nonatomic) NSString *usersKey; // @synthesize usersKey=_usersKey;
- (void).cxx_destruct;
- (id)initWithUsersKey:(id)arg1 nextCursorKey:(id)arg2 previousCursorKey:(id)arg3 totalCountKey:(id)arg4;
- (id)init;

@end
