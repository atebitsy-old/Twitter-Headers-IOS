//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <T1Twitter/NSObject-Protocol.h>

@class NSArray, NSString, NSURL, TFNTwitterMediaAsset;
@protocol TFNDirectMessageConversation, TFNDirectMessageEntry;

@protocol TFNDirectMessageConversationActions <NSObject>
@property(readonly, nonatomic) id <TFNDirectMessageConversation> conversation;
- (void)markRecipientIdentityAsTrusted;
- (void)lookupFingerprintWithCompletion:(void (^)(NSString *))arg1;
- (void)pruneOldEntries;
- (void)addWelcomeMessage:(NSString *)arg1;
- (void)refresh;
- (void)updateReadOnlyState:(_Bool)arg1;
- (void)markEntryAsAbuse:(id <TFNDirectMessageEntry>)arg1;
- (void)unmarkEntryAsSpam:(id <TFNDirectMessageEntry>)arg1;
- (void)markEntryAsSpam:(id <TFNDirectMessageEntry>)arg1;
- (void)disableMentionNotifications;
- (void)enableMentionNotifications;
- (void)disableNotificationsForDuration:(unsigned long long)arg1;
- (void)enableNotifications;
- (void)removeUsers:(NSArray *)arg1 completion:(void (^)(_Bool, NSError *))arg2;
- (void)addUsers:(NSArray *)arg1 completion:(void (^)(_Bool, NSArray *, NSError *))arg2;
- (void)removeGroupAvatar;
- (void)rename:(NSString *)arg1;
- (_Bool)validateConversationName:(NSString *)arg1;
- (void)markAsRead;
- (void)updateGroupAvatarWithAsset:(TFNTwitterMediaAsset *)arg1 localURL:(NSURL *)arg2;
- (void)cancelDraftMessage:(id <TFNDirectMessageEntry>)arg1;
- (void)deleteMessage:(id <TFNDirectMessageEntry>)arg1;
- (void)sendMessage:(id <TFNDirectMessageEntry>)arg1 completion:(void (^)(unsigned long long, NSArray *, NSError *))arg2;
- (void)deleteConversation;
- (void)accept;
- (void)loadMoreEntriesWithCompletion:(void (^)(NSArray *, NSError *))arg1;
@end

