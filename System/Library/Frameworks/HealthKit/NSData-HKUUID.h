//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Foundation/NSData.h>

#import <HealthKit/HKUUIDCollection-Protocol.h>

@class NSString;

@interface NSData (HKUUID) <HKUUIDCollection>
+ (id)hk_randomDataOfLength:(long long)arg1;	// IMP=0x00000000001112ee
+ (id)hk_nilDataMD5;	// IMP=0x0000000000111140
+ (id)hk_dataWithSHA256Fingerprint:(id)arg1 error:(out id *)arg2;	// IMP=0x0000000000110ed1
- (id)hk_dataForAllUUIDs;	// IMP=0x00000000000667df
- (_Bool)hk_enumerateUUIDsWithError:(id *)arg1 block:(CDUnknownBlockType)arg2;	// IMP=0x00000000000664cf
- (unsigned long long)hk_countOfUUIDs;	// IMP=0x00000000000664aa
- (void)hk_enumerateUUIDBytesUsingBlock:(CDUnknownBlockType)arg1;	// IMP=0x0000000000066416
- (void)hk_enumerateUUIDsUsingBlock:(CDUnknownBlockType)arg1;	// IMP=0x0000000000015e0b
- (id)hk_SHA256;	// IMP=0x000000000011124e
- (id)hk_MD5;	// IMP=0x00000000001111ae

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;
@end

