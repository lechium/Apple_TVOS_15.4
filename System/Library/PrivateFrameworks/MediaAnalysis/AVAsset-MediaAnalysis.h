//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <AVFoundation/AVAsset.h>

@interface AVAsset (MediaAnalysis)
- (CDStruct_1b6d18a9)vcp_livePhotoStillDisplayTime;	// IMP=0x00000000000063ed
- (_Bool)vcp_isMontage;	// IMP=0x0000000000006180
- (_Bool)vcp_isShortMovie;	// IMP=0x0000000000006134
- (id)vcp_enabledTracksWithMediaType:(id)arg1;	// IMP=0x0000000000005f2f
- (id)vcp_firstEnabledTrackWithMediaType:(id)arg1;	// IMP=0x0000000000005dc1
- (id)vcp_assetWithoutAdjustments:(id)arg1 duration:(double)arg2;	// IMP=0x000000000000a470
- (void)vcp_scaleRampWithIntervals:(id)arg1 andRates:(id)arg2 inSlowmoTimerange:(CDStruct_e83c9415)arg3 withTimeMapping:(id)arg4 inComposition:(id)arg5;	// IMP=0x000000000000a0a6
- (void)vcp_scaleSlowmoTimeRange:(CDStruct_e83c9415)arg1 withTimeMapping:(id)arg2 inComposition:(id)arg3;	// IMP=0x0000000000009f82
@end

