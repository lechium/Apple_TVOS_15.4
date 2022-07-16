//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@interface SiriCoreLinkRecommendationInfo : NSObject
{
    _Bool _btPreference;	// 8 = 0x8
    _Bool _wifiPreference;	// 9 = 0x9
    double _timeTaken;	// 16 = 0x10
}

- (void)fetchLinkMetrics:(CDUnknownBlockType)arg1;	// IMP=0x0000000000035697
- (void)resetLinkMetrics;	// IMP=0x0000000000035683
- (id)linkMetrics;	// IMP=0x000000000003567b
- (void)setLinkMetrics:(id)arg1;	// IMP=0x0000000000035675
- (void)setTimeTaken:(double)arg1;	// IMP=0x000000000003566a
- (double)timeTaken;	// IMP=0x000000000003565f
- (void)setWiFiPreference:(_Bool)arg1;	// IMP=0x0000000000035656
- (_Bool)wifiPreference;	// IMP=0x000000000003564d
- (void)setBTPreference:(_Bool)arg1;	// IMP=0x0000000000035644
- (_Bool)btPreference;	// IMP=0x000000000003563b
- (id)initWithQueue:(id)arg1;	// IMP=0x00000000000355f9
- (id)initWithPreferences:(_Bool)arg1 wifiPreference:(_Bool)arg2 timeTaken:(double)arg3 metrics:(id)arg4;	// IMP=0x00000000000355a4

@end

