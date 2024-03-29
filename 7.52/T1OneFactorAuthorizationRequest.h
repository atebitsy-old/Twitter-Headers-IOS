//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString, TFNTwitterOneFactorAuthorizationFactor;

@interface T1OneFactorAuthorizationRequest : NSObject
{
    unsigned long long _factorType;
    NSString *_userIdentifier;
    TFNTwitterOneFactorAuthorizationFactor *_emailFactor;
    TFNTwitterOneFactorAuthorizationFactor *_smsFactor;
    NSString *_requestID;
    NSString *_scribePage;
    NSString *_scribeSection;
    NSString *_scribeElement;
}

@property(copy, nonatomic) NSString *scribeElement; // @synthesize scribeElement=_scribeElement;
@property(copy, nonatomic) NSString *scribeSection; // @synthesize scribeSection=_scribeSection;
@property(copy, nonatomic) NSString *scribePage; // @synthesize scribePage=_scribePage;
@property(copy, nonatomic) NSString *requestID; // @synthesize requestID=_requestID;
@property(readonly, nonatomic) TFNTwitterOneFactorAuthorizationFactor *smsFactor; // @synthesize smsFactor=_smsFactor;
@property(readonly, nonatomic) TFNTwitterOneFactorAuthorizationFactor *emailFactor; // @synthesize emailFactor=_emailFactor;
@property(readonly, copy, nonatomic) NSString *userIdentifier; // @synthesize userIdentifier=_userIdentifier;
@property(nonatomic) unsigned long long factorType; // @synthesize factorType=_factorType;
- (void).cxx_destruct;
- (id)initWithFactorType:(unsigned long long)arg1 userIdentifier:(id)arg2 emailFactor:(id)arg3 smsFactor:(id)arg4 requestID:(id)arg5;

@end

