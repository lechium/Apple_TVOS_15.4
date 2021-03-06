//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBRequest.h>

#import <PassKitCore/NSCopying-Protocol.h>

@class NSString, PKProtobufCloudStoreZoneInvitation;

@interface PKProtobufCloudStoreZoneInvitationRequest : PBRequest <NSCopying>
{
    unsigned int _errorCode;	// 8 = 0x8
    NSString *_errorDescription;	// 16 = 0x10
    NSString *_errorDomain;	// 24 = 0x18
    PKProtobufCloudStoreZoneInvitation *_invitation;	// 32 = 0x20
    unsigned int _version;	// 40 = 0x28
    struct {
        unsigned int errorCode:1;
    } _has;	// 44 = 0x2c
}

- (void).cxx_destruct;	// IMP=0x000000000003dfca
@property(retain, nonatomic) NSString *errorDescription; // @synthesize errorDescription=_errorDescription;
@property(retain, nonatomic) NSString *errorDomain; // @synthesize errorDomain=_errorDomain;
@property(nonatomic) unsigned int errorCode; // @synthesize errorCode=_errorCode;
@property(retain, nonatomic) PKProtobufCloudStoreZoneInvitation *invitation; // @synthesize invitation=_invitation;
@property(nonatomic) unsigned int version; // @synthesize version=_version;
- (void)mergeFrom:(id)arg1;	// IMP=0x000000000003de63
- (unsigned long long)hash;	// IMP=0x000000000003ddb2
- (_Bool)isEqual:(id)arg1;	// IMP=0x000000000003dc74
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x000000000003db7f
- (void)copyTo:(id)arg1;	// IMP=0x000000000003dace
- (void)writeTo:(id)arg1;	// IMP=0x000000000003da19
- (_Bool)readFrom:(id)arg1;	// IMP=0x000000000003da0c
- (id)dictionaryRepresentation;	// IMP=0x000000000003d54b
- (id)description;	// IMP=0x000000000003d49c
@property(readonly, nonatomic) _Bool hasErrorDescription;
@property(readonly, nonatomic) _Bool hasErrorDomain;
@property(nonatomic) _Bool hasErrorCode;
@property(readonly, nonatomic) _Bool hasInvitation;

@end

