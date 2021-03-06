//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class CDASchemaCDADeviceStateActivityEnded, CDASchemaCDADeviceStateActivityStarted, NSData;

@interface CDASchemaCDADeviceStateContext
{
    CDASchemaCDADeviceStateActivityStarted *_startedOrChanged;	// 8 = 0x8
    CDASchemaCDADeviceStateActivityEnded *_ended;	// 16 = 0x10
    _Bool _hasStartedOrChanged;	// 24 = 0x18
    _Bool _hasEnded;	// 25 = 0x19
    unsigned long long _whichContextevent;	// 32 = 0x20
}

- (void).cxx_destruct;	// IMP=0x0000000000060f65
@property(nonatomic) _Bool hasEnded; // @synthesize hasEnded=_hasEnded;
@property(nonatomic) _Bool hasStartedOrChanged; // @synthesize hasStartedOrChanged=_hasStartedOrChanged;
@property(readonly, nonatomic) unsigned long long whichContextevent; // @synthesize whichContextevent=_whichContextevent;
- (id)initWithDictionary:(id)arg1;	// IMP=0x0000000000060d8a
- (id)initWithJSON:(id)arg1;	// IMP=0x0000000000060ccc
@property(readonly, nonatomic) NSData *jsonData;
- (id)dictionaryRepresentation;	// IMP=0x0000000000060a97
- (unsigned long long)hash;	// IMP=0x0000000000060a4a
- (_Bool)isEqual:(id)arg1;	// IMP=0x0000000000060788
- (void)writeTo:(id)arg1;	// IMP=0x00000000000606a5
- (_Bool)readFrom:(id)arg1;	// IMP=0x0000000000060698
- (void)deleteEnded;	// IMP=0x0000000000060665
@property(retain, nonatomic) CDASchemaCDADeviceStateActivityEnded *ended; // @synthesize ended=_ended;
- (void)deleteStartedOrChanged;	// IMP=0x0000000000060599
@property(retain, nonatomic) CDASchemaCDADeviceStateActivityStarted *startedOrChanged; // @synthesize startedOrChanged=_startedOrChanged;
- (id)applySensitiveConditionsPolicy:(id)arg1;	// IMP=0x0000000000312734
- (id)suppressMessageUnderConditions;	// IMP=0x00000000003126fc

@end

