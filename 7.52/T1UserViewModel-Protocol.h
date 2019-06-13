//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <T1Twitter/TFSTwitterScribableItem-Protocol.h>

@class NSString, TFNTwitterPromotedContent, TFSTwitterEntityMedia, TFSTwitterRelationship, TFSTwitterUserReference;
@protocol T1TwitterSocialContext, TFNTwitterTimelineEntryContext, TFNTwitterUserContext, TFSTwitterCanonicalUser;

@protocol T1UserViewModel <TFSTwitterScribableItem>
@property(readonly, nonatomic) id <TFNTwitterTimelineEntryContext> timelineEntryContext;
@property(readonly, nonatomic) id <T1TwitterSocialContext> socialContext;
@property(readonly, nonatomic) TFNTwitterPromotedContent *promotedContent;
@property(readonly, nonatomic) _Bool showSocialBadge;
@property(readonly, nonatomic) id <TFNTwitterUserContext> context;
@property(readonly, copy, nonatomic) NSString *bioDisplayText;
@property(readonly, nonatomic) NSString *displayUsername;
@property(readonly, nonatomic) NSString *displayFullName;
@property(readonly, nonatomic, getter=isPromoted) _Bool promoted;
@property(readonly, nonatomic) TFSTwitterEntityMedia *profileBannerMediaEntity;
@property(readonly, nonatomic) TFSTwitterEntityMedia *profileImageMediaEntity;
@property(readonly, nonatomic) TFSTwitterRelationship *relationship;
@property(readonly, nonatomic) unsigned int profileLinkColorHexTriplet;
@property(readonly, nonatomic) unsigned long long bioDisplayType;
@property(readonly, nonatomic) _Bool affiliated;
@property(readonly, nonatomic) _Bool usernameless;
@property(readonly, nonatomic) _Bool protectedUser;
@property(readonly, nonatomic) _Bool verified;
@property(readonly, copy, nonatomic) NSString *designatorUrl;
@property(readonly, nonatomic) unsigned long long designatorLabelType;
@property(readonly, nonatomic) unsigned long long designatorIconType;
@property(readonly, copy, nonatomic) NSString *designatorImageUrl;
@property(readonly, copy, nonatomic) NSString *designatorString;
@property(readonly, copy, nonatomic) NSString *fullName;
@property(readonly, copy, nonatomic) NSString *username;
@property(readonly, nonatomic) long long userID;
@property(readonly, nonatomic) id <TFSTwitterCanonicalUser> canonicalUser;
@property(readonly, nonatomic) TFSTwitterUserReference *userReference;
@end
