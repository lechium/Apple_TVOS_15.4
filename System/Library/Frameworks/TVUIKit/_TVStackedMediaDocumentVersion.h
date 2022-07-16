//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

__attribute__((visibility("hidden")))
@interface _TVStackedMediaDocumentVersion : NSObject
{
    long long _majorVersion;	// 8 = 0x8
    long long _minorVersion;	// 16 = 0x10
    long long _patchVersion;	// 24 = 0x18
}

+ (id)v1_0_1;	// IMP=0x000000000000647e
+ (id)v1_0_0;	// IMP=0x0000000000006412
@property(nonatomic) long long patchVersion; // @synthesize patchVersion=_patchVersion;
@property(nonatomic) long long minorVersion; // @synthesize minorVersion=_minorVersion;
@property(nonatomic) long long majorVersion; // @synthesize majorVersion=_majorVersion;
- (long long)compare:(id)arg1;	// IMP=0x00000000000066ef
- (_Bool)isEqualToVersion:(id)arg1;	// IMP=0x00000000000066d6
- (_Bool)isLessThanVersion:(id)arg1;	// IMP=0x00000000000066bc
- (_Bool)isGreaterThanVersion:(id)arg1;	// IMP=0x00000000000066a2
- (id)initWithVersionString:(id)arg1;	// IMP=0x00000000000064ea

@end

