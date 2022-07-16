//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBRequest.h>

#import <CloudKitDaemon/NSCopying-Protocol.h>

@interface CKDPUserRetrieveRequest : PBRequest <NSCopying>
{
}

+ (id)options;	// IMP=0x0000000000246f9e
- (void)mergeFrom:(id)arg1;	// IMP=0x000000000024727f
- (unsigned long long)hash;	// IMP=0x0000000000247277
- (_Bool)isEqual:(id)arg1;	// IMP=0x0000000000247232
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x00000000002471f9
- (void)copyTo:(id)arg1;	// IMP=0x00000000002471f3
- (Class)responseClass;	// IMP=0x00000000002471e2
- (unsigned int)requestTypeCode;	// IMP=0x00000000002471d7
- (void)writeTo:(id)arg1;	// IMP=0x00000000002471d1
- (_Bool)readFrom:(id)arg1;	// IMP=0x00000000002471c4
- (id)dictionaryRepresentation;	// IMP=0x000000000024709d
- (id)description;	// IMP=0x0000000000246fee

@end

