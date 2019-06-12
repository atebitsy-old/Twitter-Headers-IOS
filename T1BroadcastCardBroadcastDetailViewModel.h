//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString, TFNTwitterUser;

@interface T1BroadcastCardBroadcastDetailViewModel : NSObject
{
    TFNTwitterUser *_user;
    NSString *_title;
    NSString *_adString;
}

@property(copy, nonatomic) NSString *adString; // @synthesize adString=_adString;
@property(copy, nonatomic) NSString *title; // @synthesize title=_title;
@property(readonly, nonatomic) TFNTwitterUser *user; // @synthesize user=_user;
- (void).cxx_destruct;
- (_Bool)isEqual:(id)arg1;
- (_Bool)isEqualToViewModel:(id)arg1;
@property(readonly, nonatomic) _Bool showTitle;
@property(readonly, copy, nonatomic) NSString *displayUsername;
@property(readonly, nonatomic) _Bool showDisplayUsername;
@property(readonly, copy, nonatomic) NSString *displayName;
@property(readonly, nonatomic) _Bool showDisplayName;
@property(readonly, nonatomic) _Bool showVerified;
@property(readonly, nonatomic, getter=isShowingAd) _Bool showingAd;
- (id)initWithUser:(id)arg1 title:(id)arg2 adString:(id)arg3;

@end
