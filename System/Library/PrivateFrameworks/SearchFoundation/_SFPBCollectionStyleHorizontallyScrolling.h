//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

#import <SearchFoundation/NSSecureCoding-Protocol.h>
#import <SearchFoundation/_SFPBCollectionStyleHorizontallyScrolling-Protocol.h>

@class NSData, NSString;

@interface _SFPBCollectionStyleHorizontallyScrolling : PBCodable <_SFPBCollectionStyleHorizontallyScrolling, NSSecureCoding>
{
    unsigned long long _numberOfRows;	// 8 = 0x8
}

@property(nonatomic) unsigned long long numberOfRows; // @synthesize numberOfRows=_numberOfRows;
- (id)initWithDictionary:(id)arg1;	// IMP=0x00000000000d406b
- (id)initWithJSON:(id)arg1;	// IMP=0x00000000000d3fad
@property(readonly, nonatomic) NSData *jsonData;
- (id)dictionaryRepresentation;	// IMP=0x00000000000d3e90
@property(readonly) unsigned long long hash;
- (_Bool)isEqual:(id)arg1;	// IMP=0x00000000000d3e0c
- (void)writeTo:(id)arg1;	// IMP=0x00000000000d3dc4
- (_Bool)readFrom:(id)arg1;	// IMP=0x00000000000d3db7
- (id)initWithFacade:(id)arg1;	// IMP=0x0000000000180feb

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) Class superclass;

@end

