//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableDictionary, TFNDatabaseConnection;

@interface TFNDatabaseReadTransaction : NSObject
{
    NSMutableDictionary *_queryCache;
    _Bool _isBusy;
    TFNDatabaseConnection *_connection;
    long long _retryCount;
}

@property(nonatomic) long long retryCount; // @synthesize retryCount=_retryCount;
@property(nonatomic) _Bool isBusy; // @synthesize isBusy=_isBusy;
@property(readonly, nonatomic) TFNDatabaseConnection *connection; // @synthesize connection=_connection;
- (void).cxx_destruct;
- (void)_finalizeStatements;
- (void)_bindObject:(id)arg1 atColumnIndex:(long long)arg2 statement:(id)arg3;
- (id)_statementWithSQLString:(id)arg1 error:(id *)arg2;
- (id)_executeQuery:(id)arg1 arguments:(id)arg2 error:(id *)arg3;
- (id)executeQuery:(id)arg1 arguments:(id)arg2 error:(id *)arg3;
- (id)executeQuery:(id)arg1 error:(id *)arg2;
- (void)dealloc;
- (id)initWithConnection:(id)arg1;
- (id)init;

@end

