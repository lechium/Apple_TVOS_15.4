//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <TrialServer/NSCopying-Protocol.h>

@class NSArray, NSDate;

@interface TRITaskRunResult : NSObject <NSCopying>
{
    _Bool _reportResultToServer;	// 8 = 0x8
    int _runStatus;	// 12 = 0xc
    NSArray *_nextTasks;	// 16 = 0x10
    NSDate *_earliestRetryDate;	// 24 = 0x18
}

+ (id)resultWithRunStatus:(int)arg1 reportResultToServer:(_Bool)arg2 nextTasks:(id)arg3 earliestRetryDate:(id)arg4;	// IMP=0x0000000000006032
- (void).cxx_destruct;	// IMP=0x0000000000006513
@property(readonly, nonatomic) NSDate *earliestRetryDate; // @synthesize earliestRetryDate=_earliestRetryDate;
@property(readonly, nonatomic) NSArray *nextTasks; // @synthesize nextTasks=_nextTasks;
@property(readonly, nonatomic) _Bool reportResultToServer; // @synthesize reportResultToServer=_reportResultToServer;
@property(readonly, nonatomic) int runStatus; // @synthesize runStatus=_runStatus;
- (id)init;	// IMP=0x00000000000064e7
- (id)description;	// IMP=0x000000000000642d
- (unsigned long long)hash;	// IMP=0x00000000000063c5
- (_Bool)isEqual:(id)arg1;	// IMP=0x000000000000635d
- (_Bool)isEqualToResult:(id)arg1;	// IMP=0x00000000000061e7
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x00000000000061dc
- (id)copyWithReplacementEarliestRetryDate:(id)arg1;	// IMP=0x0000000000006184
- (id)copyWithReplacementNextTasks:(id)arg1;	// IMP=0x000000000000612c
- (id)copyWithReplacementReportResultToServer:(_Bool)arg1;	// IMP=0x00000000000060f0
- (id)copyWithReplacementRunStatus:(int)arg1;	// IMP=0x00000000000060b3
- (id)initWithRunStatus:(int)arg1 reportResultToServer:(_Bool)arg2 nextTasks:(id)arg3 earliestRetryDate:(id)arg4;	// IMP=0x0000000000005f12

@end

