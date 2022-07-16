//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <HMFoundation/HMFObject.h>

#import <HomeKitDaemonLegacy/HMMessageEncoding-Protocol.h>

@class NSString, NSUUID;

@interface HMDAppleMediaAccessoryModelIdentiferResponseMessagePayload : HMFObject <HMMessageEncoding>
{
    NSUUID *_modelIdentifier;	// 8 = 0x8
}

+ (id)logCategory;	// IMP=0x00000000003d7e6d
- (void).cxx_destruct;	// IMP=0x00000000003d7e5a
@property(readonly, copy) NSUUID *modelIdentifier; // @synthesize modelIdentifier=_modelIdentifier;
@property(readonly) unsigned long long hash;
- (_Bool)isEqual:(id)arg1;	// IMP=0x00000000003d7d2c
- (id)attributeDescriptions;	// IMP=0x00000000003d7c60
- (id)payloadCopy;	// IMP=0x00000000003d7b96
- (id)initWithPayload:(id)arg1;	// IMP=0x00000000003d7a3f
- (id)initWithModelIdentifier:(id)arg1;	// IMP=0x00000000003d79c0

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) Class superclass;

@end

