//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

#import <SearchFoundation/NSSecureCoding-Protocol.h>
#import <SearchFoundation/_SFPBTextColumn-Protocol.h>

@class NSArray, NSData, NSString;

@interface _SFPBTextColumn : PBCodable <_SFPBTextColumn, NSSecureCoding>
{
    NSArray *_sections;	// 8 = 0x8
}

- (void).cxx_destruct;	// IMP=0x000000000011d325
@property(copy, nonatomic) NSArray *sections; // @synthesize sections=_sections;
- (id)initWithDictionary:(id)arg1;	// IMP=0x000000000011d0a8
- (id)initWithJSON:(id)arg1;	// IMP=0x000000000011cfea
@property(readonly, nonatomic) NSData *jsonData;
- (id)dictionaryRepresentation;	// IMP=0x000000000011ccf4
@property(readonly) unsigned long long hash;
- (_Bool)isEqual:(id)arg1;	// IMP=0x000000000011cb55
- (void)writeTo:(id)arg1;	// IMP=0x000000000011ca21
- (_Bool)readFrom:(id)arg1;	// IMP=0x000000000011ca14
- (id)sectionsAtIndex:(unsigned long long)arg1;	// IMP=0x000000000011c9f7
- (unsigned long long)sectionsCount;	// IMP=0x000000000011c9da
- (void)addSections:(id)arg1;	// IMP=0x000000000011c960
- (void)clearSections;	// IMP=0x000000000011c943
- (id)initWithFacade:(id)arg1;	// IMP=0x0000000000052c0f

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) Class superclass;

@end
