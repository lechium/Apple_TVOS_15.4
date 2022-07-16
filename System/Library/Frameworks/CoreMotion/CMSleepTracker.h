//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class CMSpringTrackerInternal;

@interface CMSleepTracker : NSObject
{
    CMSpringTrackerInternal *_internal;	// 8 = 0x8
}

+ (_Bool)isAvailable;	// IMP=0x0000000000108ea5
@property(readonly, nonatomic) CMSpringTrackerInternal *_internal; // @synthesize _internal;
- (void)querySleepDataFromRecord:(id)arg1 handler:(CDUnknownBlockType)arg2;	// IMP=0x00000000001090e2
- (void)stopWithHandler:(CDUnknownBlockType)arg1;	// IMP=0x0000000000108fe4
- (void)startWithHandler:(CDUnknownBlockType)arg1;	// IMP=0x0000000000108ee6
- (_Bool)isTracking;	// IMP=0x0000000000108ebb
- (void)dealloc;	// IMP=0x0000000000108e13
- (id)init;	// IMP=0x0000000000108dc7

@end

