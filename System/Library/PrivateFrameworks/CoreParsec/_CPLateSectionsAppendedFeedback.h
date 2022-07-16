//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

#import <CoreParsec/NSSecureCoding-Protocol.h>
#import <CoreParsec/_CPLateSectionsAppendedFeedback-Protocol.h>
#import <CoreParsec/_CPProcessableFeedback-Protocol.h>

@class NSArray, NSData, NSString;

@interface _CPLateSectionsAppendedFeedback : PBCodable <_CPProcessableFeedback, _CPLateSectionsAppendedFeedback, NSSecureCoding>
{
    unsigned long long _timestamp;	// 8 = 0x8
    NSArray *_sections;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x0000000000069914
@property(copy, nonatomic) NSArray *sections; // @synthesize sections=_sections;
@property(nonatomic) unsigned long long timestamp;
@property(readonly) unsigned long long hash;
- (_Bool)isEqual:(id)arg1;	// IMP=0x0000000000069713
- (void)writeTo:(id)arg1;	// IMP=0x00000000000695b7
- (_Bool)readFrom:(id)arg1;	// IMP=0x00000000000695aa
- (id)sectionsAtIndex:(unsigned long long)arg1;	// IMP=0x000000000006958d
- (unsigned long long)sectionsCount;	// IMP=0x0000000000069570
- (void)addSections:(id)arg1;	// IMP=0x00000000000694f6
- (void)clearSections;	// IMP=0x00000000000694d9
- (id)init;	// IMP=0x000000000006942e
- (id)initWithFacade:(id)arg1;	// IMP=0x0000000000088098

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly, nonatomic) NSData *jsonData; // @dynamic jsonData;
@property(readonly) Class superclass;

@end

