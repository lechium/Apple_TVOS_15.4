//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <AVConference/VCStreamInputDelegate-Protocol.h>

@class NSMutableDictionary, NSObject, NSString;
@protocol OS_dispatch_queue;

__attribute__((visibility("hidden")))
@interface VCStreamInputManager <VCStreamInputDelegate>
{
    NSObject<OS_dispatch_queue> *_xpcQueue;	// 16 = 0x10
    NSObject<OS_dispatch_queue> *_streamInputQueue;	// 24 = 0x18
    NSMutableDictionary *_streamInputs;	// 32 = 0x20
}

+ (id)sharedInstance;	// IMP=0x000000000013d73d
- (void)didStopStreamInput:(id)arg1;	// IMP=0x000000000013e69b
- (void)didStartStreamInput:(id)arg1;	// IMP=0x000000000013e5e7
- (void)deregisterBlocksForService;	// IMP=0x000000000013e5ae
- (void)registerBlocksForService;	// IMP=0x000000000013e4ca
- (void)registerDidClientDieBlock:(id)arg1;	// IMP=0x000000000013e37e
- (void)registerService:(char *)arg1 weakSelf:(id)arg2 eventLogLevel:(int)arg3 block:(CDUnknownBlockType)arg4;	// IMP=0x000000000013e228
- (void)registerService:(char *)arg1 weakSelf:(id)arg2 block:(CDUnknownBlockType)arg3;	// IMP=0x000000000013e20d
- (_Bool)pushSampleBufferWithXPCArguments:(id)arg1 result:(id *)arg2 error:(id *)arg3;	// IMP=0x000000000013e104
- (_Bool)terminateStreamInputWithXPCArguments:(id)arg1 result:(id *)arg2 error:(id *)arg3;	// IMP=0x000000000013df23
- (_Bool)initializeStreamInputWithXPCArguments:(id)arg1 result:(id *)arg2 error:(id *)arg3;	// IMP=0x000000000013db38
- (id)newStreamInputID;	// IMP=0x000000000013dab5
- (void)dealloc;	// IMP=0x000000000013da23
- (id)autorelease;	// IMP=0x000000000013da1a
- (oneway void)release;	// IMP=0x000000000013da14
- (unsigned long long)retainCount;	// IMP=0x000000000013da07
- (id)retain;	// IMP=0x000000000013d9fe
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x000000000013d9f5
- (id)allocWithZone:(struct _NSZone *)arg1;	// IMP=0x000000000013d9e8
- (id)init;	// IMP=0x000000000013d782

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
