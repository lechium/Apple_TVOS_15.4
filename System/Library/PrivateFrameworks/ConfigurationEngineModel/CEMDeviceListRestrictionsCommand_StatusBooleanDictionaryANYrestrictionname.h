//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSNumber;

@interface CEMDeviceListRestrictionsCommand_StatusBooleanDictionaryANYrestrictionname
{
    NSNumber *_statusValue;	// 16 = 0x10
}

+ (id)buildRequiredOnlyWithValue:(id)arg1;	// IMP=0x00000000000461cc
+ (id)buildWithValue:(id)arg1;	// IMP=0x0000000000046176
+ (id)allowedStatusKeys;	// IMP=0x00000000000460d3
- (void).cxx_destruct;	// IMP=0x0000000000046593
@property(copy, nonatomic) NSNumber *statusValue; // @synthesize statusValue=_statusValue;
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x000000000004650c
- (id)serializePayload;	// IMP=0x0000000000046481
- (_Bool)loadPayload:(id)arg1 error:(id *)arg2;	// IMP=0x0000000000046222

@end
