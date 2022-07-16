//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <HMFoundation/HMFObject.h>

#import <HomeKitDaemonLegacy/HMFLogging-Protocol.h>

@class HMDDevice, HMFMessage, NSString, NSUUID;

@interface HMDMediaSessionRequestMessageInformation : HMFObject <HMFLogging>
{
    HMFMessage *_message;	// 8 = 0x8
}

+ (id)logCategory;	// IMP=0x00000000005e363e
- (void).cxx_destruct;	// IMP=0x00000000005e362b
@property(readonly) HMFMessage *message; // @synthesize message=_message;
- (id)attributeDescriptions;	// IMP=0x00000000005e34e9
@property(readonly) HMDDevice *remoteSourceDevice;
@property(readonly, copy) NSUUID *messageIdentifier;
- (id)initWithMessage:(id)arg1;	// IMP=0x00000000005e3327

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

