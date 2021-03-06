//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <PhotoAnalysis/PHATask-Protocol.h>

@class NSString;

@interface PHAMetricReportingTask : NSObject <PHATask>
{
}

- (_Bool)runWithGraphManager:(id)arg1 progressReporter:(id)arg2 error:(id *)arg3;	// IMP=0x00000000000a6adc
- (_Bool)shouldRunWithGraphManager:(id)arg1;	// IMP=0x00000000000a6ad4
@property(readonly, nonatomic) double period;
@property(readonly, nonatomic) NSString *name;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

