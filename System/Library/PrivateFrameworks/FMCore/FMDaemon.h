//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@interface FMDaemon : NSObject
{
}

- (id)verifyLaunchEventsConfiguration:(id)arg1 withExclusions:(id)arg2;	// IMP=0x000000000000610f
- (void)registerXPCEventHandlers;	// IMP=0x0000000000006078
- (id)xpcDistributedEventHandlers;	// IMP=0x000000000000606b
- (id)xpcDarwinEventHandlers;	// IMP=0x000000000000605e
- (void)startup;	// IMP=0x0000000000006058
- (void)startupWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x000000000000601a
- (void)initialize;	// IMP=0x0000000000005fb8
- (void)run;	// IMP=0x0000000000005f1a

@end
