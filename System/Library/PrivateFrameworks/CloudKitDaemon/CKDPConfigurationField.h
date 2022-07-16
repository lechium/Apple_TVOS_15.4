//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

#import <CloudKitDaemon/NSCopying-Protocol.h>

@class CKDPConfigurationFieldValue, NSString;

@interface CKDPConfigurationField : PBCodable <NSCopying>
{
    NSString *_name;	// 8 = 0x8
    CKDPConfigurationFieldValue *_value;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x00000000000bb067
@property(retain, nonatomic) CKDPConfigurationFieldValue *value; // @synthesize value=_value;
@property(retain, nonatomic) NSString *name; // @synthesize name=_name;
- (void)mergeFrom:(id)arg1;	// IMP=0x00000000000bafa3
- (unsigned long long)hash;	// IMP=0x00000000000baf56
- (_Bool)isEqual:(id)arg1;	// IMP=0x00000000000bae8e
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x00000000000badf0
- (void)copyTo:(id)arg1;	// IMP=0x00000000000bad8d
- (void)writeTo:(id)arg1;	// IMP=0x00000000000bad30
- (_Bool)readFrom:(id)arg1;	// IMP=0x00000000000bad23
- (id)dictionaryRepresentation;	// IMP=0x00000000000baa8b
- (id)description;	// IMP=0x00000000000ba9dc
@property(readonly, nonatomic) _Bool hasValue;
@property(readonly, nonatomic) _Bool hasName;

@end

