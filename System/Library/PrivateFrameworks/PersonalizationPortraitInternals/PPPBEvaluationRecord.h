//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

#import <PersonalizationPortraitInternals/NSCopying-Protocol.h>

@class NSString;

@interface PPPBEvaluationRecord : PBCodable <NSCopying>
{
    long long _deviceId;	// 8 = 0x8
    NSString *_contents;	// 16 = 0x10
    struct {
        unsigned int deviceId:1;
    } _has;	// 24 = 0x18
}

- (void).cxx_destruct;	// IMP=0x0000000000104ce8
@property(nonatomic) long long deviceId; // @synthesize deviceId=_deviceId;
@property(retain, nonatomic) NSString *contents; // @synthesize contents=_contents;
- (void)mergeFrom:(id)arg1;	// IMP=0x0000000000104c4e
- (unsigned long long)hash;	// IMP=0x0000000000104bfe
- (_Bool)isEqual:(id)arg1;	// IMP=0x0000000000104b3d
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x0000000000104aa4
- (void)copyTo:(id)arg1;	// IMP=0x0000000000104a40
- (void)writeTo:(id)arg1;	// IMP=0x00000000001049db
- (_Bool)readFrom:(id)arg1;	// IMP=0x00000000001049ce
- (id)dictionaryRepresentation;	// IMP=0x000000000010490e
- (id)description;	// IMP=0x000000000010485f
@property(nonatomic) _Bool hasDeviceId;
@property(readonly, nonatomic) _Bool hasContents;

@end

