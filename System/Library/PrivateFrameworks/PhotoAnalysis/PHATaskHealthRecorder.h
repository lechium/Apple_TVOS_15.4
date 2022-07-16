//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class CPAnalytics, NSString;
@protocol OS_os_log;

@interface PHATaskHealthRecorder : NSObject
{
    NSObject<OS_os_log> *_loggingConnection;	// 8 = 0x8
    CPAnalytics *_analytics;	// 16 = 0x10
    NSString *_taskName;	// 24 = 0x18
}

- (void).cxx_destruct;	// IMP=0x00000000000cf8b9
@property(readonly, nonatomic) NSString *taskName; // @synthesize taskName=_taskName;
- (void)recordTaskCompletionWithTaskCompletionState:(unsigned long long)arg1 taskDuration:(id)arg2 taskProgress:(id)arg3 lastRunDate:(id)arg4;	// IMP=0x00000000000cf54e
- (id)initWithTaskName:(id)arg1 loggingConnection:(id)arg2 analytics:(id)arg3;	// IMP=0x00000000000cf497

@end
