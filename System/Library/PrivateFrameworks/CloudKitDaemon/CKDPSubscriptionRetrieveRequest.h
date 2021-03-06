//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBRequest.h>

#import <CloudKitDaemon/NSCopying-Protocol.h>

@class CKDPIdentifier;

@interface CKDPSubscriptionRetrieveRequest : PBRequest <NSCopying>
{
    CKDPIdentifier *_identifier;	// 8 = 0x8
}

+ (id)options;	// IMP=0x00000000001aff87
- (void).cxx_destruct;	// IMP=0x00000000001b0502
@property(retain, nonatomic) CKDPIdentifier *identifier; // @synthesize identifier=_identifier;
- (void)mergeFrom:(id)arg1;	// IMP=0x00000000001b0483
- (unsigned long long)hash;	// IMP=0x00000000001b0466
- (_Bool)isEqual:(id)arg1;	// IMP=0x00000000001b03cc
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x00000000001b0354
- (void)copyTo:(id)arg1;	// IMP=0x00000000001b032a
- (Class)responseClass;	// IMP=0x00000000001b0319
- (unsigned int)requestTypeCode;	// IMP=0x00000000001b030e
- (void)writeTo:(id)arg1;	// IMP=0x00000000001b02ea
- (_Bool)readFrom:(id)arg1;	// IMP=0x00000000001b02dd
- (id)dictionaryRepresentation;	// IMP=0x00000000001b009b
- (id)description;	// IMP=0x00000000001affec
@property(readonly, nonatomic) _Bool hasIdentifier;

@end

