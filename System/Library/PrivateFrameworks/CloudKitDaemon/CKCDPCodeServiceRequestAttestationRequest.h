//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBRequest.h>

#import <CloudKitDaemon/NSCopying-Protocol.h>

@class NSData;

@interface CKCDPCodeServiceRequestAttestationRequest : PBRequest <NSCopying>
{
    NSData *_entropy;	// 8 = 0x8
}

- (void).cxx_destruct;	// IMP=0x00000000000cb501
@property(retain, nonatomic) NSData *entropy; // @synthesize entropy=_entropy;
- (void)mergeFrom:(id)arg1;	// IMP=0x00000000000cb4b8
- (unsigned long long)hash;	// IMP=0x00000000000cb49b
- (_Bool)isEqual:(id)arg1;	// IMP=0x00000000000cb401
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x00000000000cb389
- (void)copyTo:(id)arg1;	// IMP=0x00000000000cb35f
- (void)writeTo:(id)arg1;	// IMP=0x00000000000cb33b
- (_Bool)readFrom:(id)arg1;	// IMP=0x00000000000cb32e
- (id)dictionaryRepresentation;	// IMP=0x00000000000cb162
- (id)description;	// IMP=0x00000000000cb0b3
@property(readonly, nonatomic) _Bool hasEntropy;

@end

