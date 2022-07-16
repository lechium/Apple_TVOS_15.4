//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class MHSchemaMHDarwinConnectedDeviceWakeEnded, MHSchemaMHDarwinConnectedDeviceWakeFailed, MHSchemaMHDarwinConnectedDeviceWakeStarted, NSData;

@interface MHSchemaMHDarwinConnectedDeviceWakeContext
{
    MHSchemaMHDarwinConnectedDeviceWakeStarted *_startedOrChanged;	// 8 = 0x8
    MHSchemaMHDarwinConnectedDeviceWakeEnded *_ended;	// 16 = 0x10
    MHSchemaMHDarwinConnectedDeviceWakeFailed *_failed;	// 24 = 0x18
    _Bool _hasStartedOrChanged;	// 32 = 0x20
    _Bool _hasEnded;	// 33 = 0x21
    _Bool _hasFailed;	// 34 = 0x22
    unsigned long long _whichContextevent;	// 40 = 0x28
}

- (void).cxx_destruct;	// IMP=0x00000000001f281b
@property(nonatomic) _Bool hasFailed; // @synthesize hasFailed=_hasFailed;
@property(nonatomic) _Bool hasEnded; // @synthesize hasEnded=_hasEnded;
@property(nonatomic) _Bool hasStartedOrChanged; // @synthesize hasStartedOrChanged=_hasStartedOrChanged;
@property(readonly, nonatomic) unsigned long long whichContextevent; // @synthesize whichContextevent=_whichContextevent;
- (id)initWithDictionary:(id)arg1;	// IMP=0x00000000001f259f
- (id)initWithJSON:(id)arg1;	// IMP=0x00000000001f24e1
@property(readonly, nonatomic) NSData *jsonData;
- (id)dictionaryRepresentation;	// IMP=0x00000000001f21fc
- (unsigned long long)hash;	// IMP=0x00000000001f218f
- (_Bool)isEqual:(id)arg1;	// IMP=0x00000000001f1db6
- (void)writeTo:(id)arg1;	// IMP=0x00000000001f1c77
- (_Bool)readFrom:(id)arg1;	// IMP=0x00000000001f16f7
- (void)deleteFailed;	// IMP=0x00000000001f16c4
@property(retain, nonatomic) MHSchemaMHDarwinConnectedDeviceWakeFailed *failed; // @synthesize failed=_failed;
- (void)deleteEnded;	// IMP=0x00000000001f15e6
@property(retain, nonatomic) MHSchemaMHDarwinConnectedDeviceWakeEnded *ended; // @synthesize ended=_ended;
- (void)deleteStartedOrChanged;	// IMP=0x00000000001f14fe
@property(retain, nonatomic) MHSchemaMHDarwinConnectedDeviceWakeStarted *startedOrChanged; // @synthesize startedOrChanged=_startedOrChanged;
- (id)applySensitiveConditionsPolicy:(id)arg1;	// IMP=0x000000000032cc7b
- (id)suppressMessageUnderConditions;	// IMP=0x000000000032cc43

@end

