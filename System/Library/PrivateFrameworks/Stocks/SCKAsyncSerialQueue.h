//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSOperationQueue;

@interface SCKAsyncSerialQueue : NSObject
{
    NSOperationQueue *_serialOperationQueue;	// 8 = 0x8
}

- (void).cxx_destruct;	// IMP=0x000000000001de65
@property(retain, nonatomic) NSOperationQueue *serialOperationQueue; // @synthesize serialOperationQueue=_serialOperationQueue;
@property(getter=isSuspended) _Bool suspended;
- (void)waitUntilEmpty;	// IMP=0x000000000001dd7d
- (void)enqueueBlock:(CDUnknownBlockType)arg1;	// IMP=0x000000000001dcdc
- (id)init;	// IMP=0x000000000001dc40

@end

