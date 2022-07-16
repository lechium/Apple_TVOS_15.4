//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

#import <HomeKitDaemonLegacy/NSCopying-Protocol.h>

@class NSMutableArray;

@interface AWDHomeKitCameraConfigurationData : PBCodable <NSCopying>
{
    unsigned long long _timestamp;	// 8 = 0x8
    NSMutableArray *_homeConfigurations;	// 16 = 0x10
    _Bool _isDemoConfiguration;	// 24 = 0x18
    struct {
        unsigned int timestamp:1;
        unsigned int isDemoConfiguration:1;
    } _has;	// 28 = 0x1c
}

+ (Class)homeConfigurationsType;	// IMP=0x0000000000775365
- (void).cxx_destruct;	// IMP=0x0000000000775064
@property(nonatomic) _Bool isDemoConfiguration; // @synthesize isDemoConfiguration=_isDemoConfiguration;
@property(retain, nonatomic) NSMutableArray *homeConfigurations; // @synthesize homeConfigurations=_homeConfigurations;
@property(nonatomic) unsigned long long timestamp; // @synthesize timestamp=_timestamp;
- (void)mergeFrom:(id)arg1;	// IMP=0x0000000000774e8a
- (unsigned long long)hash;	// IMP=0x0000000000774e13
- (_Bool)isEqual:(id)arg1;	// IMP=0x0000000000774d18
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x0000000000774afc
- (void)copyTo:(id)arg1;	// IMP=0x00000000007749f7
- (void)writeTo:(id)arg1;	// IMP=0x000000000077486a
- (_Bool)readFrom:(id)arg1;	// IMP=0x000000000077485d
- (id)dictionaryRepresentation;	// IMP=0x0000000000774565
- (id)description;	// IMP=0x00000000007744b6
@property(nonatomic) _Bool hasIsDemoConfiguration;
- (id)homeConfigurationsAtIndex:(unsigned long long)arg1;	// IMP=0x0000000000774450
- (unsigned long long)homeConfigurationsCount;	// IMP=0x0000000000774433
- (void)addHomeConfigurations:(id)arg1;	// IMP=0x00000000007743c9
- (void)clearHomeConfigurations;	// IMP=0x00000000007743ac
@property(nonatomic) _Bool hasTimestamp;

@end

