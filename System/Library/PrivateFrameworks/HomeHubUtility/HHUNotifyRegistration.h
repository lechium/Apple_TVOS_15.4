//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <HomeHubUtility/HHUNotifyRegistration-Protocol.h>

@class NSNumber, NSString;
@protocol OS_dispatch_queue;

@interface HHUNotifyRegistration : NSObject <HHUNotifyRegistration>
{
    NSString *_name;	// 8 = 0x8
    NSObject<OS_dispatch_queue> *_queue;	// 16 = 0x10
    int _token;	// 24 = 0x18
    NSString *_logPrefix;	// 32 = 0x20
}

- (void).cxx_destruct;	// IMP=0x00000000000021dc
- (void)dealloc;	// IMP=0x000000000000219e
- (id)_logPrefix;	// IMP=0x0000000000002146
- (void)registerNotifyHandler:(CDUnknownBlockType)arg1;	// IMP=0x0000000000001e5a
@property(readonly, nonatomic) NSNumber *state;
- (void)suspend;	// IMP=0x0000000000001c78
- (void)resume;	// IMP=0x0000000000001b9e
- (void)cancel;	// IMP=0x0000000000001ab2
- (id)initWithName:(id)arg1 queue:(id)arg2;	// IMP=0x0000000000001a12

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

