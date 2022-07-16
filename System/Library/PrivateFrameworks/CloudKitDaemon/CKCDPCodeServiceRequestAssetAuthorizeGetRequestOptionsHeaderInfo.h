//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

#import <CloudKitDaemon/NSCopying-Protocol.h>

@class NSString;

@interface CKCDPCodeServiceRequestAssetAuthorizeGetRequestOptionsHeaderInfo : PBCodable <NSCopying>
{
    NSString *_headerKey;	// 8 = 0x8
    NSString *_headerValue;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x00000000000f77fb
@property(retain, nonatomic) NSString *headerValue; // @synthesize headerValue=_headerValue;
@property(retain, nonatomic) NSString *headerKey; // @synthesize headerKey=_headerKey;
- (void)mergeFrom:(id)arg1;	// IMP=0x00000000000f774e
- (unsigned long long)hash;	// IMP=0x00000000000f7701
- (_Bool)isEqual:(id)arg1;	// IMP=0x00000000000f7639
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x00000000000f759b
- (void)copyTo:(id)arg1;	// IMP=0x00000000000f7538
- (void)writeTo:(id)arg1;	// IMP=0x00000000000f74db
- (_Bool)readFrom:(id)arg1;	// IMP=0x00000000000f74ce
- (id)dictionaryRepresentation;	// IMP=0x00000000000f72b9
- (id)description;	// IMP=0x00000000000f720a
@property(readonly, nonatomic) _Bool hasHeaderValue;
@property(readonly, nonatomic) _Bool hasHeaderKey;

@end
