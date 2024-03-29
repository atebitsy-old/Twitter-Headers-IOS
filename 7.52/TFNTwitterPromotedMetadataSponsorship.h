//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <T1Twitter/NSCoding-Protocol.h>
#import <T1Twitter/TFSPlistSerialization-Protocol.h>

@class NSString;

@interface TFNTwitterPromotedMetadataSponsorship : NSObject <TFSPlistSerialization, NSCoding>
{
    NSString *_sponsorshipCandidate;
    NSString *_sponsorshipOrganization;
    NSString *_sponsorshipOrganizationWebsite;
    long long _sponsorshipType;
}

@property(readonly, nonatomic) long long sponsorshipType; // @synthesize sponsorshipType=_sponsorshipType;
@property(readonly, copy, nonatomic) NSString *sponsorshipOrganizationWebsite; // @synthesize sponsorshipOrganizationWebsite=_sponsorshipOrganizationWebsite;
@property(readonly, copy, nonatomic) NSString *sponsorshipOrganization; // @synthesize sponsorshipOrganization=_sponsorshipOrganization;
@property(readonly, copy, nonatomic) NSString *sponsorshipCandidate; // @synthesize sponsorshipCandidate=_sponsorshipCandidate;
- (void).cxx_destruct;
- (id)plistDictionaryValue;
- (id)initWithPlistDictionary:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (_Bool)isEqual:(id)arg1;
@property(readonly) unsigned long long hash;
- (id)initWithSponsorshipCandidate:(id)arg1 sponsorshipOrganization:(id)arg2 sponsorshipOrganizationWebsite:(id)arg3 sponsorshipType:(long long)arg4;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) Class superclass;

@end

