//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <FMCoreLite/FMQueueingStrategy-Protocol.h>

@class NSString;

__attribute__((visibility("hidden")))
@interface _FMDefaultQueueingStrategy : NSObject <FMQueueingStrategy>
{
}

- (void)enqueueObject:(id)arg1 buffer:(id)arg2;	// IMP=0x0000000000003a5f

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

