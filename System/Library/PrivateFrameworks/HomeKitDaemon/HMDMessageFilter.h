//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <HMFoundation/HMFObject.h>

@class NSObject, NSString;
@protocol OS_dispatch_queue;

@interface HMDMessageFilter : HMFObject
{
    NSString *_name;	// 8 = 0x8
    NSObject<OS_dispatch_queue> *_workQueue;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x00000000005c605b
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *workQueue; // @synthesize workQueue=_workQueue;
@property(readonly, copy, nonatomic) NSString *name; // @synthesize name=_name;
@property(readonly, nonatomic) NSObject<OS_dispatch_queue> *queue;
- (_Bool)shouldCloudSyncData;	// IMP=0x00000000005c600b
- (void)resetConfiguration;	// IMP=0x00000000005c6005
- (_Bool)acceptMessage:(id)arg1 target:(id)arg2 errorReason:(id *)arg3;	// IMP=0x00000000005c5ffd
- (id)initWithName:(id)arg1;	// IMP=0x00000000005c5ee1

@end

