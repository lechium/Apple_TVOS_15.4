//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSDictionary;

@interface HKUCUMUnitDisplayConverter : NSObject
{
    NSDictionary *_synonymLookupTable;	// 8 = 0x8
    NSDictionary *_hkUnitNameLookupTable;	// 16 = 0x10
}

+ (id)sharedConverter;	// IMP=0x00000000000dde33
- (void).cxx_destruct;	// IMP=0x00000000000de438
@property(copy, nonatomic) NSDictionary *hkUnitNameLookupTable; // @synthesize hkUnitNameLookupTable=_hkUnitNameLookupTable;
@property(copy, nonatomic) NSDictionary *synonymLookupTable; // @synthesize synonymLookupTable=_synonymLookupTable;
- (id)hkUnitNameForUCUMUnitCode:(id)arg1;	// IMP=0x00000000000de366
- (id)synonymForUCUMUnitString:(id)arg1;	// IMP=0x00000000000de08c
- (id)init;	// IMP=0x00000000000dde04

@end

