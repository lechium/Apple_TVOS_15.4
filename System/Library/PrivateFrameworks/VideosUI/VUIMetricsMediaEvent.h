//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@interface VUIMetricsMediaEvent : NSObject
{
}

+ (id)_metricsDataFromTVPMediaItem:(id)arg1 isBackground:(_Bool)arg2 isAmbient:(_Bool)arg3;	// IMP=0x00000000000466d7
+ (id)generateSkipImpressionsFromSkipInfo:(id)arg1;	// IMP=0x00000000000464f9
+ (void)recordImpressionsOfSkipButton:(id)arg1 onMediaItem:(id)arg2;	// IMP=0x000000000004627d
+ (void)recordClickOfSkipInfo:(id)arg1 onMediaItem:(id)arg2;	// IMP=0x0000000000045f91
+ (id)impressionsMetricsDataFromTVPMediaItem:(id)arg1;	// IMP=0x0000000000045e82
+ (id)clickMetricsDataFromTVPMediaItem:(id)arg1;	// IMP=0x0000000000045c48
+ (void)recordPlayOfTVPMediaItem:(id)arg1;	// IMP=0x0000000000045b16
+ (void)recordBGVideoPlayOfTVPMediaItem:(id)arg1 isAmbient:(_Bool)arg2;	// IMP=0x00000000000459dc
+ (void)recordPunchout:(id)arg1 isUrlForPlay:(_Bool)arg2;	// IMP=0x00000000000454b7
+ (void)recordPlay:(id)arg1 isLaunchingExtras:(_Bool)arg2;	// IMP=0x0000000000044fcd

@end

