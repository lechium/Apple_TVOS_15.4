//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSMutableDictionary;

@interface PHAssetAnalysisStateProperties
{
    NSMutableDictionary *_fetchDictionariesByWorkerType;	// 16 = 0x10
}

+ (id)propertiesToFetch;	// IMP=0x00000000000e55b2
+ (_Bool)isToMany;	// IMP=0x00000000000e55aa
+ (id)keyPathToPrimaryObject;	// IMP=0x00000000000e55a2
+ (id)keyPathFromPrimaryObject;	// IMP=0x00000000000e559a
+ (id)entityName;	// IMP=0x00000000000e558d
+ (id)propertySetName;	// IMP=0x00000000000e5580
- (void).cxx_destruct;	// IMP=0x00000000000e556d
@property(readonly, nonatomic) NSMutableDictionary *fetchDictionariesByWorkerType; // @synthesize fetchDictionariesByWorkerType=_fetchDictionariesByWorkerType;
- (int)analysisStateForWorkerType:(short)arg1 outLastIgnoreDate:(id *)arg2 outIgnoreUntilDate:(id *)arg3;	// IMP=0x00000000000e5440
- (id)initWithFetchDictionary:(id)arg1 asset:(id)arg2 prefetched:(_Bool)arg3;	// IMP=0x00000000000e51c8

@end
