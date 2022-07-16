//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <HMFoundation/HMFLogging-Protocol.h>

@class HMFLogEventSessionVoucher, NSString, NSUUID;
@protocol HMFLogBackendSession;

@interface HMFLogEventSession : NSObject <HMFLogging>
{
    unsigned long long _signpostId;	// 8 = 0x8
    NSUUID *_uuid;	// 16 = 0x10
    NSUUID *_rootUUID;	// 24 = 0x18
    id <HMFLogBackendSession> _backend;	// 32 = 0x20
}

+ (id)logCategory;	// IMP=0x0000000000015a0f
+ (void)submitEventWithName:(id)arg1 serviceName:(id)arg2 payload:(id)arg3;	// IMP=0x00000000000159f7
+ (void)submitEventWithName:(id)arg1 serviceName:(id)arg2 uploadImmediately:(_Bool)arg3 payload:(id)arg4;	// IMP=0x000000000001591f
+ (id)backendWithServiceName:(id)arg1 samplingUUID:(id)arg2 uploadImmediately:(_Bool)arg3;	// IMP=0x000000000001530c
- (void).cxx_destruct;	// IMP=0x0000000000015a9e
@property(readonly, nonatomic) id <HMFLogBackendSession> backend; // @synthesize backend=_backend;
@property(readonly, nonatomic) NSUUID *rootUUID; // @synthesize rootUUID=_rootUUID;
@property(readonly, nonatomic) NSUUID *uuid; // @synthesize uuid=_uuid;
@property(readonly, nonatomic) unsigned long long signpostId; // @synthesize signpostId=_signpostId;
- (void)submitEventWithName:(id)arg1 payload:(id)arg2;	// IMP=0x00000000000156ab
@property(readonly, nonatomic) NSString *serviceName;
- (void)dealloc;	// IMP=0x0000000000015666
@property(readonly, nonatomic) HMFLogEventSessionVoucher *voucher;
- (id)initWithUUID:(id)arg1 backend:(id)arg2;	// IMP=0x000000000001543e
- (id)initWithUUID:(id)arg1 serviceName:(id)arg2 uploadImmediately:(_Bool)arg3;	// IMP=0x00000000000153af

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

