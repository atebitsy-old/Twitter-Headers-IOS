//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <T1Twitter/T1ProfileDataSource-Protocol.h>

@class NSArray, NSDictionary, NSMutableSet, NSNumber, NSString, TFNTwitterAccount, TFNTwitterPromotedContent, TFNTwitterQuickPromoteModule, TFNTwitterUserDataSource, TFSTwitterEntitySet, TFSTwitterEntityURL, TFSTwitterPaginatedResults, TFSTwitterPlace, TFSTwitterUserExtendedProfile, UIColor;
@protocol TFNTwitterUserContext;

@interface T1ProfileUserDataSource : NSObject <T1ProfileDataSource>
{
    double _lastRefreshTime;
    _Bool _loadedOnce;
    _Bool _hasRequestedClusterFollowRecommendations;
    long long _lastError;
    NSDictionary *_scribeItem;
    _Bool _displayedInModal;
    _Bool _isPreview;
    _Bool _hasBlockedByViewerMessageBeenDismissed;
    _Bool _isUserInvalid;
    _Bool _userLoading;
    _Bool _userRelationshipLoading;
    _Bool _observingAccountNotifications;
    _Bool _suspendedAccount;
    _Bool _needsExtendedProfileUpdate;
    id <TFNTwitterUserContext> _context;
    TFNTwitterUserDataSource *_userDataSource;
    TFNTwitterQuickPromoteModule *_quickPromoteModule;
    TFNTwitterAccount *_viewerAccount;
    NSArray *_clusterFollowRecommendations;
    NSMutableSet *_recommendationsScheduledForReplenish;
    NSString *_profileBannerURL;
    TFSTwitterPaginatedResults *_friendsFollowing;
}

@property(retain, nonatomic) TFSTwitterPaginatedResults *friendsFollowing; // @synthesize friendsFollowing=_friendsFollowing;
@property(nonatomic) _Bool needsExtendedProfileUpdate; // @synthesize needsExtendedProfileUpdate=_needsExtendedProfileUpdate;
@property(nonatomic, getter=isSuspendedAccount) _Bool suspendedAccount; // @synthesize suspendedAccount=_suspendedAccount;
@property(nonatomic, getter=isObservingAccountNotifications) _Bool observingAccountNotifications; // @synthesize observingAccountNotifications=_observingAccountNotifications;
@property(nonatomic, getter=isUserRelationshipLoading) _Bool userRelationshipLoading; // @synthesize userRelationshipLoading=_userRelationshipLoading;
@property(nonatomic, getter=isUserLoading) _Bool userLoading; // @synthesize userLoading=_userLoading;
@property(copy, nonatomic) NSString *profileBannerURL; // @synthesize profileBannerURL=_profileBannerURL;
@property(nonatomic) _Bool isUserInvalid; // @synthesize isUserInvalid=_isUserInvalid;
@property(retain, nonatomic) NSMutableSet *recommendationsScheduledForReplenish; // @synthesize recommendationsScheduledForReplenish=_recommendationsScheduledForReplenish;
@property(copy, nonatomic) NSArray *clusterFollowRecommendations; // @synthesize clusterFollowRecommendations=_clusterFollowRecommendations;
@property(readonly, nonatomic) TFNTwitterAccount *viewerAccount; // @synthesize viewerAccount=_viewerAccount;
@property(nonatomic) _Bool hasBlockedByViewerMessageBeenDismissed; // @synthesize hasBlockedByViewerMessageBeenDismissed=_hasBlockedByViewerMessageBeenDismissed;
@property(readonly, nonatomic, getter=isPreview) _Bool isPreview; // @synthesize isPreview=_isPreview;
@property(readonly, nonatomic, getter=isDisplayedInModal) _Bool displayedInModal; // @synthesize displayedInModal=_displayedInModal;
@property(retain, nonatomic) TFNTwitterQuickPromoteModule *quickPromoteModule; // @synthesize quickPromoteModule=_quickPromoteModule;
@property(readonly, nonatomic) TFNTwitterUserDataSource *userDataSource; // @synthesize userDataSource=_userDataSource;
@property(readonly, nonatomic) id <TFNTwitterUserContext> context; // @synthesize context=_context;
- (void).cxx_destruct;
- (void)_userDataSourceDidUpdate:(id)arg1;
- (void)_recommendedUserDidUpdate:(id)arg1;
- (void)_teamsInvitationDidUpdate:(id)arg1;
- (void)_followerRequestsDidUpdate:(id)arg1;
- (void)_accountDidUpdateSettings:(id)arg1;
- (void)_accountDidUpdateBlocking:(id)arg1;
- (void)_accountDidUpdate:(id)arg1;
- (void)_accountDidUnfollowUser:(id)arg1;
- (void)_startObservingAccountNotifications;
- (void)_requestQuickPromoteModuleIfNeeded;
- (void)_sendRequestsForPartialOrOutdatedUserForced:(_Bool)arg1;
- (void)_sendRequestsForUpToDateUser;
- (void)_receiveClusterFollowRecommendationsWithSuccess:(_Bool)arg1 result:(id)arg2 error:(id)arg3;
- (long long)_userProfileRequestErrorForError:(id)arg1;
- (void)_requestUserForced:(_Bool)arg1;
- (void)_requestRelationshipLookupForUsers:(id)arg1 invalidatingWithReason:(long long)arg2;
- (void)_sendFriendsFollowingRequestIfNeeded;
- (void)_sendExtendedProfileRequestIfNeeded;
- (void)_requestExtraProfileDataIfNeeded;
- (void)_requestReplacementForClusterFollowRecommendation:(id)arg1;
- (void)_requestClusterFollowRecommendationsForUsersSimilarToUserID:(id)arg1 username:(id)arg2 exclusionIDs:(id)arg3;
- (id)_exclusionIDsForRecommendations:(id)arg1;
- (void)_scheduleOrUnscheduleReplacementForClusterFollowRecommendation:(id)arg1;
- (_Bool)_shouldReload;
- (void)_loadDataForced:(_Bool)arg1;
- (void)_invalidateForReason:(long long)arg1;
@property(readonly, nonatomic) NSString *loadingErrorMessage;
- (void)invalidateDataForced:(_Bool)arg1;
- (void)invalidateData;
- (void)requestClusterFollowRecommendationsIfNeeded;
- (void)reloadRelationship;
@property(readonly, nonatomic) NSDictionary *scribeItem;
@property(readonly, nonatomic) TFNTwitterPromotedContent *promotedContent;
@property(readonly, nonatomic) _Bool isPromoted;
@property(readonly, nonatomic) NSNumber *teamsInvitationCount;
@property(readonly, nonatomic) NSNumber *unreadFollowerRequestCount;
@property(readonly, nonatomic) NSNumber *followingCount;
@property(readonly, nonatomic) NSNumber *followerCount;
@property(readonly, nonatomic) NSNumber *favoriteTweetCount;
@property(readonly, nonatomic) NSNumber *mediaTweetCount;
@property(readonly, nonatomic) NSNumber *tweetCount;
@property(readonly, nonatomic) _Bool viewerCanDM;
@property(readonly, nonatomic) _Bool hasFollowRequest;
@property(readonly, nonatomic, getter=isContentWithheldForViewerCountry) _Bool contentWithheldForViewerCountry;
@property(readonly, nonatomic, getter=isViewerLiveFollowing) _Bool viewerLiveFollowing;
@property(readonly, nonatomic, getter=isViewerDeviceFollowing) _Bool viewerDeviceFollowing;
@property(readonly, nonatomic, getter=isTwitterAlertsActivatedByViewer) _Bool twitterAlertsActivatedByViewer;
@property(readonly, nonatomic, getter=isMutedByViewer) _Bool mutedByViewer;
@property(readonly, nonatomic) unsigned long long blockingViewerRelationshipState;
@property(readonly, nonatomic, getter=isBlockedByViewer) _Bool blockedByViewer;
@property(readonly, nonatomic, getter=isFollowedByViewer) _Bool followedByViewer;
@property(readonly, nonatomic, getter=isFollowingViewer) _Bool followingViewer;
@property(readonly, nonatomic, getter=isUserRelationshipReady) _Bool userRelationshipReady;
@property(readonly, nonatomic, getter=isDataReady) _Bool dataReady;
@property(readonly, nonatomic) _Bool needsSetup;
@property(readonly, nonatomic, getter=isTwitterAlertsInstitution) _Bool twitterAlertsInstitution;
@property(readonly, nonatomic) long long interstitialType;
@property(readonly, nonatomic, getter=isProtectedAccount) _Bool protectedAccount;
@property(readonly, nonatomic, getter=isVerifiedAccount) _Bool verifiedAccount;
@property(readonly, nonatomic, getter=isViewingOwnProfile) _Bool viewingOwnProfile;
@property(readonly, nonatomic) UIColor *profileLinkColor;
@property(readonly, nonatomic) TFSTwitterUserExtendedProfile *extendedProfile;
@property(readonly, nonatomic) TFSTwitterEntityURL *entityURL;
@property(readonly, copy, nonatomic) NSString *url;
@property(readonly, nonatomic) TFSTwitterEntitySet *withheldBioEntities;
@property(readonly, copy, nonatomic) NSString *withheldBio;
@property(readonly, nonatomic) TFSTwitterEntitySet *bioEntities;
@property(readonly, copy, nonatomic) NSString *bio;
@property(readonly, nonatomic) TFSTwitterPlace *structuredLocation;
@property(readonly, copy, nonatomic) NSString *location;
@property(readonly, copy, nonatomic) NSString *fullName;
@property(readonly, copy, nonatomic) NSString *username;
@property(readonly, copy, nonatomic) NSString *displayUsername;
- (id)initWithUserDataSource:(id)arg1 context:(id)arg2 viewerAccount:(id)arg3 displayedInModal:(_Bool)arg4 isPreview:(_Bool)arg5;
- (id)initOwnProfileDataSourceWithAccount:(id)arg1;
- (id)initWithUserReference:(id)arg1 viewerAccount:(id)arg2;
- (id)initWithUser:(id)arg1 viewerAccount:(id)arg2;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
