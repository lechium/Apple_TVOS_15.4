//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Foundation/NSUUID.h>

@interface NSUUID (HomeKitClient)
+ (_Bool)hm_setAssistantIdentifierSalt:(id)arg1;	// IMP=0x000000000065247d
+ (id)hm_deriveUUIDForAssistantFromBaseUUID:(id)arg1;	// IMP=0x0000000000652462
+ (id)hm_deriveUUIDForAssistantFromBaseUUID:(id)arg1 withSalts:(id)arg2;	// IMP=0x00000000006523a6
+ (void)hm_setIdentifierSalt:(id)arg1;	// IMP=0x000000000065232c
+ (id)hm_deriveUUIDFromBaseUUID:(id)arg1;	// IMP=0x0000000000652311
+ (id)hm_deriveUUIDFromBaseUUID:(id)arg1 withSalts:(id)arg2;	// IMP=0x0000000000652257
+ (id)hm_deriveUUIDFromBaseUUID:(id)arg1 identifierSalt:(id)arg2;	// IMP=0x000000000065223b
+ (id)hm_deriveUUIDFromBaseUUID:(id)arg1 identifierSalt:(id)arg2 withSalts:(id)arg3;	// IMP=0x0000000000652222
+ (id)hm_uuid:(id)arg1 identifierSalt:(id)arg2 withSalts:(id)arg3;	// IMP=0x0000000000651f4a
- (id)hm_convertToData;	// IMP=0x0000000000650b01
@end

