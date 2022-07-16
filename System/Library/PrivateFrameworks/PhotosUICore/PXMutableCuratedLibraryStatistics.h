//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@interface PXMutableCuratedLibraryStatistics
{
    long long *_counts;	// 8 = 0x8
}

- (void)appendStatisticsForSection:(long long)arg1 assetsDataSource:(id)arg2 playbackController:(id)arg3 visibleItems:(id)arg4 heroItems:(id)arg5 keyItem:(long long)arg6;	// IMP=0x00000000006f4c5b
- (long long)_coutIndexForPlaybackStyle:(long long)arg1 displayProminence:(long long)arg2 autoPlaybackEligibility:(long long)arg3;	// IMP=0x00000000006f4c46
- (void)_incrementCountForPlaybackStyle:(long long)arg1 displayProminence:(long long)arg2 autoPlaybackEligibility:(long long)arg3;	// IMP=0x00000000006f4c1d
- (long long)numberOfAssetsWithPlaybackStyle:(long long)arg1 displayProminence:(long long)arg2 autoPlaybackEligibility:(long long)arg3;	// IMP=0x00000000006f4bf4
- (void)dealloc;	// IMP=0x00000000006f4bb3
- (id)init;	// IMP=0x00000000006f4b5d

@end

