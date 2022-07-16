//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSArray, NSDictionary, NSNumber, NSString, NSURL;

@interface AAQuotaInfoResponse
{
    NSDictionary *_quotaInfo;	// 32 = 0x20
    NSDictionary *_endPoints;	// 40 = 0x28
    NSDictionary *_storageInfo;	// 48 = 0x30
    NSDictionary *_storageMeterLabel;	// 56 = 0x38
    NSArray *_usage;	// 64 = 0x40
}

- (void).cxx_destruct;	// IMP=0x0000000000030b17
@property(readonly, nonatomic) NSArray *usage; // @synthesize usage=_usage;
- (void)updateAccount:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x000000000003083b
@property(readonly, nonatomic) NSString *displayLabel;
@property(readonly, nonatomic) _Bool hasMaxTier;
@property(readonly, nonatomic) NSNumber *availableStorageInBytes;
@property(readonly, nonatomic) NSNumber *usedStorageInBytes;
@property(readonly, nonatomic) NSNumber *totalStorageInBytes;
@property(readonly, nonatomic) NSURL *manageStorageURL;
- (void)_initFromResponseDict;	// IMP=0x00000000000303ce
- (id)initWithHTTPResponse:(id)arg1 data:(id)arg2;	// IMP=0x00000000000302b3

@end

