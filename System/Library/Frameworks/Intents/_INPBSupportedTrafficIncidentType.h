//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

#import <Intents/NSCopying-Protocol.h>
#import <Intents/NSSecureCoding-Protocol.h>
#import <Intents/_INPBSupportedTrafficIncidentType-Protocol.h>

@class NSString, _INPBString;

@interface _INPBSupportedTrafficIncidentType : PBCodable <_INPBSupportedTrafficIncidentType, NSSecureCoding, NSCopying>
{
    CDStruct_f953fb60 _has;	// 8 = 0x8
    int _type;	// 12 = 0xc
    _INPBString *_localizedDisplayString;	// 16 = 0x10
}

+ (_Bool)supportsSecureCoding;	// IMP=0x00000000004c0773
- (void).cxx_destruct;	// IMP=0x00000000004c0519
@property(nonatomic) int type; // @synthesize type=_type;
@property(retain, nonatomic) _INPBString *localizedDisplayString; // @synthesize localizedDisplayString=_localizedDisplayString;
- (id)dictionaryRepresentation;	// IMP=0x00000000004c0388
@property(readonly) unsigned long long hash;
- (_Bool)isEqual:(id)arg1;	// IMP=0x00000000004c012e
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x00000000004c0088
- (void)encodeWithCoder:(id)arg1;	// IMP=0x00000000004bfff6
- (id)initWithCoder:(id)arg1;	// IMP=0x00000000004bfef7
- (void)writeTo:(id)arg1;	// IMP=0x00000000004bfe44
- (_Bool)readFrom:(id)arg1;	// IMP=0x00000000004bfe37
- (int)StringAsType:(id)arg1;	// IMP=0x00000000004bfd6c
- (id)typeAsString:(int)arg1;	// IMP=0x00000000004bfcdf
@property(nonatomic) _Bool hasType;
@property(readonly, nonatomic) _Bool hasLocalizedDisplayString;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) Class superclass;

@end

