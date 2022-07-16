//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class HMCameraClip, NSDate;

@interface HFCameraAnalyticsEvent : NSObject
{
    NSDate *_startDate;	// 8 = 0x8
    HMCameraClip *_cameraClip;	// 16 = 0x10
}

+ (id)errorCodeForError:(id)arg1;	// IMP=0x000000000024d18e
- (void).cxx_destruct;	// IMP=0x000000000024d20e
@property(nonatomic) __weak HMCameraClip *cameraClip; // @synthesize cameraClip=_cameraClip;
@property(readonly, nonatomic) NSDate *startDate; // @synthesize startDate=_startDate;
- (id)sendEventForState:(unsigned long long)arg1;	// IMP=0x000000000024d09f
- (id)initWithCameraClip:(id)arg1;	// IMP=0x000000000024d051
- (id)init;	// IMP=0x000000000024cfeb

@end

