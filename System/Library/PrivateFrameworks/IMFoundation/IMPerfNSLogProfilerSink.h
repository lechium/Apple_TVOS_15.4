//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <IMFoundation/IMPerfProfilerSink-Protocol.h>

@class NSString;

@interface IMPerfNSLogProfilerSink : NSObject <IMPerfProfilerSink>
{
}

+ (id)instance;	// IMP=0x0000000000042728
- (void)perfProfiler:(id)arg1 measurementDidFinish:(struct IMPerfMeasurement_t *)arg2;	// IMP=0x00000000000426d2

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

