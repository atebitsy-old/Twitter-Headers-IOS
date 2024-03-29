//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <T1Twitter/NSCoding-Protocol.h>

@class TSPPublicKey;

@interface TSPIdentityKey : NSObject <NSCoding>
{
    TSPPublicKey *_publicKey;
    struct ratchet_identity_key_pair *_keyPair;
}

@property(readonly, nonatomic) struct ratchet_identity_key_pair *keyPair; // @synthesize keyPair=_keyPair;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (void)withSerializedBytes:(CDUnknownBlockType)arg1;
- (id)initWithSerializedBytes:(const void *)arg1 length:(unsigned long long)arg2;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
@property(readonly, copy, nonatomic) TSPPublicKey *publicKey; // @synthesize publicKey=_publicKey;
- (void)dealloc;
- (id)init;
- (id)initWithKeyPair:(struct ratchet_identity_key_pair *)arg1;

@end

