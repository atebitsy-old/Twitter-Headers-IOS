//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <T1Twitter/TFNDirectMessageConversationEntry-Protocol.h>
#import <T1Twitter/TFNTwitterCardDataSourceObject-Protocol.h>
#import <T1Twitter/TFNTwitterCardDataSourceProvider-Protocol.h>

@class NSArray, NSString, TFSTwitterEntitySet;
@protocol TFNDirectMessageCardAttachment, TFNDirectMessageCustomProfile, TFNDirectMessageMediaAttachment, TFNDirectMessageQuickReplyRequest, TFNDirectMessageQuickReplyResponse, TFNDirectMessageStickerAttachment, TFNDirectMessageTweetAttachment, TFNDirectMessageUser;

@protocol TFNDirectMessageEntry <TFNDirectMessageConversationEntry, TFNTwitterCardDataSourceObject, TFNTwitterCardDataSourceProvider>
@property(readonly, nonatomic) NSArray *ctas;
@property(readonly, nonatomic) id <TFNDirectMessageCustomProfile> customProfile;
@property(readonly, nonatomic) id <TFNDirectMessageQuickReplyResponse> quickReplyResponse;
@property(readonly, nonatomic) id <TFNDirectMessageQuickReplyRequest> quickReplyRequest;
@property(readonly, nonatomic) _Bool markedAsAbuse;
@property(readonly, nonatomic) _Bool markedAsSpam;
@property(readonly, nonatomic) id <TFNDirectMessageCardAttachment> cardAttachment;
@property(readonly, nonatomic) id <TFNDirectMessageStickerAttachment> stickerAttachment;
@property(readonly, nonatomic) id <TFNDirectMessageTweetAttachment> tweetAttachment;
@property(readonly, nonatomic) id <TFNDirectMessageMediaAttachment> mediaAttachment;
@property(readonly, nonatomic, getter=isSeenByAllParticipants) _Bool seenByAllParticipants;
@property(readonly, copy, nonatomic) NSArray *seenByParticipants;
@property(readonly, nonatomic, getter=isEstablished) _Bool established;
@property(readonly, nonatomic) _Bool sendFailed;
@property(readonly, nonatomic, getter=isSending) _Bool sending;
@property(readonly, nonatomic) NSString *senderDeviceID;
@property(readonly, nonatomic) id <TFNDirectMessageUser> sender;
@property(readonly, nonatomic) long long messageID;
@property(readonly, nonatomic) TFSTwitterEntitySet *entities;
@property(readonly, copy, nonatomic) NSArray *displayTextRangesWithAttachmentLinks;
@property(readonly, copy, nonatomic) NSArray *displayTextRanges;
@property(readonly, copy, nonatomic) NSString *displayTextWithAttachmentLinks;
@property(readonly, copy, nonatomic) NSString *sourceText;
@property(readonly, copy, nonatomic) NSString *encryptedText;
@property(readonly, copy, nonatomic) NSString *displayText;
@end

