//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

#import <SearchFoundation/NSSecureCoding-Protocol.h>
#import <SearchFoundation/_SFPBCollectionStyleRow-Protocol.h>

@class NSData, NSString;

@interface _SFPBCollectionStyleRow : PBCodable <_SFPBCollectionStyleRow, NSSecureCoding>
{
    _Bool _drawPlattersIfNecessary;	// 8 = 0x8
}

@property(nonatomic) _Bool drawPlattersIfNecessary; // @synthesize drawPlattersIfNecessary=_drawPlattersIfNecessary;
- (id)initWithDictionary:(id)arg1;	// IMP=0x00000000000d47cf
- (id)initWithJSON:(id)arg1;	// IMP=0x00000000000d4711
@property(readonly, nonatomic) NSData *jsonData;
- (id)dictionaryRepresentation;	// IMP=0x00000000000d45f5
@property(readonly) unsigned long long hash;
- (_Bool)isEqual:(id)arg1;	// IMP=0x00000000000d456c
- (void)writeTo:(id)arg1;	// IMP=0x00000000000d4523
- (_Bool)readFrom:(id)arg1;	// IMP=0x00000000000d4516
- (id)initWithFacade:(id)arg1;	// IMP=0x0000000000186bce

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) Class superclass;

@end

