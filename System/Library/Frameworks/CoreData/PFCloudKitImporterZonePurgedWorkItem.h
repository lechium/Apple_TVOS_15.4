//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class CKRecordZoneID;

__attribute__((visibility("hidden")))
@interface PFCloudKitImporterZonePurgedWorkItem
{
    CKRecordZoneID *_purgedRecordZoneID;	// 8 = 0x8
}

- (void)doWorkForStore:(id)arg1 inMonitor:(id)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x00000000001720a6
- (id)description;	// IMP=0x0000000000172013
- (void)dealloc;	// IMP=0x0000000000171fc5
- (id)initWithPurgedRecordZoneID:(id)arg1 options:(id)arg2 request:(id)arg3;	// IMP=0x0000000000171f68

@end
