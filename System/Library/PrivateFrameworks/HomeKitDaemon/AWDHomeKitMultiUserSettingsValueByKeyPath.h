//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

#import <HomeKitDaemon/NSCopying-Protocol.h>

@class NSData, NSString;

@interface AWDHomeKitMultiUserSettingsValueByKeyPath : PBCodable <NSCopying>
{
    long long _homeKitMultiUserSettingsValueInteger;	// 8 = 0x8
    NSData *_homeKitMultiUserSettingsValueData;	// 16 = 0x10
    NSString *_homeKitMultiUserSettingsValueString;	// 24 = 0x18
    int _type;	// 32 = 0x20
    struct {
        unsigned int homeKitMultiUserSettingsValueInteger:1;
        unsigned int type:1;
    } _has;	// 36 = 0x24
}

- (void).cxx_destruct;	// IMP=0x0000000000012a12
@property(retain, nonatomic) NSData *homeKitMultiUserSettingsValueData; // @synthesize homeKitMultiUserSettingsValueData=_homeKitMultiUserSettingsValueData;
@property(nonatomic) long long homeKitMultiUserSettingsValueInteger; // @synthesize homeKitMultiUserSettingsValueInteger=_homeKitMultiUserSettingsValueInteger;
@property(retain, nonatomic) NSString *homeKitMultiUserSettingsValueString; // @synthesize homeKitMultiUserSettingsValueString=_homeKitMultiUserSettingsValueString;
- (void)mergeFrom:(id)arg1;	// IMP=0x000000000001290f
- (unsigned long long)hash;	// IMP=0x0000000000012873
- (_Bool)isEqual:(id)arg1;	// IMP=0x000000000001274d
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x000000000001266f
- (void)copyTo:(id)arg1;	// IMP=0x00000000000125c7
- (void)writeTo:(id)arg1;	// IMP=0x000000000001251d
- (_Bool)readFrom:(id)arg1;	// IMP=0x0000000000012510
- (id)dictionaryRepresentation;	// IMP=0x000000000001232b
- (id)description;	// IMP=0x000000000001227c
@property(readonly, nonatomic) _Bool hasHomeKitMultiUserSettingsValueData;
@property(nonatomic) _Bool hasHomeKitMultiUserSettingsValueInteger;
@property(readonly, nonatomic) _Bool hasHomeKitMultiUserSettingsValueString;
- (int)StringAsType:(id)arg1;	// IMP=0x000000000001208c
- (id)typeAsString:(int)arg1;	// IMP=0x0000000000011fbb
@property(nonatomic) _Bool hasType;
@property(nonatomic) int type; // @synthesize type=_type;

@end

