//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <ContactsFoundation/CNScheduler-Protocol.h>

@class NSString;

@interface _CNJumpToMainRunLoopScheduler : NSObject <CNScheduler>
{
}

+ (_Bool)isAvailable;	// IMP=0x00000000000626cc
@property(readonly) double timestamp;
- (id)afterDelay:(double)arg1 performBlock:(CDUnknownBlockType)arg2 qualityOfService:(unsigned long long)arg3;	// IMP=0x0000000000062a87
- (id)afterDelay:(double)arg1 performBlock:(CDUnknownBlockType)arg2;	// IMP=0x0000000000062a73
- (id)performCancelableBlock:(CDUnknownBlockType)arg1 qualityOfService:(unsigned long long)arg2;	// IMP=0x000000000006288f
- (id)performCancelableBlock:(CDUnknownBlockType)arg1;	// IMP=0x000000000006287b
- (void)performBlock:(CDUnknownBlockType)arg1 qualityOfService:(unsigned long long)arg2;	// IMP=0x00000000000626f1
- (void)performBlock:(CDUnknownBlockType)arg1;	// IMP=0x00000000000626dd

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

