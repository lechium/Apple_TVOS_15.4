//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <HMFoundation/HMFObject.h>

#import <HomeKitDaemon/HMFLogging-Protocol.h>

@class HMBLocalZoneLocalInput, NSString, NSUUID;

@interface HMDPersonDataBatchChange : HMFObject <HMFLogging>
{
    NSUUID *_UUID;	// 8 = 0x8
    HMBLocalZoneLocalInput *_localInput;	// 16 = 0x10
}

+ (id)logCategory;	// IMP=0x000000000026c369
- (void).cxx_destruct;	// IMP=0x000000000026c338
@property(readonly) HMBLocalZoneLocalInput *localInput; // @synthesize localInput=_localInput;
@property(readonly, copy) NSUUID *UUID; // @synthesize UUID=_UUID;
- (id)attributeDescriptions;	// IMP=0x000000000026c240
- (id)logIdentifier;	// IMP=0x000000000026c1f0
- (void)commit;	// IMP=0x000000000026bf86
- (void)removeFaceCropWithUUID:(id)arg1;	// IMP=0x000000000026be60
- (void)removePersonWithUUID:(id)arg1;	// IMP=0x000000000026bd3a
- (void)addOrUpdateFaceCrop:(id)arg1;	// IMP=0x000000000026bb80
- (void)addOrUpdatePerson:(id)arg1;	// IMP=0x000000000026bae7
- (id)initWithLocalInput:(id)arg1;	// IMP=0x000000000026ba33

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

