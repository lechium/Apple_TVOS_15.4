//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <AppStoreDaemon/ASDTaskScheduler-Protocol.h>

@class NSString;

__attribute__((visibility("hidden")))
@interface ASDSyncTaskScheduler : NSObject <ASDTaskScheduler>
{
}

+ (id)sharedInstance;	// IMP=0x0000000000004962
- (void)scheduleBlock:(CDUnknownBlockType)arg1;	// IMP=0x00000000000049b7

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

