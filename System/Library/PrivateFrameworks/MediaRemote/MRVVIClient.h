//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSMutableDictionary;
@protocol OS_dispatch_queue;

__attribute__((visibility("hidden")))
@interface MRVVIClient : NSObject
{
    NSMutableDictionary *_deviceIDToCallbackMap;	// 8 = 0x8
    NSObject<OS_dispatch_queue> *_serialQueue;	// 16 = 0x10
}

+ (id)sharedClient;	// IMP=0x000000000020f194
- (void).cxx_destruct;	// IMP=0x000000000020f6ff
- (void)_recordingStateChangedNotification:(id)arg1;	// IMP=0x000000000020f49c
- (void)setRecordingStateCallback:(CDUnknownBlockType)arg1 forDeviceID:(unsigned int)arg2;	// IMP=0x000000000020f349
- (void)dealloc;	// IMP=0x000000000020f2d4
- (id)init;	// IMP=0x000000000020f1e9

@end

