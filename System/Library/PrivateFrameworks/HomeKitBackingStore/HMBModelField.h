//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <HMFoundation/HMFObject.h>

#import <HomeKitBackingStore/NSCopying-Protocol.h>
#import <HomeKitBackingStore/NSMutableCopying-Protocol.h>

@class HMFVersion, NSString;

@interface HMBModelField : HMFObject <NSCopying, NSMutableCopying>
{
    _Bool _encrypted;	// 8 = 0x8
    _Bool _excludeFromCloudStorage;	// 9 = 0x9
    _Bool _optional;	// 10 = 0xa
    _Bool _conformsToHMBModelNativeCKWrapper;	// 11 = 0xb
    Class _classObj;	// 16 = 0x10
    NSString *_externalRecordField;	// 24 = 0x18
    unsigned long long _loggingVisibility;	// 32 = 0x20
    id _defaultValue;	// 40 = 0x28
    HMFVersion *_readonlyVersion;	// 48 = 0x30
    HMFVersion *_unavailableVersion;	// 56 = 0x38
    CDUnknownBlockType _encodeBlock;	// 64 = 0x40
    CDUnknownBlockType _decodeBlock;	// 72 = 0x48
    CDUnknownBlockType _descriptionBlock;	// 80 = 0x50
}

+ (id)deprecatedField;	// IMP=0x00000000000a1e5d
+ (id)optionalFieldWithClass:(Class)arg1 options:(id)arg2;	// IMP=0x00000000000a1dc9
+ (id)fieldWithClass:(Class)arg1 options:(id)arg2;	// IMP=0x00000000000a1d71
+ (id)optionalFieldWithClass:(Class)arg1;	// IMP=0x00000000000a1d03
+ (id)fieldWithClass:(Class)arg1;	// IMP=0x00000000000a1ccd
- (void).cxx_destruct;	// IMP=0x00000000000a1a1b
@property(copy, nonatomic) CDUnknownBlockType descriptionBlock; // @synthesize descriptionBlock=_descriptionBlock;
@property(copy, nonatomic) CDUnknownBlockType decodeBlock; // @synthesize decodeBlock=_decodeBlock;
@property(copy, nonatomic) CDUnknownBlockType encodeBlock; // @synthesize encodeBlock=_encodeBlock;
@property(nonatomic) _Bool conformsToHMBModelNativeCKWrapper; // @synthesize conformsToHMBModelNativeCKWrapper=_conformsToHMBModelNativeCKWrapper;
@property(copy, nonatomic) HMFVersion *unavailableVersion; // @synthesize unavailableVersion=_unavailableVersion;
@property(copy, nonatomic) HMFVersion *readonlyVersion; // @synthesize readonlyVersion=_readonlyVersion;
@property(retain, nonatomic) id defaultValue; // @synthesize defaultValue=_defaultValue;
@property(nonatomic) unsigned long long loggingVisibility; // @synthesize loggingVisibility=_loggingVisibility;
@property(nonatomic, getter=isOptional) _Bool optional; // @synthesize optional=_optional;
@property(nonatomic) _Bool excludeFromCloudStorage; // @synthesize excludeFromCloudStorage=_excludeFromCloudStorage;
@property(retain, nonatomic) NSString *externalRecordField; // @synthesize externalRecordField=_externalRecordField;
@property(nonatomic) _Bool encrypted; // @synthesize encrypted=_encrypted;
@property(readonly, nonatomic) Class classObj; // @synthesize classObj=_classObj;
- (id)mutableCopyWithZone:(struct _NSZone *)arg1;	// IMP=0x00000000000a166d
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x00000000000a1662
- (id)descriptionForEncodedQueryableValue:(id)arg1;	// IMP=0x00000000000a15bf
- (id)decodeQueryableValue:(id)arg1;	// IMP=0x00000000000a151c
- (id)encodeQueryableValue:(id)arg1;	// IMP=0x00000000000a144e
- (id)description;	// IMP=0x00000000000a1015
- (id)initWithClass:(Class)arg1 options:(id)arg2;	// IMP=0x00000000000a0c84
- (id)initWithClass:(Class)arg1;	// IMP=0x00000000000a0c0e

@end

