//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSData;

@interface HMDLegacyMetadataModel
{
}

+ (id)createWithLegacyRecord:(id)arg1 modelContainer:(id)arg2 error:(id *)arg3;	// IMP=0x00000000009b383c
+ (id)properties;	// IMP=0x00000000009b380c
- (id)encodeWithExistingRecord:(id)arg1 cloudZone:(id)arg2 modelContainer:(id)arg3 error:(id *)arg4;	// IMP=0x00000000009b35f0
- (id)init;	// IMP=0x00000000009b354a

// Remaining properties
@property(retain, nonatomic) NSData *cloudMetadata; // @dynamic cloudMetadata;

@end

