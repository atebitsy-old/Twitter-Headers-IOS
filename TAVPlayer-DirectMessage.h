//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <TwitterAVCore/TAVPlayer.h>

#import <T1Twitter/T1DirectMessageConversationMediaAutoplayBehaviorPlayerProperties-Protocol.h>

@protocol T1DirectMessageEntryCellAutoplayable, TFNDirectMessageEntry;

@interface TAVPlayer (DirectMessage) <T1DirectMessageConversationMediaAutoplayBehaviorPlayerProperties>
@property(nonatomic) __weak id <TFNDirectMessageEntry> t1_directMessageAutoplayMessageEntry;
@property(nonatomic) __weak id <T1DirectMessageEntryCellAutoplayable> t1_directMessageAutoplayMessageEntryCell;
@end
