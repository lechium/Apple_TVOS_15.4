//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <HMFoundation/HMFObject.h>

@class HMFVersion, NSSet;

@interface HMDBackingStoreModelObjectStorageInfo : HMFObject
{
    _Bool _defaultValueSet;	// 8 = 0x8
    Class _classObj;	// 16 = 0x10
    unsigned long long _logging;	// 24 = 0x18
    HMFVersion *_readOnly;	// 32 = 0x20
    HMFVersion *_unavailable;	// 40 = 0x28
    id _defaultValue;	// 48 = 0x30
    NSSet *_decodeClasses;	// 56 = 0x38
}

+ (id)deprecatedField;	// IMP=0x00000000001d6711
+ (id)infoWithClass:(Class)arg1 additionalDecodeClasses:(id)arg2;	// IMP=0x00000000001d669f
+ (id)infoWithClass:(Class)arg1 defaultValue:(id)arg2 logging:(unsigned long long)arg3 readOnly:(id)arg4 unavailable:(id)arg5;	// IMP=0x00000000001d65ee
+ (id)infoWithClass:(Class)arg1 defaultValue:(id)arg2 logging:(unsigned long long)arg3 readOnly:(id)arg4;	// IMP=0x00000000001d6557
+ (id)infoWithClass:(Class)arg1 defaultValue:(id)arg2 logging:(unsigned long long)arg3;	// IMP=0x00000000001d64e5
+ (id)infoWithClass:(Class)arg1 defaultValue:(id)arg2;	// IMP=0x00000000001d6473
+ (id)infoWithClass:(Class)arg1 logging:(unsigned long long)arg2 readOnly:(id)arg3 unavailable:(id)arg4;	// IMP=0x00000000001d63da
+ (id)infoWithClass:(Class)arg1 logging:(unsigned long long)arg2 readOnly:(id)arg3;	// IMP=0x00000000001d635f
+ (id)infoWithClass:(Class)arg1 logging:(unsigned long long)arg2;	// IMP=0x00000000001d6307
+ (id)infoWithClass:(Class)arg1;	// IMP=0x00000000001d62b4
- (void).cxx_destruct;	// IMP=0x00000000001d6048
@property(readonly, nonatomic) NSSet *decodeClasses; // @synthesize decodeClasses=_decodeClasses;
@property(readonly, nonatomic) _Bool defaultValueSet; // @synthesize defaultValueSet=_defaultValueSet;
@property(readonly, nonatomic) id defaultValue; // @synthesize defaultValue=_defaultValue;
@property(retain, nonatomic) HMFVersion *unavailable; // @synthesize unavailable=_unavailable;
@property(retain, nonatomic) HMFVersion *readOnly; // @synthesize readOnly=_readOnly;
@property(readonly, nonatomic) unsigned long long logging; // @synthesize logging=_logging;
@property(readonly, nonatomic) Class classObj; // @synthesize classObj=_classObj;
- (id)description;	// IMP=0x00000000001d5e51
- (id)initWithClass:(Class)arg1 logging:(unsigned long long)arg2 readOnly:(id)arg3 unavailable:(id)arg4 defaultSet:(_Bool)arg5 defaultValue:(id)arg6 additonalDecodeClasses:(id)arg7;	// IMP=0x00000000001d59f7

@end
