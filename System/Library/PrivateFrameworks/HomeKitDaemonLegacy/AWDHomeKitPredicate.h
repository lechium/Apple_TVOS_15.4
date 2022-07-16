//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

#import <HomeKitDaemonLegacy/NSCopying-Protocol.h>

@class NSMutableArray;

@interface AWDHomeKitPredicate : PBCodable <NSCopying>
{
    NSMutableArray *_presenceEvents;	// 8 = 0x8
    _Bool _containsCalendarTime;	// 16 = 0x10
    _Bool _containsCharacteristicValue;	// 17 = 0x11
    _Bool _containsSignificantTime;	// 18 = 0x12
    _Bool _containsSignificantTimeOffset;	// 19 = 0x13
    struct {
        unsigned int containsCalendarTime:1;
        unsigned int containsCharacteristicValue:1;
        unsigned int containsSignificantTime:1;
        unsigned int containsSignificantTimeOffset:1;
    } _has;	// 20 = 0x14
}

+ (Class)presenceEventsType;	// IMP=0x000000000082facc
- (void).cxx_destruct;	// IMP=0x000000000082f686
@property(nonatomic) _Bool containsCalendarTime; // @synthesize containsCalendarTime=_containsCalendarTime;
@property(nonatomic) _Bool containsSignificantTimeOffset; // @synthesize containsSignificantTimeOffset=_containsSignificantTimeOffset;
@property(nonatomic) _Bool containsSignificantTime; // @synthesize containsSignificantTime=_containsSignificantTime;
@property(nonatomic) _Bool containsCharacteristicValue; // @synthesize containsCharacteristicValue=_containsCharacteristicValue;
@property(retain, nonatomic) NSMutableArray *presenceEvents; // @synthesize presenceEvents=_presenceEvents;
- (void)mergeFrom:(id)arg1;	// IMP=0x000000000082f43d
- (unsigned long long)hash;	// IMP=0x000000000082f397
- (_Bool)isEqual:(id)arg1;	// IMP=0x000000000082f234
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x000000000082efe0
- (void)copyTo:(id)arg1;	// IMP=0x000000000082eeae
- (void)writeTo:(id)arg1;	// IMP=0x000000000082ece4
- (_Bool)readFrom:(id)arg1;	// IMP=0x000000000082ecd7
- (id)dictionaryRepresentation;	// IMP=0x000000000082e92a
- (id)description;	// IMP=0x000000000082e87b
@property(nonatomic) _Bool hasContainsCalendarTime;
@property(nonatomic) _Bool hasContainsSignificantTimeOffset;
@property(nonatomic) _Bool hasContainsSignificantTime;
@property(nonatomic) _Bool hasContainsCharacteristicValue;
- (id)presenceEventsAtIndex:(unsigned long long)arg1;	// IMP=0x000000000082e73a
- (unsigned long long)presenceEventsCount;	// IMP=0x000000000082e71d
- (void)addPresenceEvents:(id)arg1;	// IMP=0x000000000082e6b3
- (void)clearPresenceEvents;	// IMP=0x000000000082e696

@end

