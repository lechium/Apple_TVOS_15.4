//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

#import <GeoServices/NSCopying-Protocol.h>

@class NSMutableArray, NSString, PBDataReader;

@interface GEOLPRRegionInfo : PBCodable <NSCopying>
{
    PBDataReader *_reader;	// 8 = 0x8
    CDStruct_95bda58d _routingRequiredFields;	// 16 = 0x10
    NSString *_licensePlateTemplate;	// 40 = 0x28
    NSMutableArray *_licensePlateValidationRules;	// 48 = 0x30
    NSMutableArray *_validPowerTypeKeys;	// 56 = 0x38
    NSMutableArray *_validVehicleTypeKeys;	// 64 = 0x40
    unsigned int _readerMarkPos;	// 72 = 0x48
    unsigned int _readerMarkLength;	// 76 = 0x4c
    struct os_unfair_lock_s _readerLock;	// 80 = 0x50
    struct {
        unsigned int read_routingRequiredFields:1;
        unsigned int read_licensePlateTemplate:1;
        unsigned int read_licensePlateValidationRules:1;
        unsigned int read_validPowerTypeKeys:1;
        unsigned int read_validVehicleTypeKeys:1;
        unsigned int wrote_anyField:1;
    } _flags;	// 84 = 0x54
}

+ (_Bool)isValid:(id)arg1;	// IMP=0x0000000000fe1149
+ (Class)licensePlateValidationRulesType;	// IMP=0x0000000000fe01a7
+ (Class)validVehicleTypeKeysType;	// IMP=0x0000000000fdfe03
+ (Class)validPowerTypeKeysType;	// IMP=0x0000000000fdfb9e
- (void).cxx_destruct;	// IMP=0x0000000000fe2443
- (void)mergeFrom:(id)arg1;	// IMP=0x0000000000fe2074
- (unsigned long long)hash;	// IMP=0x0000000000fe1fca
- (_Bool)isEqual:(id)arg1;	// IMP=0x0000000000fe1e57
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x0000000000fe18d0
- (void)copyTo:(id)arg1;	// IMP=0x0000000000fe15d9
- (void)writeTo:(id)arg1;	// IMP=0x0000000000fe1165
- (_Bool)readFrom:(id)arg1;	// IMP=0x0000000000fe1156
- (void)readAll:(_Bool)arg1;	// IMP=0x0000000000fe103d
- (id)initWithJSON:(id)arg1;	// IMP=0x0000000000fe102b
- (id)initWithDictionary:(id)arg1;	// IMP=0x0000000000fe0747
- (id)jsonRepresentation;	// IMP=0x0000000000fe0738
- (id)dictionaryRepresentation;	// IMP=0x0000000000fe0267
- (id)description;	// IMP=0x0000000000fe01b8
- (id)licensePlateValidationRulesAtIndex:(unsigned long long)arg1;	// IMP=0x0000000000fe0176
- (unsigned long long)licensePlateValidationRulesCount;	// IMP=0x0000000000fe014a
- (void)addLicensePlateValidationRules:(id)arg1;	// IMP=0x0000000000fe0096
- (void)clearLicensePlateValidationRules;	// IMP=0x0000000000fe006e
@property(retain, nonatomic) NSMutableArray *licensePlateValidationRules;
@property(retain, nonatomic) NSString *licensePlateTemplate;
@property(readonly, nonatomic) _Bool hasLicensePlateTemplate;
- (id)validVehicleTypeKeysAtIndex:(unsigned long long)arg1;	// IMP=0x0000000000fdfdd2
- (unsigned long long)validVehicleTypeKeysCount;	// IMP=0x0000000000fdfda6
- (void)addValidVehicleTypeKeys:(id)arg1;	// IMP=0x0000000000fdfcf2
- (void)clearValidVehicleTypeKeys;	// IMP=0x0000000000fdfcca
@property(retain, nonatomic) NSMutableArray *validVehicleTypeKeys;
- (id)validPowerTypeKeysAtIndex:(unsigned long long)arg1;	// IMP=0x0000000000fdfb6d
- (unsigned long long)validPowerTypeKeysCount;	// IMP=0x0000000000fdfb41
- (void)addValidPowerTypeKeys:(id)arg1;	// IMP=0x0000000000fdfa8d
- (void)clearValidPowerTypeKeys;	// IMP=0x0000000000fdfa65
@property(retain, nonatomic) NSMutableArray *validPowerTypeKeys;
- (int)StringAsRoutingRequiredFields:(id)arg1;	// IMP=0x0000000000fdf8ad
- (id)routingRequiredFieldsAsString:(int)arg1;	// IMP=0x0000000000fdf846
- (void)setRoutingRequiredFields:(int *)arg1 count:(unsigned long long)arg2;	// IMP=0x0000000000fdf824
- (int)routingRequiredFieldsAtIndex:(unsigned long long)arg1;	// IMP=0x0000000000fdf74e
- (void)addRoutingRequiredFields:(int)arg1;	// IMP=0x0000000000fdf715
- (void)clearRoutingRequiredFields;	// IMP=0x0000000000fdf6f9
@property(readonly, nonatomic) int *routingRequiredFields;
@property(readonly, nonatomic) unsigned long long routingRequiredFieldsCount;
- (void)dealloc;	// IMP=0x0000000000fdec7a
- (id)initWithData:(id)arg1;	// IMP=0x0000000000fdec1e
- (id)init;	// IMP=0x0000000000fdebc2

@end
