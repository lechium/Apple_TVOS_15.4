//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

#import <PassKitCore/NSCopying-Protocol.h>

@class NSData, NSMutableArray, NSString;

@interface PKProtobufShareableCredentialMessage : PBCodable <NSCopying>
{
    NSString *_dataString;	// 8 = 0x8
    NSString *_messageCaption;	// 16 = 0x10
    NSData *_passThumbnailImage;	// 24 = 0x18
    NSString *_policyIdentifier;	// 32 = 0x20
    NSMutableArray *_shareableCredentials;	// 40 = 0x28
    unsigned int _version;	// 48 = 0x30
}

+ (Class)shareableCredentialsType;	// IMP=0x0000000000219245
- (void).cxx_destruct;	// IMP=0x000000000021a463
@property(retain, nonatomic) NSData *passThumbnailImage; // @synthesize passThumbnailImage=_passThumbnailImage;
@property(retain, nonatomic) NSString *policyIdentifier; // @synthesize policyIdentifier=_policyIdentifier;
@property(retain, nonatomic) NSString *dataString; // @synthesize dataString=_dataString;
@property(retain, nonatomic) NSString *messageCaption; // @synthesize messageCaption=_messageCaption;
@property(retain, nonatomic) NSMutableArray *shareableCredentials; // @synthesize shareableCredentials=_shareableCredentials;
@property(nonatomic) unsigned int version; // @synthesize version=_version;
- (void)mergeFrom:(id)arg1;	// IMP=0x000000000021a188
- (unsigned long long)hash;	// IMP=0x000000000021a0c9
- (_Bool)isEqual:(id)arg1;	// IMP=0x0000000000219f54
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x0000000000219cb7
- (void)copyTo:(id)arg1;	// IMP=0x0000000000219b60
- (void)writeTo:(id)arg1;	// IMP=0x0000000000219991
- (_Bool)readFrom:(id)arg1;	// IMP=0x0000000000219984
- (id)dictionaryRepresentation;	// IMP=0x0000000000219359
- (id)description;	// IMP=0x00000000002192aa
@property(readonly, nonatomic) _Bool hasPassThumbnailImage;
@property(readonly, nonatomic) _Bool hasPolicyIdentifier;
@property(readonly, nonatomic) _Bool hasDataString;
@property(readonly, nonatomic) _Bool hasMessageCaption;
- (id)shareableCredentialsAtIndex:(unsigned long long)arg1;	// IMP=0x0000000000219228
- (unsigned long long)shareableCredentialsCount;	// IMP=0x000000000021920b
- (void)addShareableCredentials:(id)arg1;	// IMP=0x00000000002191a1
- (void)clearShareableCredentials;	// IMP=0x0000000000219184

@end

