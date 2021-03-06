//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

#import <SearchFoundation/NSSecureCoding-Protocol.h>
#import <SearchFoundation/_SFPBCollectionStyleGrid-Protocol.h>

@class NSData, NSString;

@interface _SFPBCollectionStyleGrid : PBCodable <_SFPBCollectionStyleGrid, NSSecureCoding>
{
    unsigned long long _numberOfColumns;	// 8 = 0x8
}

@property(nonatomic) unsigned long long numberOfColumns; // @synthesize numberOfColumns=_numberOfColumns;
- (id)initWithDictionary:(id)arg1;	// IMP=0x00000000000d441b
- (id)initWithJSON:(id)arg1;	// IMP=0x00000000000d435d
@property(readonly, nonatomic) NSData *jsonData;
- (id)dictionaryRepresentation;	// IMP=0x00000000000d4240
@property(readonly) unsigned long long hash;
- (_Bool)isEqual:(id)arg1;	// IMP=0x00000000000d41bc
- (void)writeTo:(id)arg1;	// IMP=0x00000000000d4174
- (_Bool)readFrom:(id)arg1;	// IMP=0x00000000000d4167
- (id)initWithFacade:(id)arg1;	// IMP=0x0000000000198bc5

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) Class superclass;

@end

