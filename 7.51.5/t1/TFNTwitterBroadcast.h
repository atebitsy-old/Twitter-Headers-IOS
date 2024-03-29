//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <T1Twitter/NSCopying-Protocol.h>

@class NSArray, NSDate, NSNumber, NSString;

@interface TFNTwitterBroadcast : NSObject <NSCopying>
{
    NSString *_broadcasterDisplayUsername;
    _Bool _threeSixty;
    _Bool _acceptsGifts;
    _Bool _acceptsGuests;
    _Bool _callInDisabled;
    _Bool _availableForReplay;
    _Bool _requiresFineGrainGeoblocking;
    _Bool _privateChat;
    _Bool _highLatency;
    _Bool _unavailableInPeriscope;
    _Bool _copyrightViolationInterstitial;
    _Bool _copyrightViolationBroadcasterWhitelisted;
    _Bool _copyrightViolationMatchAccepted;
    _Bool _copyrightViolationMatchDisputed;
    _Bool _replayTitleEditingDisabled;
    _Bool _replayTitleEdited;
    _Bool _hasLocation;
    NSString *_broadcastID;
    NSString *_mediaKey;
    NSString *_mediaID;
    NSString *_totalWatching;
    NSString *_totalWatched;
    unsigned long long _state;
    NSNumber *_version;
    NSDate *_startDate;
    NSDate *_pingDate;
    NSDate *_endDate;
    NSDate *_timedoutDate;
    NSString *_imageURL;
    NSString *_imageURLSmall;
    NSString *_title;
    unsigned long long _width;
    unsigned long long _height;
    unsigned long long _cameraRotation;
    NSString *_broadcastSource;
    NSString *_tweetID;
    NSString *_moderatorChannel;
    NSArray *_heartThemes;
    NSString *_copyrightViolationCopyrightHolderName;
    NSString *_copyrightViolationCopyrightContentName;
    double _replayEditedStartTime;
    double _replayEditedThumbnailTime;
    NSString *_broadcasterUserID;
    NSString *_broadcasterUsername;
    NSString *_broadcasterDisplayName;
    NSString *_broadcasterProfileImageURL;
    NSString *_broadcasterTwitterUserID;
    NSString *_broadcasterTwitterUsername;
    NSString *_cityName;
    NSString *_countryName;
    NSString *_countryStateName;
    NSDate *_lastUpdated;
    struct CLLocationCoordinate2D _broadcasterCoordinate;
}

+ (void)storeBroadcast:(id)arg1 inCardsCacheWithCardContext:(id)arg2;
+ (id)displayViewerCountWithCount:(long long)arg1 isBroadcastLive:(_Bool)arg2;
+ (id)unavailableBroadcastIDsWithJSONDictionary:(id)arg1;
+ (id)broadcastsByIDDictionaryWithJSONDictionary:(id)arg1;
@property(retain, nonatomic) NSDate *lastUpdated; // @synthesize lastUpdated=_lastUpdated;
@property(readonly, nonatomic) struct CLLocationCoordinate2D broadcasterCoordinate; // @synthesize broadcasterCoordinate=_broadcasterCoordinate;
@property(readonly, copy, nonatomic) NSString *countryStateName; // @synthesize countryStateName=_countryStateName;
@property(readonly, copy, nonatomic) NSString *countryName; // @synthesize countryName=_countryName;
@property(readonly, copy, nonatomic) NSString *cityName; // @synthesize cityName=_cityName;
@property(readonly, nonatomic) _Bool hasLocation; // @synthesize hasLocation=_hasLocation;
@property(readonly, copy, nonatomic) NSString *broadcasterTwitterUsername; // @synthesize broadcasterTwitterUsername=_broadcasterTwitterUsername;
@property(readonly, copy, nonatomic) NSString *broadcasterTwitterUserID; // @synthesize broadcasterTwitterUserID=_broadcasterTwitterUserID;
@property(readonly, copy, nonatomic) NSString *broadcasterProfileImageURL; // @synthesize broadcasterProfileImageURL=_broadcasterProfileImageURL;
@property(readonly, copy, nonatomic) NSString *broadcasterDisplayName; // @synthesize broadcasterDisplayName=_broadcasterDisplayName;
@property(readonly, copy, nonatomic) NSString *broadcasterUsername; // @synthesize broadcasterUsername=_broadcasterUsername;
@property(readonly, copy, nonatomic) NSString *broadcasterUserID; // @synthesize broadcasterUserID=_broadcasterUserID;
@property(readonly, nonatomic, getter=isReplayTitleEdited) _Bool replayTitleEdited; // @synthesize replayTitleEdited=_replayTitleEdited;
@property(readonly, nonatomic, getter=isReplayTitleEditingDisabled) _Bool replayTitleEditingDisabled; // @synthesize replayTitleEditingDisabled=_replayTitleEditingDisabled;
@property(readonly, nonatomic) double replayEditedThumbnailTime; // @synthesize replayEditedThumbnailTime=_replayEditedThumbnailTime;
@property(readonly, nonatomic) double replayEditedStartTime; // @synthesize replayEditedStartTime=_replayEditedStartTime;
@property(readonly, nonatomic, getter=isCopyrightViolationMatchDisputed) _Bool copyrightViolationMatchDisputed; // @synthesize copyrightViolationMatchDisputed=_copyrightViolationMatchDisputed;
@property(readonly, nonatomic, getter=isCopyrightViolationMatchAccepted) _Bool copyrightViolationMatchAccepted; // @synthesize copyrightViolationMatchAccepted=_copyrightViolationMatchAccepted;
@property(readonly, nonatomic, getter=isCopyrightViolationBroadcasterWhitelisted) _Bool copyrightViolationBroadcasterWhitelisted; // @synthesize copyrightViolationBroadcasterWhitelisted=_copyrightViolationBroadcasterWhitelisted;
@property(readonly, copy, nonatomic) NSString *copyrightViolationCopyrightContentName; // @synthesize copyrightViolationCopyrightContentName=_copyrightViolationCopyrightContentName;
@property(readonly, copy, nonatomic) NSString *copyrightViolationCopyrightHolderName; // @synthesize copyrightViolationCopyrightHolderName=_copyrightViolationCopyrightHolderName;
@property(readonly, nonatomic, getter=hasCopyrightViolationInterstitial) _Bool copyrightViolationInterstitial; // @synthesize copyrightViolationInterstitial=_copyrightViolationInterstitial;
@property(readonly, copy, nonatomic) NSArray *heartThemes; // @synthesize heartThemes=_heartThemes;
@property(readonly, nonatomic, getter=isUnavailableInPeriscope) _Bool unavailableInPeriscope; // @synthesize unavailableInPeriscope=_unavailableInPeriscope;
@property(readonly, nonatomic, getter=isHighLatency) _Bool highLatency; // @synthesize highLatency=_highLatency;
@property(readonly, copy, nonatomic) NSString *moderatorChannel; // @synthesize moderatorChannel=_moderatorChannel;
@property(readonly, nonatomic, getter=isPrivateChat) _Bool privateChat; // @synthesize privateChat=_privateChat;
@property(readonly, nonatomic) _Bool requiresFineGrainGeoblocking; // @synthesize requiresFineGrainGeoblocking=_requiresFineGrainGeoblocking;
@property(readonly, copy, nonatomic) NSString *tweetID; // @synthesize tweetID=_tweetID;
@property(readonly, copy, nonatomic) NSString *broadcastSource; // @synthesize broadcastSource=_broadcastSource;
@property(readonly, nonatomic, getter=isAvailableForReplay) _Bool availableForReplay; // @synthesize availableForReplay=_availableForReplay;
@property(readonly, nonatomic) unsigned long long cameraRotation; // @synthesize cameraRotation=_cameraRotation;
@property(readonly, nonatomic) unsigned long long height; // @synthesize height=_height;
@property(readonly, nonatomic) unsigned long long width; // @synthesize width=_width;
@property(readonly, copy, nonatomic) NSString *title; // @synthesize title=_title;
@property(readonly, copy, nonatomic) NSString *imageURLSmall; // @synthesize imageURLSmall=_imageURLSmall;
@property(readonly, copy, nonatomic) NSString *imageURL; // @synthesize imageURL=_imageURL;
@property(readonly, copy, nonatomic) NSDate *timedoutDate; // @synthesize timedoutDate=_timedoutDate;
@property(readonly, copy, nonatomic) NSDate *endDate; // @synthesize endDate=_endDate;
@property(readonly, copy, nonatomic) NSDate *pingDate; // @synthesize pingDate=_pingDate;
@property(readonly, copy, nonatomic) NSDate *startDate; // @synthesize startDate=_startDate;
@property(readonly, nonatomic) NSNumber *version; // @synthesize version=_version;
@property(readonly, nonatomic) unsigned long long state; // @synthesize state=_state;
@property(readonly, copy, nonatomic) NSString *totalWatched; // @synthesize totalWatched=_totalWatched;
@property(readonly, copy, nonatomic) NSString *totalWatching; // @synthesize totalWatching=_totalWatching;
@property(readonly, nonatomic) _Bool callInDisabled; // @synthesize callInDisabled=_callInDisabled;
@property(readonly, nonatomic) _Bool acceptsGuests; // @synthesize acceptsGuests=_acceptsGuests;
@property(readonly, nonatomic) _Bool acceptsGifts; // @synthesize acceptsGifts=_acceptsGifts;
@property(readonly, nonatomic, getter=isThreeSixty) _Bool threeSixty; // @synthesize threeSixty=_threeSixty;
@property(readonly, copy, nonatomic) NSString *mediaID; // @synthesize mediaID=_mediaID;
@property(readonly, copy, nonatomic) NSString *mediaKey; // @synthesize mediaKey=_mediaKey;
@property(readonly, copy, nonatomic) NSString *broadcastID; // @synthesize broadcastID=_broadcastID;
- (void).cxx_destruct;
- (id)_t1_broadcastIDForCardData:(id)arg1;
- (id)_tfn_toJSONDictionary;
@property(readonly, copy, nonatomic) NSString *broadcasterDisplayUsername;
- (_Bool)isEqualToBroadcast:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)description;
- (unsigned long long)hash;
- (_Bool)isEqual:(id)arg1;
- (id)initWithJSONDictionary:(id)arg1;
- (id)initWithCardData:(id)arg1;
- (id)initWithCardContext:(id)arg1;
- (id)init;
- (id)displayTotalViewerCount;
- (_Bool)hasModerators;
- (long long)compareVersionToBroadcast:(id)arg1;
- (struct CGSize)size;
- (_Bool)isLiveOrNotStarted;
- (_Bool)isEndedWithoutReplay;
- (_Bool)shouldBeRenderedSixteenByNine;
- (id)endedOrTimedoutDate;
- (_Bool)isEndedOrTimedOut;
- (_Bool)isPlayable;
- (_Bool)hasState;
- (_Bool)_tfn_requiresCardDataImageWithCardData:(id)arg1;
- (id)_t1_imageSpecForCardData:(id)arg1;
- (struct CGSize)imageSizeWithCardData:(id)arg1;
- (id)imageURLWithCardData:(id)arg1;
- (id)ptvBroadcastWithCardData:(id)arg1;
- (double)shareTimecodeWithCardData:(id)arg1;

@end

