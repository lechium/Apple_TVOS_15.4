//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class CKModifyRecordZonesOperation, SHLSyncSessionConfiguration;

__attribute__((visibility("hidden")))
@interface SHLCloudModifyZoneTransformer : NSObject
{
    SHLSyncSessionConfiguration *_configuration;	// 8 = 0x8
    CKModifyRecordZonesOperation *_modifyRecordZonesOperation;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x0020000000035c37
@property(retain, nonatomic) CKModifyRecordZonesOperation *modifyRecordZonesOperation; // @synthesize modifyRecordZonesOperation=_modifyRecordZonesOperation;
@property(readonly, nonatomic) SHLSyncSessionConfiguration *configuration; // @synthesize configuration=_configuration;
- (id)recordZonesFromCloudBackedZones:(id)arg1;	// IMP=0x0010000000035a28
- (id)cloudBackedOperationForZonesToSave:(id)arg1 container:(id)arg2;	// IMP=0x0010000000035474
- (id)initWithConfiguration:(id)arg1;	// IMP=0x00100000000353ef

@end

