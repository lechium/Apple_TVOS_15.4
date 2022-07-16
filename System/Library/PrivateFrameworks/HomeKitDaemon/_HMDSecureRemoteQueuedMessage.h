//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <HMFoundation/HMFObject.h>

#import <HomeKitDaemon/HMFObject-Protocol.h>

@class HMDRemoteMessage, HMFTimer, NSArray, NSString;

@interface _HMDSecureRemoteQueuedMessage : HMFObject <HMFObject>
{
    HMDRemoteMessage *_message;	// 8 = 0x8
    HMFTimer *_timer;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x00000000003ae00c
@property(readonly, nonatomic) HMFTimer *timer; // @synthesize timer=_timer;
@property(readonly, nonatomic) HMDRemoteMessage *message; // @synthesize message=_message;
@property(readonly, copy) NSString *propertyDescription;
@property(readonly, copy) NSString *shortDescription;
- (id)initWithMessage:(id)arg1;	// IMP=0x00000000003addac
- (id)init;	// IMP=0x00000000003add04

// Remaining properties
@property(readonly, copy, nonatomic) NSArray *attributeDescriptions;
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly, copy) NSString *privateDescription;
@property(readonly) Class superclass;

@end

