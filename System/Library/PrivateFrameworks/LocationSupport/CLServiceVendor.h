//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSDictionary, NSMutableDictionary, NSMutableSet;

@interface CLServiceVendor : NSObject
{
    NSMutableDictionary *_catalog;	// 8 = 0x8
    NSDictionary *_serviceReplacementMap;	// 16 = 0x10
    NSMutableSet *_unavailableServiceNames;	// 24 = 0x18
    NSMutableSet *_timeCoercibleSilos;	// 32 = 0x20
    int _missBehavior;	// 40 = 0x28
    double _currentGlobalLatchedAbsoluteTimestamp;	// 48 = 0x30
    NSMutableDictionary *_recordingFromTriggersByTo;	// 56 = 0x38
    NSMutableDictionary *_recordingToTriggersByFrom;	// 64 = 0x40
}

+ (id)sharedInstance;	// IMP=0x000000000001b372
+ (void)rereadConfiguration:(id)arg1;	// IMP=0x0000000000017b6a
+ (void)initialize;	// IMP=0x00000000000177ff
- (void).cxx_destruct;	// IMP=0x000000000001b3c7
- (void)dealloc;	// IMP=0x000000000001b343
- (void)setCurrentGlobalLatchedAbsoluteTimestamp:(double)arg1;	// IMP=0x000000000001af86
- (id)proxyForService:(id)arg1 forClient:(id)arg2;	// IMP=0x000000000001ae33
- (id)proxyForService:(id)arg1;	// IMP=0x000000000001ad48
- (_Bool)ensureServiceIsRunning:(id)arg1;	// IMP=0x000000000001ad15
- (_Bool)isServiceRunning:(id)arg1;	// IMP=0x000000000001abf8
- (_Bool)isServiceEnabled:(id)arg1;	// IMP=0x000000000001aa68
- (void)retireServiceWithName:(id)arg1;	// IMP=0x000000000001a639
- (id)getServiceWithName:(id)arg1;	// IMP=0x00000000000192c3
- (id)setRecordingTriggerMap:(id)arg1 outputPathBase:(id)arg2;	// IMP=0x00000000000192bb
- (void)setServiceReplacementMap:(id)arg1 missBehavior:(int)arg2;	// IMP=0x00000000000186d3
- (void)amendServiceReplacementMap:(id)arg1 missBehavior:(int)arg2;	// IMP=0x00000000000183de
- (int)missBehavior;	// IMP=0x00000000000183d5
- (_Bool)isTimeCoercionEnabled;	// IMP=0x00000000000183c7
- (void)enableTimeCoercion;	// IMP=0x0000000000018083
- (id)init;	// IMP=0x0000000000017fc0

@end
