//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <HomeKitBackingStore/HMBModel.h>

@class NSString, NSUUID;

@interface HMDCameraSignificantEventFaceClassificationModel : HMBModel
{
}

+ (id)hmbExternalRecordType;	// IMP=0x0000000000690f89
+ (id)hmbProperties;	// IMP=0x0000000000690f59
- (id)createFaceClassification;	// IMP=0x0000000000691185

// Remaining properties
@property(retain) NSUUID *personManagerUUID; // @dynamic personManagerUUID;
@property(retain) NSString *personName; // @dynamic personName;
@property(retain) NSUUID *personUUID; // @dynamic personUUID;
@property(retain) NSUUID *unassociatedFaceCropUUID; // @dynamic unassociatedFaceCropUUID;

@end

