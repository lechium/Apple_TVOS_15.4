//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSArray;

@interface PKPassUpgradeExpressAutomaticSelectionCriteriaRequest
{
    NSArray *_technologyTypes;	// 48 = 0x30
}

+ (_Bool)supportsSecureCoding;	// IMP=0x0000000000272372
- (void).cxx_destruct;	// IMP=0x00000000002724fa
@property(readonly, nonatomic) NSArray *technologyTypes; // @synthesize technologyTypes=_technologyTypes;
- (void)encodeWithCoder:(id)arg1;	// IMP=0x000000000027246c
- (id)initWithCoder:(id)arg1;	// IMP=0x000000000027237a
- (id)asDictionary;	// IMP=0x00000000002722b2
- (id)initWithDictionary:(id)arg1;	// IMP=0x00000000002720a0

@end
