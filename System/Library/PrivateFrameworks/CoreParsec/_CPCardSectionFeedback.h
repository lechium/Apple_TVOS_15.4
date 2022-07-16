//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

#import <CoreParsec/NSSecureCoding-Protocol.h>
#import <CoreParsec/_CPCardSectionFeedback-Protocol.h>
#import <CoreParsec/_CPProcessableFeedback-Protocol.h>

@class NSData, NSString, _CPCardSectionForFeedback;

@interface _CPCardSectionFeedback : PBCodable <_CPProcessableFeedback, _CPCardSectionFeedback, NSSecureCoding>
{
    unsigned long long _timestamp;	// 8 = 0x8
    _CPCardSectionForFeedback *_cardSection;	// 16 = 0x10
    NSString *_cardSectionId;	// 24 = 0x18
    NSString *_resultId;	// 32 = 0x20
}

- (void).cxx_destruct;	// IMP=0x000000000003fc9d
@property(copy, nonatomic) NSString *resultId; // @synthesize resultId=_resultId;
@property(copy, nonatomic) NSString *cardSectionId; // @synthesize cardSectionId=_cardSectionId;
@property(retain, nonatomic) _CPCardSectionForFeedback *cardSection; // @synthesize cardSection=_cardSection;
@property(nonatomic) unsigned long long timestamp;
@property(readonly) unsigned long long hash;
- (_Bool)isEqual:(id)arg1;	// IMP=0x000000000003f7fa
- (void)writeTo:(id)arg1;	// IMP=0x000000000003f6c4
- (_Bool)readFrom:(id)arg1;	// IMP=0x000000000003f6b7
- (id)init;	// IMP=0x000000000003f5c4
- (id)initWithFacade:(id)arg1;	// IMP=0x000000000008a9b4

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly, nonatomic) NSData *jsonData; // @dynamic jsonData;
@property(readonly) Class superclass;

@end

