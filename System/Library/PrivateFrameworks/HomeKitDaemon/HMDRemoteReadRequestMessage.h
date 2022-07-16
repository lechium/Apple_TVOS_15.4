//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <HMFoundation/HMFObject.h>

@class HMFActivity, HMFMessage, NSObject, NSUUID;
@protocol OS_dispatch_queue;

@interface HMDRemoteReadRequestMessage : HMFObject
{
    HMFMessage *_readMessage;	// 8 = 0x8
    NSUUID *_accessoryUUID;	// 16 = 0x10
    NSObject<OS_dispatch_queue> *_responseQueue;	// 24 = 0x18
    HMFActivity *_activity;	// 32 = 0x20
}

- (void).cxx_destruct;	// IMP=0x00000000002409cc
@property(readonly, nonatomic) HMFActivity *activity; // @synthesize activity=_activity;
@property(readonly, nonatomic) NSObject<OS_dispatch_queue> *responseQueue; // @synthesize responseQueue=_responseQueue;
@property(readonly, nonatomic) NSUUID *accessoryUUID; // @synthesize accessoryUUID=_accessoryUUID;
@property(readonly, nonatomic) HMFMessage *readMessage; // @synthesize readMessage=_readMessage;
- (id)description;	// IMP=0x000000000024088b
- (id)debugDescription;	// IMP=0x0000000000240747
- (id)initWithReadMessage:(id)arg1 accessoryUUID:(id)arg2 responseQueue:(id)arg3 activity:(id)arg4;	// IMP=0x0000000000240636

@end

