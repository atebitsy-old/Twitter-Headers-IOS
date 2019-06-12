//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@interface TFNTwitterDeviceFeatureSwitches : NSObject
{
}

+ (id)sqliteScribeExperimentBucket;
+ (_Bool)isNewsCameraStatusesUploadEndpointEnabled;
+ (id)blacklistedPeriscopeURLDestinations;
+ (_Bool)isSiriEnabled;
+ (_Bool)isBandwidthServiceTimeEnabled;
+ (_Bool)isSettingsEditPasswordEnabled;
+ (_Bool)isHighlightedLabelRequestParameterEnabled;
+ (double)stratoHashflagsRefreshInterval;
+ (_Bool)limitBufferingAggressivelyOnPausedItems;
+ (_Bool)limitBufferingOnAllPlayerItems;
+ (_Bool)isLevelAAColorsEnabled;
+ (id)preWarmConnectionHostNames;
+ (_Bool)isTwitterRevenuePartnerTuneUniversalLinkDomainEnabled;
+ (unsigned long long)maxNumberDiscountedURLs;
+ (_Bool)isDisplayTextModelEnabled;
+ (id)_featureSwitches;
+ (long long)tpmIdSyncClickIntervalInSeconds;
+ (long long)tpmIdSyncFetchIntervalInSeconds;
+ (_Bool)isTPMIdSyncEnabled;
+ (_Bool)isDeferingAccountAndUserUpdateNotificationEnabled;
+ (long long)backgroundTaskExpirationReportingThreshold;
+ (_Bool)isSaveSharedWebCredentialsInReauthEnabled;
+ (long long)typeaheadPrefetchOverrideSize;
+ (long long)typeaheadClientIndexSize;
+ (_Bool)isTypeaheadClientIndexEnabled;
+ (id)typeaheadClientIndexExperimentBucket;
+ (_Bool)isGraphQLStatusesShowDarkReadEnabled;
+ (_Bool)isGraphQLStatusesShowEnabled;
+ (_Bool)isGraphQLAccountVerifyCredentialsEnabled;
+ (_Bool)isGraphQLUsersShowEnabled;
+ (_Bool)coreServices2StatusEnabled;
+ (_Bool)coreServices2UserEnabled;
+ (_Bool)coreServices2UserBuilderEnabled;
+ (id)coreServices2TNLBackgroundIdleTimeout;
+ (id)coreServices2TNLForegroundIdleTimeout;
+ (unsigned long long)maximumFullNameLength;
+ (_Bool)isScribeClientNetworkRequestEnabled;
+ (long long)scribeAPIErrorSampleSize;
+ (long long)scribeAPISampleSize;
+ (_Bool)isRefSrcScribingEnabled;
+ (id)httpHostMapArray;
+ (_Bool)isOAuthScopeBackendEnabled;
+ (_Bool)isTeamsAccountUIEnabled;
+ (_Bool)isTeamsAccountEnabled;
+ (void)accessFeatureSwitchValueOnce:(long long *)arg1 valueAccessBlock:(CDUnknownBlockType)arg2;
+ (long long)dashNewsCameraSwipeAngle;
+ (_Bool)isDashSplitViewEnabled;
+ (_Bool)isDashOpenOnLongPressBackEnabled;
+ (_Bool)isDashContentSFSVCEnabled;
+ (_Bool)isDashNewsEnabled;
+ (_Bool)isBetaBugButtonEmailFlowEnabled;
+ (_Bool)isTNLForPeriscopePluginEnabled;
+ (id)nonFatalSecurityBlacklist;
+ (id)dataSensitiveCountries;
+ (id)dataInsensitiveCountries;
+ (id)foundMediaDomains;
+ (id)CDNFileExtensionList;
+ (id)CDNHostRootList;
+ (long long)CDNSampleSize;
+ (_Bool)isOnboardingLocationBackstopPromptEnabled;
+ (id)appEventTrackingShortenedTrackingParameters;
+ (double)appEventTrackingNonReferredOpenInterval;
+ (_Bool)isExternalURLProtectionEnabled;
+ (id)bouncerWhitelistAll;
+ (id)bouncerWhitelistEntrances;
+ (_Bool)isPublicInterestInterstitialEnabled;
+ (_Bool)isLoginJSInstrumentationEnabled;
+ (id)phoneSignupCountriesNotificationsWhitelist;
+ (id)phoneSignupCountriesBlacklist;
+ (id)phoneSignupCountriesGraylist;
+ (_Bool)usePushPayloadsForComponentBadgeCounts;
+ (_Bool)isAggregateBadgingInPushEnabled;
+ (double)ambientNotificationCooldownPeriod;
+ (long long)maxQueuedAmbientNotifications;
+ (long long)rightToLeftMode;
+ (_Bool)isFeatureSwitchesCrashlyticsLoggingEnabled;
+ (long long)appStoreReviewPromptDaysAfterCrashMin;
+ (long long)appStoreReviewPromptDaysBetweenAttemptsMin;
+ (long long)appStoreReviewPromptConsecutiveDaysMin;
+ (_Bool)isAppStoreReviewShowPromptAfterFavoriteEnabled;
+ (_Bool)isAppStoreReviewShowPromptAfterTweetEnabled;
+ (_Bool)isAppStoreReviewShowPromptOnStartupEnabled;
+ (_Bool)isAppStoreReviewApplePromptEnabled;
+ (id)private_redactionListForKey:(id)arg1 defaultList:(id)arg2;
+ (id)protectedStatusKeysRedactionList;
+ (id)protectedUserKeysRedactionList;
+ (id)HTTPHeaderFieldRedactionList;
+ (id)userDefaultsKeysRedactionList;
+ (_Bool)isSpotlightBackgroundFetchEnabled;
+ (double)homeTimelineBackgroundFetchSinceBackgroundThreshold;
+ (double)homeTimelineBackgroundFetchLongRefreshThreshold;
+ (double)homeTimelineBackgroundFetchLaunchThreshold;
+ (double)homeTimelineBackgroundFetchUILaunchDelay;
+ (double)homeTimelineBackgroundFetchUpdateTime;
+ (_Bool)isHomeTimelineBackgroundFetchEnabled;
+ (_Bool)isModalSheetsSlideoverEnabledForTweetDrafts;
+ (_Bool)isModalSheetsComposerUnificationSlideoverEnabled;
+ (double)_CGFloatForKey:(id)arg1 minValue:(double)arg2 maxValue:(double)arg3;
+ (long long)_integerForKey:(id)arg1 minValue:(long long)arg2 maxValue:(long long)arg3;
+ (id)nonUsernamePaths;
+ (long long)mediaURLLength;
+ (long long)shortenedURLLengthSecure;
+ (id)blackListedWebViewDomains;
+ (id)blackListedEmailDomains;
+ (double)scribeStatusLingerMaxThresholdInSeconds;
+ (double)scribeStatusLingerMinThresholdInSeconds;
+ (long long)rateUsPromptVersion;
+ (long long)typeaheadMaxUserMatches;
+ (long long)typeaheadMaxRecentSearchesHorizontallyScrolling;
+ (long long)typeaheadMaxRecentSearches;
+ (long long)typeaheadMaxQueryMatches;
+ (long long)typeaheadUserPrefetchSize;
+ (double)typeaheadUserPrefetchRateInSeconds;
+ (long long)antispamQueryFrequency;
+ (long long)antispamConnectUserCount;
+ (long long)antispamConnectTweetCount;
+ (_Bool)disableInlinePhotosInstagram;
+ (_Bool)disableWatchdogDetection;
+ (_Bool)shouldScribeCrash;
+ (_Bool)shouldScribeError;
+ (id)specialEventHashtags;
+ (_Bool)isSpecialEventAnimationEnabled;
+ (_Bool)isSmartInvertColorsEnabled;
+ (_Bool)isNestedActionButtonEnabled;
+ (_Bool)isProfileCollapsingNavigationBarEnabled;
+ (_Bool)isDarkerNightModeColorsEnabled;
+ (_Bool)isLargeScreenLayoutSpecializationEnabled;
+ (_Bool)is1PasswordSharingEnabled;
+ (_Bool)isUNUserNotificationCenterEnabled;

@end
