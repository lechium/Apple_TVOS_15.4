//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class CDASchemaCDAElectionAdvertisingEndEnded, CDASchemaCDAElectionAdvertisingEndStarted, NSData;

@interface CDASchemaCDADeviceAdvertisingEndContext
{
    CDASchemaCDAElectionAdvertisingEndStarted *_startedOrChanged;	// 8 = 0x8
    CDASchemaCDAElectionAdvertisingEndEnded *_ended;	// 16 = 0x10
    _Bool _hasStartedOrChanged;	// 24 = 0x18
    _Bool _hasEnded;	// 25 = 0x19
    unsigned long long _whichContextevent;	// 32 = 0x20
}

- (void).cxx_destruct;	// IMP=0x000000000005e4ec
@property(nonatomic) _Bool hasEnded; // @synthesize hasEnded=_hasEnded;
@property(nonatomic) _Bool hasStartedOrChanged; // @synthesize hasStartedOrChanged=_hasStartedOrChanged;
@property(readonly, nonatomic) unsigned long long whichContextevent; // @synthesize whichContextevent=_whichContextevent;
- (id)initWithDictionary:(id)arg1;	// IMP=0x000000000005e311
- (id)initWithJSON:(id)arg1;	// IMP=0x000000000005e253
@property(readonly, nonatomic) NSData *jsonData;
- (id)dictionaryRepresentation;	// IMP=0x000000000005e01e
- (unsigned long long)hash;	// IMP=0x000000000005dfd1
- (_Bool)isEqual:(id)arg1;	// IMP=0x000000000005dd0f
- (void)writeTo:(id)arg1;	// IMP=0x000000000005dc2c
- (_Bool)readFrom:(id)arg1;	// IMP=0x000000000005d889
- (void)deleteEnded;	// IMP=0x000000000005d856
@property(retain, nonatomic) CDASchemaCDAElectionAdvertisingEndEnded *ended; // @synthesize ended=_ended;
- (void)deleteStartedOrChanged;	// IMP=0x000000000005d78a
@property(retain, nonatomic) CDASchemaCDAElectionAdvertisingEndStarted *startedOrChanged; // @synthesize startedOrChanged=_startedOrChanged;
- (id)applySensitiveConditionsPolicy:(id)arg1;	// IMP=0x00000000003123a2
- (id)suppressMessageUnderConditions;	// IMP=0x000000000031236a

@end

