//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class CHStrokeClutterFilter, NSArray;

@interface CHFastStrokeGroupingStrategy
{
    NSArray *_locales;	// 8 = 0x8
    CHStrokeClutterFilter *_clutterFilter;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x000000000015e6f0
- (id)_strokeIdentifiersForContextStrokes:(id)arg1 clusters:(void *)arg2 clusteredStrokes:(id)arg3 tokenizationLevel:(long long)arg4 fastGroupingResult:(id)arg5;	// IMP=0x000000000015e110
- (id)groupingResultForContextStrokes:(id)arg1 clusteredStrokes:(id)arg2 fastGroupingResult:(id)arg3 point:(struct CGPoint)arg4 tokenizationLevel:(long long)arg5;	// IMP=0x000000000015dd40
- (void)_filterClusters:(void *)arg1 usingContextStrokes:(id)arg2 clusteredStrokes:(id)arg3;	// IMP=0x000000000015d8b0
- (vector_4ea6921b)clustersForStrokes:(id)arg1 shouldMakeSingleCluster:(_Bool)arg2;	// IMP=0x000000000015d2d0
- (vector_4ea6921b)_wordClustersForInitialClusters:(void *)arg1;	// IMP=0x000000000015cf60
- (id)groupingResultUsingStrokes:(id)arg1 distanceMetric:(int)arg2 mergingDistanceThreshold:(double)arg3 shouldCancel:(CDUnknownBlockType)arg4;	// IMP=0x000000000015cb80
- (id)fastGroupingResultWithFastGroupingClusters:(void *)arg1 clusteredStrokes:(id)arg2;	// IMP=0x000000000015ca80
- (id)lineGroupingResultUsingStrokes:(id)arg1 shouldCancel:(CDUnknownBlockType)arg2;	// IMP=0x000000000015ca40
- (vector_4ea6921b)_agglomerativeClusteringUsingInitialClusters:(void *)arg1 distanceMetric:(int)arg2 maxDistanceThreshold:(float)arg3 shouldCancel:(CDUnknownBlockType)arg4;	// IMP=0x000000000015c790
- (float)_maxDistanceThresholdForTokenizationLevel:(long long)arg1;	// IMP=0x000000000015c770
- (id)strategyIdentifier;	// IMP=0x000000000015c760
- (id)initWithStrokeProvider:(id)arg1 locales:(id)arg2 clutterFilter:(id)arg3;	// IMP=0x000000000015c690

@end

