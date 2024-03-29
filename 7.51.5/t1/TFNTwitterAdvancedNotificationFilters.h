//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <T1Twitter/NSCopying-Protocol.h>

@class NSString;

@interface TFNTwitterAdvancedNotificationFilters : NSObject <NSCopying>
{
    _Bool _filterAccountsNotFollowingEnabled;
    _Bool _filterAccountsNotFollowingMeEnabled;
    _Bool _filterNewAccountsEnabled;
    _Bool _filterAccountsWithADefaultAvatarEnabled;
    _Bool _filterAccountsWithUnverifiedEmailEnabled;
    _Bool _filterAccountsWithUnverifiedPhoneEnabled;
}

+ (id)advancedNotificationFiltersWithJSONData:(id)arg1 error:(id *)arg2;
@property(nonatomic, getter=isFilterAccountsWithUnverifiedPhoneEnabled) _Bool filterAccountsWithUnverifiedPhoneEnabled; // @synthesize filterAccountsWithUnverifiedPhoneEnabled=_filterAccountsWithUnverifiedPhoneEnabled;
@property(nonatomic, getter=isFilterAccountsWithUnverifiedEmailEnabled) _Bool filterAccountsWithUnverifiedEmailEnabled; // @synthesize filterAccountsWithUnverifiedEmailEnabled=_filterAccountsWithUnverifiedEmailEnabled;
@property(nonatomic, getter=isFilterAccountsWithADefaultAvatarEnabled) _Bool filterAccountsWithADefaultAvatarEnabled; // @synthesize filterAccountsWithADefaultAvatarEnabled=_filterAccountsWithADefaultAvatarEnabled;
@property(nonatomic, getter=isFilterNewAccountsEnabled) _Bool filterNewAccountsEnabled; // @synthesize filterNewAccountsEnabled=_filterNewAccountsEnabled;
@property(nonatomic, getter=isFilterAccountsNotFollowingMeEnabled) _Bool filterAccountsNotFollowingMeEnabled; // @synthesize filterAccountsNotFollowingMeEnabled=_filterAccountsNotFollowingMeEnabled;
@property(nonatomic, getter=isFilterAccountsNotFollowingEnabled) _Bool filterAccountsNotFollowingEnabled; // @synthesize filterAccountsNotFollowingEnabled=_filterAccountsNotFollowingEnabled;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)JSONDictionary;
- (id)initWithJSONDictionary:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

