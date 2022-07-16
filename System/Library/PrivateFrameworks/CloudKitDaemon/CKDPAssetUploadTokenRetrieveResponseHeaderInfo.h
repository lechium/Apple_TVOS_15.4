//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

#import <CloudKitDaemon/NSCopying-Protocol.h>

@class NSString;

@interface CKDPAssetUploadTokenRetrieveResponseHeaderInfo : PBCodable <NSCopying>
{
    NSString *_headerKey;	// 8 = 0x8
    NSString *_headerValue;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x0000000000047659
@property(retain, nonatomic) NSString *headerValue; // @synthesize headerValue=_headerValue;
@property(retain, nonatomic) NSString *headerKey; // @synthesize headerKey=_headerKey;
- (void)mergeFrom:(id)arg1;	// IMP=0x00000000000475ac
- (unsigned long long)hash;	// IMP=0x000000000004755f
- (_Bool)isEqual:(id)arg1;	// IMP=0x0000000000047497
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x00000000000473f9
- (void)copyTo:(id)arg1;	// IMP=0x0000000000047388
- (void)writeTo:(id)arg1;	// IMP=0x00000000000472ed
- (_Bool)readFrom:(id)arg1;	// IMP=0x00000000000472e0
- (id)dictionaryRepresentation;	// IMP=0x00000000000470cb
- (id)description;	// IMP=0x000000000004701c

@end

