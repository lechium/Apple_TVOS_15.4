//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSMutableArray;

@interface FigMetalExecutionStatus : NSObject
{
    int _completedCommandBuffersCount;	// 8 = 0x8
    NSMutableArray *_failedCommandBuffers;	// 16 = 0x10
    unsigned long long _status;	// 24 = 0x18
}

- (void).cxx_destruct;	// IMP=0x0000000000003ec4
@property(nonatomic) int completedCommandBuffersCount; // @synthesize completedCommandBuffersCount=_completedCommandBuffersCount;
@property(nonatomic) unsigned long long status; // @synthesize status=_status;
@property(retain, nonatomic) NSMutableArray *failedCommandBuffers; // @synthesize failedCommandBuffers=_failedCommandBuffers;
- (id)init;	// IMP=0x0000000000003ddb

@end

