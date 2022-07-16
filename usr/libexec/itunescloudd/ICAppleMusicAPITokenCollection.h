//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

@class NSString;

@interface ICAppleMusicAPITokenCollection : PBCodable
{
    NSString *_developerToken;	// 8 = 0x8
    NSString *_userToken;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x00200000000ab564
@property(retain, nonatomic) NSString *userToken; // @synthesize userToken=_userToken;
@property(retain, nonatomic) NSString *developerToken; // @synthesize developerToken=_developerToken;
- (void)mergeFrom:(id)arg1;	// IMP=0x00100000000ab4b7
- (unsigned long long)hash;	// IMP=0x00100000000ab46a
- (_Bool)isEqual:(id)arg1;	// IMP=0x00100000000ab3a2
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x00100000000ab304
- (void)writeTo:(id)arg1;	// IMP=0x00100000000ab2a7
- (_Bool)readFrom:(id)arg1;	// IMP=0x00100000000ab29a
- (id)dictionaryRepresentation;	// IMP=0x00100000000ab217
- (id)description;	// IMP=0x00100000000ab168
@property(readonly, nonatomic) _Bool hasUserToken;
@property(readonly, nonatomic) _Bool hasDeveloperToken;
- (id)privacyConsciousDescription;	// IMP=0x001000000001929e
- (id)privacyConsciousDictionaryRepresentation;	// IMP=0x001000000001910e

@end

