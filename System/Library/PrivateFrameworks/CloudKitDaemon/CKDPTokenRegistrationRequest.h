//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBRequest.h>

#import <CloudKitDaemon/NSCopying-Protocol.h>

@class CKDPTokenRegistrationBody;

@interface CKDPTokenRegistrationRequest : PBRequest <NSCopying>
{
    CKDPTokenRegistrationBody *_tokenRegistrationBody;	// 8 = 0x8
}

+ (id)options;	// IMP=0x0000000000138319
- (void).cxx_destruct;	// IMP=0x0000000000138894
@property(retain, nonatomic) CKDPTokenRegistrationBody *tokenRegistrationBody; // @synthesize tokenRegistrationBody=_tokenRegistrationBody;
- (void)mergeFrom:(id)arg1;	// IMP=0x0000000000138815
- (unsigned long long)hash;	// IMP=0x00000000001387f8
- (_Bool)isEqual:(id)arg1;	// IMP=0x000000000013875e
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x00000000001386e6
- (void)copyTo:(id)arg1;	// IMP=0x00000000001386bc
- (Class)responseClass;	// IMP=0x00000000001386ab
- (unsigned int)requestTypeCode;	// IMP=0x00000000001386a0
- (void)writeTo:(id)arg1;	// IMP=0x000000000013867c
- (_Bool)readFrom:(id)arg1;	// IMP=0x000000000013866f
- (id)dictionaryRepresentation;	// IMP=0x000000000013842d
- (id)description;	// IMP=0x000000000013837e
@property(readonly, nonatomic) _Bool hasTokenRegistrationBody;

@end

