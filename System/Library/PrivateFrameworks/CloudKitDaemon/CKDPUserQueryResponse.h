//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

#import <CloudKitDaemon/NSCopying-Protocol.h>

@class CKDPUser;

@interface CKDPUserQueryResponse : PBCodable <NSCopying>
{
    CKDPUser *_user;	// 8 = 0x8
}

- (void).cxx_destruct;	// IMP=0x00000000002f0a5f
@property(retain, nonatomic) CKDPUser *user; // @synthesize user=_user;
- (void)mergeFrom:(id)arg1;	// IMP=0x00000000002f09e0
- (unsigned long long)hash;	// IMP=0x00000000002f09c3
- (_Bool)isEqual:(id)arg1;	// IMP=0x00000000002f0929
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x00000000002f08b1
- (void)copyTo:(id)arg1;	// IMP=0x00000000002f0887
- (void)writeTo:(id)arg1;	// IMP=0x00000000002f0863
- (_Bool)readFrom:(id)arg1;	// IMP=0x00000000002f0856
- (id)dictionaryRepresentation;	// IMP=0x00000000002f0614
- (id)description;	// IMP=0x00000000002f0565
@property(readonly, nonatomic) _Bool hasUser;

@end

