//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSDictionary;

@interface CHMergedStrokeGroupingResults
{
    NSDictionary *_groupingResultsByStrategyIdentifier;	// 8 = 0x8
}

+ (_Bool)supportsSecureCoding;	// IMP=0x0000000000077d70
- (void).cxx_destruct;	// IMP=0x0000000000077da0
@property(readonly, nonatomic) NSDictionary *groupingResultsByStrategyIdentifier; // @synthesize groupingResultsByStrategyIdentifier=_groupingResultsByStrategyIdentifier;
- (id)initWithCoder:(id)arg1;	// IMP=0x0000000000077b00
- (void)encodeWithCoder:(id)arg1;	// IMP=0x0000000000077a50
- (id)initWithStrokeGroups:(id)arg1 createdStrokeGroups:(id)arg2 deletedStrokeGroups:(id)arg3 groupingResultsByStrategyIdentifier:(id)arg4;	// IMP=0x00000000000779b0

@end

