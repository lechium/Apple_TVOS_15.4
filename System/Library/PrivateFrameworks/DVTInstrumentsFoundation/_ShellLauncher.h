//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSMutableArray;
@protocol OS_dispatch_queue;

@interface _ShellLauncher : NSObject
{
    NSObject<OS_dispatch_queue> *_queue;	// 8 = 0x8
    _Bool _launching;	// 16 = 0x10
    NSMutableArray *_launchCompletions;	// 24 = 0x18
}

- (void).cxx_destruct;	// IMP=0x000000000006a108
- (void)_queue_completeWithPid:(int)arg1 error:(id)arg2;	// IMP=0x0000000000069fa9
- (void)_queue_launchWithRetries:(int)arg1;	// IMP=0x0000000000069b75
- (void)_queue_launchWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x0000000000069a60
- (void)launchWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x00000000000699b8
- (id)init;	// IMP=0x000000000006992d

@end

