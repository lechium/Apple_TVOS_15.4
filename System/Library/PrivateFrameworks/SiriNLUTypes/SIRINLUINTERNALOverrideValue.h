//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

#import <SiriNLUTypes/NSCopying-Protocol.h>

@class SIRINLUINTERNALCCQROverrideTemplate;

@interface SIRINLUINTERNALOverrideValue : PBCodable <NSCopying>
{
    SIRINLUINTERNALCCQROverrideTemplate *_ccqrOverrideTemplate;	// 8 = 0x8
}

- (void).cxx_destruct;	// IMP=0x000000000008a54e
@property(retain, nonatomic) SIRINLUINTERNALCCQROverrideTemplate *ccqrOverrideTemplate; // @synthesize ccqrOverrideTemplate=_ccqrOverrideTemplate;
- (void)mergeFrom:(id)arg1;	// IMP=0x000000000008a4cf
- (unsigned long long)hash;	// IMP=0x000000000008a4b2
- (_Bool)isEqual:(id)arg1;	// IMP=0x000000000008a418
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x000000000008a3a0
- (void)copyTo:(id)arg1;	// IMP=0x000000000008a376
- (void)writeTo:(id)arg1;	// IMP=0x000000000008a352
- (_Bool)readFrom:(id)arg1;	// IMP=0x000000000008a345
- (id)dictionaryRepresentation;	// IMP=0x000000000008a101
- (id)description;	// IMP=0x000000000008a052
@property(readonly, nonatomic) _Bool hasCcqrOverrideTemplate;

@end
