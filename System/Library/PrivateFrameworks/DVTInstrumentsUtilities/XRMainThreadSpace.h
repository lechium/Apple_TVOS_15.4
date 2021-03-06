//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSMutableSet;

@interface XRMainThreadSpace
{
    NSMutableSet *_mainThreadOps;	// 8 = 0x8
}

+ (id)sharedInstance;	// IMP=0x00000000000082ef
- (void).cxx_destruct;	// IMP=0x0000000000008344
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;	// IMP=0x000000000000816b
- (id)_scheduleOperationFromCurrentQueue:(id)arg1;	// IMP=0x0000000000007f94
- (void)_queueOperationToRunOnMainThread:(id)arg1;	// IMP=0x0000000000007eb5
- (id)_activeRunLoopModes;	// IMP=0x0000000000007e0e
- (void)_executeOp:(id)arg1;	// IMP=0x0000000000007d7e
- (_Bool)isSerial;	// IMP=0x0000000000007d76
- (id)spaceName;	// IMP=0x0000000000007d69
- (id)initWithQueue:(id)arg1;	// IMP=0x0000000000007d3e
- (id)init;	// IMP=0x0000000000007c9d

@end

