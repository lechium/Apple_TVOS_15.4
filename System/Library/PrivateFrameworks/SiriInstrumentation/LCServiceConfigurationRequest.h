//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSData;

@interface LCServiceConfigurationRequest
{
}

- (id)initWithDictionary:(id)arg1;	// IMP=0x00000000000e4b30
- (id)initWithJSON:(id)arg1;	// IMP=0x00000000000e4a72
@property(readonly, nonatomic) NSData *jsonData;
- (id)dictionaryRepresentation;	// IMP=0x00000000000e49a4
- (unsigned long long)hash;	// IMP=0x00000000000e499c
- (_Bool)isEqual:(id)arg1;	// IMP=0x00000000000e4957
- (void)writeTo:(id)arg1;	// IMP=0x00000000000e4951
- (_Bool)readFrom:(id)arg1;	// IMP=0x00000000000e483f
- (id)suppressMessageUnderConditions;	// IMP=0x000000000031c109

@end

