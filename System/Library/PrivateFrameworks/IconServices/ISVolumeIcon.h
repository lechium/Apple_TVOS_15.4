//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSString;

__attribute__((visibility("hidden")))
@interface ISVolumeIcon
{
    unsigned int _typeCode;	// 12 = 0xc
    NSString *_kextBundleIdentifier;	// 16 = 0x10
    NSString *_kextIconName;	// 24 = 0x18
}

- (void).cxx_destruct;	// IMP=0x0000000000028c73
@property(readonly) unsigned int typeCode; // @synthesize typeCode=_typeCode;
@property(readonly) NSString *kextIconName; // @synthesize kextIconName=_kextIconName;
@property(readonly) NSString *kextBundleIdentifier; // @synthesize kextBundleIdentifier=_kextBundleIdentifier;

@end

