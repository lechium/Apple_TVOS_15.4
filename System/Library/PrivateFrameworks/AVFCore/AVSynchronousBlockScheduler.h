//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <AVFCore/AVBlockScheduler-Protocol.h>

@class NSString;

__attribute__((visibility("hidden")))
@interface AVSynchronousBlockScheduler : NSObject <AVBlockScheduler>
{
}

- (void)scheduleBlock:(CDUnknownBlockType)arg1;	// IMP=0x00000000000ef8cc

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

