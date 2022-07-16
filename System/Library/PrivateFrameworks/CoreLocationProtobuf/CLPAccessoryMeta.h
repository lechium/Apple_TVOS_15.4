//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

#import <CoreLocationProtobuf/NSCopying-Protocol.h>

@class NSString;

@interface CLPAccessoryMeta : PBCodable <NSCopying>
{
    NSString *_make;	// 8 = 0x8
    NSString *_model;	// 16 = 0x10
    NSString *_version;	// 24 = 0x18
}

- (void).cxx_destruct;	// IMP=0x000000000000215c
@property(retain, nonatomic) NSString *version; // @synthesize version=_version;
@property(retain, nonatomic) NSString *model; // @synthesize model=_model;
@property(retain, nonatomic) NSString *make; // @synthesize make=_make;
- (void)mergeFrom:(id)arg1;	// IMP=0x000000000000206a
- (unsigned long long)hash;	// IMP=0x0000000000001ffd
- (_Bool)isEqual:(id)arg1;	// IMP=0x0000000000001f05
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x0000000000001e41
- (void)copyTo:(id)arg1;	// IMP=0x0000000000001dbe
- (void)writeTo:(id)arg1;	// IMP=0x0000000000001d44
- (_Bool)readFrom:(id)arg1;	// IMP=0x0000000000001d37
- (id)dictionaryRepresentation;	// IMP=0x0000000000001b06
- (id)description;	// IMP=0x0000000000001a57
@property(readonly, nonatomic) _Bool hasVersion;
@property(readonly, nonatomic) _Bool hasModel;
@property(readonly, nonatomic) _Bool hasMake;

@end
