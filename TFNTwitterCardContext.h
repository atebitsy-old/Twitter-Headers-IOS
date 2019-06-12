//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString, T1MomentCapsuleViewConfiguration, TFNTwitterAccount, TFNTwitterCardData;
@protocol TFNTwitterCardDataSource;

@interface TFNTwitterCardContext : NSObject
{
    _Bool _requiresMediaFocusPresentation;
    TFNTwitterAccount *_account;
    id <TFNTwitterCardDataSource> _cardDataSource;
    TFNTwitterCardData *_cardData;
    long long _displayMode;
}

@property(readonly, nonatomic) _Bool requiresMediaFocusPresentation; // @synthesize requiresMediaFocusPresentation=_requiresMediaFocusPresentation;
@property(readonly, nonatomic) long long displayMode; // @synthesize displayMode=_displayMode;
@property(readonly, nonatomic) TFNTwitterCardData *cardData; // @synthesize cardData=_cardData;
@property(readonly, nonatomic) id <TFNTwitterCardDataSource> cardDataSource; // @synthesize cardDataSource=_cardDataSource;
@property(readonly, nonatomic) __weak TFNTwitterAccount *account; // @synthesize account=_account;
- (void).cxx_destruct;
@property(readonly, nonatomic) NSString *cacheKey;
- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)description;
- (id)initWithCardDataSource:(id)arg1 account:(id)arg2 displayMode:(long long)arg3 requiresMediaFocusPresentation:(_Bool)arg4;
- (id)initWithCardDataSource:(id)arg1 account:(id)arg2 displayMode:(long long)arg3;
- (id)init;
@property(nonatomic, readonly) T1MomentCapsuleViewConfiguration *momentCapsuleConfiguration;

@end
