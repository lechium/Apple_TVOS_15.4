//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

@class NSString;

@interface TFImageUpload : PBCodable
{
    NSString *_uploadUrl;	// 8 = 0x8
    NSString *_xiCloudVersionIdHeader;	// 16 = 0x10
}

+ (_Bool)supportsSecureCoding;	// IMP=0x0010000000072fc2
- (void).cxx_destruct;	// IMP=0x0010000000015093
@property(retain, nonatomic) NSString *xiCloudVersionIdHeader; // @synthesize xiCloudVersionIdHeader=_xiCloudVersionIdHeader;
@property(retain, nonatomic) NSString *uploadUrl; // @synthesize uploadUrl=_uploadUrl;
- (void)mergeFrom:(id)arg1;	// IMP=0x0010000000014fe6
- (unsigned long long)hash;	// IMP=0x0010000000014f99
- (_Bool)isEqual:(id)arg1;	// IMP=0x0010000000014ed1
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x0010000000014e33
- (void)copyTo:(id)arg1;	// IMP=0x0010000000014dd0
- (void)writeTo:(id)arg1;	// IMP=0x0010000000014d73
- (_Bool)readFrom:(id)arg1;	// IMP=0x0010000000014d66
- (id)dictionaryRepresentation;	// IMP=0x0010000000014b51
- (id)description;	// IMP=0x0010000000014aa2
@property(readonly, nonatomic) _Bool hasXiCloudVersionIdHeader;
@property(readonly, nonatomic) _Bool hasUploadUrl;
- (id)initWithCoder:(id)arg1;	// IMP=0x0010000000073045
- (void)encodeWithCoder:(id)arg1;	// IMP=0x0010000000072fca

@end

