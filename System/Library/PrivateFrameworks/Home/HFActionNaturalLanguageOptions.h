//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class HMHome, NSSet;

@interface HFActionNaturalLanguageOptions
{
    _Bool _useMediaContainersNotInContext;	// 8 = 0x8
    _Bool _ignoreOptionalCharacteristics;	// 9 = 0x9
    HMHome *_home;	// 16 = 0x10
    NSSet *_objectsInContext;	// 24 = 0x18
    unsigned long long _accessoryCountType;	// 32 = 0x20
}

- (void).cxx_destruct;	// IMP=0x00000000001cf379
@property(nonatomic) unsigned long long accessoryCountType; // @synthesize accessoryCountType=_accessoryCountType;
@property(nonatomic) _Bool ignoreOptionalCharacteristics; // @synthesize ignoreOptionalCharacteristics=_ignoreOptionalCharacteristics;
@property(nonatomic) _Bool useMediaContainersNotInContext; // @synthesize useMediaContainersNotInContext=_useMediaContainersNotInContext;
@property(retain, nonatomic) NSSet *objectsInContext; // @synthesize objectsInContext=_objectsInContext;
@property(retain, nonatomic) HMHome *home; // @synthesize home=_home;
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x00000000001cf13d
- (id)initWithHome:(id)arg1 formattingContext:(long long)arg2;	// IMP=0x00000000001cf06a

@end

