//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBRequest.h>

#import <CloudKitDaemon/NSCopying-Protocol.h>

@interface CKDPDeleteContainerRequest : PBRequest <NSCopying>
{
}

+ (id)options;	// IMP=0x00000000001fe63e
- (void)mergeFrom:(id)arg1;	// IMP=0x00000000001fe91f
- (unsigned long long)hash;	// IMP=0x00000000001fe917
- (_Bool)isEqual:(id)arg1;	// IMP=0x00000000001fe8d2
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x00000000001fe899
- (void)copyTo:(id)arg1;	// IMP=0x00000000001fe893
- (Class)responseClass;	// IMP=0x00000000001fe882
- (unsigned int)requestTypeCode;	// IMP=0x00000000001fe877
- (void)writeTo:(id)arg1;	// IMP=0x00000000001fe871
- (_Bool)readFrom:(id)arg1;	// IMP=0x00000000001fe864
- (id)dictionaryRepresentation;	// IMP=0x00000000001fe73d
- (id)description;	// IMP=0x00000000001fe68e

@end
