//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class _PASLock;

@interface TRIExcessiveStaleFactorsUsageTimer : NSObject
{
    _PASLock *_lock;	// 8 = 0x8
}

- (void).cxx_destruct;	// IMP=0x000000000001041d
- (void)invalidate;	// IMP=0x00000000000103a1
- (id)initWithNamespaceName:(id)arg1 delayTimeInSeconds:(double)arg2 block:(CDUnknownBlockType)arg3;	// IMP=0x0000000000010178

@end

