//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

@class NSData, SecDbBackupBagIdentity;

__attribute__((visibility("hidden")))
@interface SecDbBackupRecoverySet : PBCodable
{
    SecDbBackupBagIdentity *_bagIdentity;	// 8 = 0x8
    int _recoveryType;	// 16 = 0x10
    NSData *_wrappedBagSecret;	// 24 = 0x18
    NSData *_wrappedKCSKSecret;	// 32 = 0x20
    NSData *_wrappedRecoveryKey;	// 40 = 0x28
    struct {
        unsigned int recoveryType:1;
    } _has;	// 48 = 0x30
}

- (void).cxx_destruct;	// IMP=0x00200000000a0495
@property(retain, nonatomic) NSData *wrappedRecoveryKey; // @synthesize wrappedRecoveryKey=_wrappedRecoveryKey;
@property(retain, nonatomic) NSData *wrappedKCSKSecret; // @synthesize wrappedKCSKSecret=_wrappedKCSKSecret;
@property(retain, nonatomic) NSData *wrappedBagSecret; // @synthesize wrappedBagSecret=_wrappedBagSecret;
@property(retain, nonatomic) SecDbBackupBagIdentity *bagIdentity; // @synthesize bagIdentity=_bagIdentity;
@property(nonatomic) int recoveryType; // @synthesize recoveryType=_recoveryType;
- (void)mergeFrom:(id)arg1;	// IMP=0x00100000000a0317
- (unsigned long long)hash;	// IMP=0x00100000000a025f
- (_Bool)isEqual:(id)arg1;	// IMP=0x00100000000a00fb
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x001000000009ffee
- (void)copyTo:(id)arg1;	// IMP=0x001000000009ff2b
- (void)writeTo:(id)arg1;	// IMP=0x001000000009fe70
- (_Bool)readFrom:(id)arg1;	// IMP=0x001000000009fb89
- (id)dictionaryRepresentation;	// IMP=0x001000000009fa31
- (id)description;	// IMP=0x001000000009f982
@property(readonly, nonatomic) _Bool hasWrappedRecoveryKey;
@property(readonly, nonatomic) _Bool hasWrappedKCSKSecret;
@property(readonly, nonatomic) _Bool hasWrappedBagSecret;
@property(readonly, nonatomic) _Bool hasBagIdentity;
@property(nonatomic) _Bool hasRecoveryType;

@end

