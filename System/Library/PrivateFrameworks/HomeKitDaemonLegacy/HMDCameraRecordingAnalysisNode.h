//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <HMFoundation/HMFObject.h>

@class HMDDevice, NSDictionary;

@interface HMDCameraRecordingAnalysisNode : HMFObject
{
    HMDDevice *_device;	// 8 = 0x8
    NSDictionary *_metrics;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x0000000000230543
@property(readonly, copy, nonatomic) NSDictionary *metrics; // @synthesize metrics=_metrics;
@property(readonly, nonatomic) HMDDevice *device; // @synthesize device=_device;
- (id)initWithDevice:(id)arg1 metrics:(id)arg2;	// IMP=0x000000000023046c

@end
