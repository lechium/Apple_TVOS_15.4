//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSMutableDictionary, NSString, NSURLSession;
@protocol OS_os_transaction;

__attribute__((visibility("hidden")))
@interface SecMetrics : NSObject
{
    NSMutableDictionary *_taskMap;	// 8 = 0x8
    NSURLSession *_URLSession;	// 16 = 0x10
    NSObject<OS_os_transaction> *_transaction;	// 24 = 0x18
    long long _lostEvents;	// 32 = 0x20
}

+ (id)managerObject;	// IMP=0x00200000001484b5
+ (id)c2MetricsEndpoint;	// IMP=0x001000000014832b
- (void).cxx_destruct;	// IMP=0x00200000001482f8
@property long long lostEvents; // @synthesize lostEvents=_lostEvents;
@property(retain) NSObject<OS_os_transaction> *transaction; // @synthesize transaction=_transaction;
@property(retain) NSURLSession *URLSession; // @synthesize URLSession=_URLSession;
@property(retain) NSMutableDictionary *taskMap; // @synthesize taskMap=_taskMap;
- (id)generateDeviceInfo;	// IMP=0x00100000001480e5
- (id)gzipEncode:(id)arg1;	// IMP=0x0010000000147eee
- (id)requestForGenericEvent:(id)arg1;	// IMP=0x0010000000147c6f
- (void)URLSession:(id)arg1 task:(id)arg2 didCompleteWithError:(id)arg3;	// IMP=0x0010000000147840
- (id)getEvent:(id)arg1;	// IMP=0x001000000014774e
- (void)sendEvent:(id)arg1 pushTopic:(id)arg2;	// IMP=0x00100000001473d2
- (void)submitEvent:(id)arg1;	// IMP=0x00100000001473b9
- (id)init;	// IMP=0x00100000001472ba

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

