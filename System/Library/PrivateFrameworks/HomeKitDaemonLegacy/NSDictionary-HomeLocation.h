//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Foundation/NSDictionary.h>

@interface NSDictionary (HomeLocation)
+ (id)dictionaryByCombiningNonOverlappingDictionaries:(id)arg1;	// IMP=0x00000000003cb9f3
+ (id)hmd_dictionaryWithActionExecutionError:(id)arg1;	// IMP=0x0000000000883217
- (id)hm_regionFromDataForKey:(id)arg1;	// IMP=0x000000000035b93d
- (id)hm_locationFromDataForKey:(id)arg1;	// IMP=0x000000000035b7b0
- (id)hmd_responseByRemovingEntriesForCharacteristics:(id)arg1;	// IMP=0x0000000000773844
- (id)hmd_valueOfCharacteristic:(id)arg1 error:(id *)arg2;	// IMP=0x00000000007731bb
- (_Bool)hmd_isValidResponseForWriteRequest:(id)arg1 naturalLightingEnabled:(_Bool)arg2 error:(id *)arg3;	// IMP=0x0000000000772930
@end
