//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <T1Twitter/NSObject-Protocol.h>

@class NSNumber, NSString, TFNDirectMessageTimelineCursor;
@protocol TFNDirectMessageConversation, TFNDirectMessageInbox;

@protocol TFNDirectMessageInboxActions <NSObject>
@property(readonly, nonatomic, getter=isRefreshing) _Bool refreshing;
@property(readonly, nonatomic) id <TFNDirectMessageInbox> inbox;
- (void)registerForEncryptedDMsWithCompletion:(void (^)(_Bool))arg1;
- (void)pruneOldConversations;
- (void)fetchPermissionForUsername:(NSString *)arg1 encryptedDM:(_Bool)arg2 completion:(void (^)(_Bool, TFNDirectMessagePermission *, NSError *))arg3;
- (void)fetchPermissionForUserID:(long long)arg1 encryptedDM:(_Bool)arg2 completion:(void (^)(_Bool, TFNDirectMessagePermission *, NSError *))arg3;
- (void)markAsSeenThroughConversation:(id <TFNDirectMessageConversation>)arg1;
- (void)markAsSeen;
- (void)loadMoreConversationsWithCursor:(TFNDirectMessageTimelineCursor *)arg1;
- (void)refresh:(long long)arg1 activeConversationID:(NSString *)arg2 keyRegistryServiceEnabled:(_Bool)arg3 filterLowQuality:(NSNumber *)arg4 completion:(void (^)(void))arg5;
@end
