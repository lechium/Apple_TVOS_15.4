//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@interface CMStrideCalibrationElevationBuffer : NSObject
{
    struct deque<CLElevationChangeEntry, std::allocator<CLElevationChangeEntry>> fElevationWindow;	// 8 = 0x8
}

- (id).cxx_construct;	// IMP=0x0020000000865aa1
- (void).cxx_destruct;	// IMP=0x0010000000865a93
- (void)updateGradient:(id)arg1;	// IMP=0x00100000008655e3
- (void)feedElevationData:(const union NotificationData *)arg1;	// IMP=0x00100000008653c1
- (void)ageOutElevationArray;	// IMP=0x001000000086533e

@end

