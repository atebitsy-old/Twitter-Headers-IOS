//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableDictionary, TFNDatabaseReadTransaction, TFNDatabaseStatement;

@interface TFNDatabaseResultSet : NSObject
{
    TFNDatabaseReadTransaction *_transaction;
    NSMutableDictionary *_columnNameToIndexMap;
    TFNDatabaseStatement *_statement;
}

@property(readonly, nonatomic) TFNDatabaseStatement *statement; // @synthesize statement=_statement;
- (void).cxx_destruct;
- (void)_setUpColumnNames;
- (_Bool)isNullForIndex:(long long)arg1;
- (_Bool)isNullForName:(id)arg1;
- (id)dataForIndex:(long long)arg1;
- (id)dataForName:(id)arg1;
- (id)dateForIndex:(long long)arg1;
- (id)dateForName:(id)arg1;
- (id)stringForIndex:(long long)arg1;
- (id)stringForName:(id)arg1;
- (double)doubleForIndex:(long long)arg1;
- (double)doubleForName:(id)arg1;
- (id)numberFromLongLongForIndex:(long long)arg1;
- (id)numberFromLongLongForName:(id)arg1;
- (id)numberFromIntegerForIndex:(long long)arg1;
- (id)numberFromIntegerForName:(id)arg1;
- (long long)longLongForIndex:(long long)arg1;
- (long long)longLongForName:(id)arg1;
- (long long)integerForIndex:(long long)arg1;
- (long long)integerForName:(id)arg1;
- (_Bool)boolForIndex:(long long)arg1;
- (_Bool)boolForName:(id)arg1;
- (id)nameForIndex:(long long)arg1;
- (long long)indexForName:(id)arg1;
- (_Bool)hasNext;
- (_Bool)nextWithError:(id *)arg1;
- (void)close;
@property(readonly, nonatomic) long long columnCount;
- (void)dealloc;
- (id)initWithStatement:(id)arg1 transaction:(id)arg2;
- (id)init;

@end
