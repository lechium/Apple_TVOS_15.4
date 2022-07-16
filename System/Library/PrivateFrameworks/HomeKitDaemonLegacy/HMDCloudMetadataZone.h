//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class HMDCloudRecord;

@interface HMDCloudMetadataZone
{
    HMDCloudRecord *_metadataRecord;	// 72 = 0x48
}

+ (void)createMetadataZoneWithName:(id)arg1 owner:(id)arg2 cacheZone:(id)arg3 cloudCache:(id)arg4 completion:(CDUnknownBlockType)arg5;	// IMP=0x00000000002d24e2
+ (id)zoneSubscriptionName:(id)arg1;	// IMP=0x00000000002d24d5
+ (id)zoneRootRecordName;	// IMP=0x00000000002d24c8
- (void).cxx_destruct;	// IMP=0x00000000002d24b5
@property(retain, nonatomic) HMDCloudRecord *metadataRecord; // @synthesize metadataRecord=_metadataRecord;
- (void)setServerChangeToken:(id)arg1;	// IMP=0x00000000002d244f

@end

