//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Foundation/NSDictionary.h>

@interface NSDictionary (HomeLocation)
+ (id)dictionaryByCombiningNonOverlappingDictionaries:(id)arg1;	// IMP=0x00000000004106ef
+ (id)hmd_dictionaryWithActionExecutionError:(id)arg1;	// IMP=0x000000000093a7db
- (id)hm_regionFromDataForKey:(id)arg1;	// IMP=0x00000000003a02ed
- (id)hm_locationFromDataForKey:(id)arg1;	// IMP=0x00000000003a0160
- (id)hmd_responseByRemovingEntriesForCharacteristics:(id)arg1;	// IMP=0x00000000008163c8
- (id)hmd_valueOfCharacteristic:(id)arg1 error:(id *)arg2;	// IMP=0x0000000000815d3f
- (_Bool)hmd_isValidResponseForWriteRequest:(id)arg1 naturalLightingEnabled:(_Bool)arg2 error:(id *)arg3;	// IMP=0x00000000008154b4
@end
