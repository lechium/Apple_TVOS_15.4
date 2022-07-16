//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Foundation/NSUUID.h>

#import <HealthKit/HKUUIDProvider-Protocol.h>

@class NSString;

@interface NSUUID (HealthKit) <HKUUIDProvider>
+ (id)hk_v3UUIDWithNameSpace:(id)arg1 name:(id)arg2;	// IMP=0x0000000000065fe8
+ (id)hk_UUIDWithData:(id)arg1;	// IMP=0x000000000000fdba
- (id)hk_shortRepresentation;	// IMP=0x0000000000066360
- (long long)hk_compare:(id)arg1;	// IMP=0x000000000006629d
- (id)hk_dataForUUIDBytes;	// IMP=0x000000000000cab5
- (id)hk_UUID;	// IMP=0x00000000000667ff

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;
@end

