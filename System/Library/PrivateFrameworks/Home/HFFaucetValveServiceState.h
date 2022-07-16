//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@interface HFFaucetValveServiceState
{
    unsigned long long _type;	// 8 = 0x8
}

+ (unsigned long long)_typeForSystemActiveState:(_Bool)arg1 heaterCoolerActiveState:(id)arg2 usageState:(long long)arg3 currentHeaterCoolerState:(id)arg4;	// IMP=0x00000000001e3930
+ (id)optionalCharacteristicTypes;	// IMP=0x00000000001e383e
+ (id)requiredCharacteristicTypes;	// IMP=0x00000000001e373e
+ (id)stateClassIdentifier;	// IMP=0x00000000001e3731
@property(readonly, nonatomic) unsigned long long type; // @synthesize type=_type;
- (_Bool)isTransitioning;	// IMP=0x00000000001e3fef
- (long long)priority;	// IMP=0x00000000001e3fd5
- (long long)primaryState;	// IMP=0x00000000001e3fa8
- (id)stateTypeIdentifier;	// IMP=0x00000000001e3f31
- (id)initWithBatchReadResponse:(id)arg1;	// IMP=0x00000000001e39e8

@end
