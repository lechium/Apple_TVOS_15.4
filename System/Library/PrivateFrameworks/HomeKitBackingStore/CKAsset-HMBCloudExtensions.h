//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <CloudKit/CKAsset.h>

#import <HomeKitBackingStore/HMBModelObjectStorage-Protocol.h>

@class NSString;

@interface CKAsset (HMBCloudExtensions) <HMBModelObjectStorage>
+ (id)hmbDecodeData:(id)arg1 fromStorageLocation:(unsigned long long)arg2 error:(id *)arg3;	// IMP=0x00000000000a0285
- (id)hmbEncodeForStorageLocation:(unsigned long long)arg1 error:(id *)arg2;	// IMP=0x00000000000a0031

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;
@end

