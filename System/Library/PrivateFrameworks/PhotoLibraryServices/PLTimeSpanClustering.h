//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@interface PLTimeSpanClustering
{
    unsigned long long _averageNumberOfObjects;	// 8 = 0x8
    double _minimumSpan;	// 16 = 0x10
}

@property(nonatomic) double minimumSpan; // @synthesize minimumSpan=_minimumSpan;
@property(nonatomic) unsigned long long averageNumberOfObjects; // @synthesize averageNumberOfObjects=_averageNumberOfObjects;
- (id)performWithDataset:(id)arg1 progressBlock:(CDUnknownBlockType)arg2;	// IMP=0x000000000023a9ab
- (unsigned long long)_findNearestIndexMatchingTimeSpan:(unsigned long long)arg1 inDataset:(id)arg2;	// IMP=0x000000000023a554
- (id)init;	// IMP=0x000000000023a4fc

@end

