//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

#import <SearchFoundation/NSSecureCoding-Protocol.h>
#import <SearchFoundation/_SFPBProductAvailability-Protocol.h>

@class NSArray, NSData, NSString;

@interface _SFPBProductAvailability : PBCodable <_SFPBProductAvailability, NSSecureCoding>
{
    NSArray *_results;	// 8 = 0x8
}

- (void).cxx_destruct;	// IMP=0x000000000017be90
@property(copy, nonatomic) NSArray *results; // @synthesize results=_results;
- (id)initWithDictionary:(id)arg1;	// IMP=0x000000000017bc13
- (id)initWithJSON:(id)arg1;	// IMP=0x000000000017bb55
@property(readonly, nonatomic) NSData *jsonData;
- (id)dictionaryRepresentation;	// IMP=0x000000000017b85f
@property(readonly) unsigned long long hash;
- (_Bool)isEqual:(id)arg1;	// IMP=0x000000000017b6c0
- (void)writeTo:(id)arg1;	// IMP=0x000000000017b58c
- (_Bool)readFrom:(id)arg1;	// IMP=0x000000000017b57f
- (id)resultsAtIndex:(unsigned long long)arg1;	// IMP=0x000000000017b562
- (unsigned long long)resultsCount;	// IMP=0x000000000017b545
- (void)addResults:(id)arg1;	// IMP=0x000000000017b4cb
- (void)clearResults;	// IMP=0x000000000017b4ae
- (id)initWithFacade:(id)arg1;	// IMP=0x00000000001e4b1c

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) Class superclass;

@end
