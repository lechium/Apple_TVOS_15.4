//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBRequest.h>

#import <CloudKitDaemon/NSCopying-Protocol.h>

@interface CKDPBundlesForContainerRequest : PBRequest <NSCopying>
{
}

+ (id)options;	// IMP=0x00000000002e44c3
- (void)mergeFrom:(id)arg1;	// IMP=0x00000000002e47a4
- (unsigned long long)hash;	// IMP=0x00000000002e479c
- (_Bool)isEqual:(id)arg1;	// IMP=0x00000000002e4757
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x00000000002e471e
- (void)copyTo:(id)arg1;	// IMP=0x00000000002e4718
- (Class)responseClass;	// IMP=0x00000000002e4707
- (unsigned int)requestTypeCode;	// IMP=0x00000000002e46fc
- (void)writeTo:(id)arg1;	// IMP=0x00000000002e46f6
- (_Bool)readFrom:(id)arg1;	// IMP=0x00000000002e46e9
- (id)dictionaryRepresentation;	// IMP=0x00000000002e45c2
- (id)description;	// IMP=0x00000000002e4513

@end

