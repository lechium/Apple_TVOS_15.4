//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSData;

@interface CDASchemaCDAElectionAdvertisingStartStarted
{
    int _state;	// 8 = 0x8
    float _advertisementInterval;	// 12 = 0xc
    float _advertisementDelay;	// 16 = 0x10
    struct {
        unsigned int state:1;
        unsigned int advertisementInterval:1;
        unsigned int advertisementDelay:1;
    } _has;	// 20 = 0x14
}

@property(nonatomic) float advertisementDelay; // @synthesize advertisementDelay=_advertisementDelay;
@property(nonatomic) float advertisementInterval; // @synthesize advertisementInterval=_advertisementInterval;
@property(nonatomic) int state; // @synthesize state=_state;
- (id)initWithDictionary:(id)arg1;	// IMP=0x0000000000062842
- (id)initWithJSON:(id)arg1;	// IMP=0x0000000000062784
@property(readonly, nonatomic) NSData *jsonData;
- (id)dictionaryRepresentation;	// IMP=0x00000000000624aa
- (unsigned long long)hash;	// IMP=0x000000000006226d
- (_Bool)isEqual:(id)arg1;	// IMP=0x0000000000062125
- (void)writeTo:(id)arg1;	// IMP=0x0000000000062091
- (_Bool)readFrom:(id)arg1;	// IMP=0x0000000000062084
- (void)deleteAdvertisementDelay;	// IMP=0x0000000000062059
@property(nonatomic) _Bool hasAdvertisementDelay;
- (void)deleteAdvertisementInterval;	// IMP=0x0000000000061fe1
@property(nonatomic) _Bool hasAdvertisementInterval;
- (void)deleteState;	// IMP=0x0000000000061f6c
@property(nonatomic) _Bool hasState;
- (id)suppressMessageUnderConditions;	// IMP=0x0000000000312935

@end

