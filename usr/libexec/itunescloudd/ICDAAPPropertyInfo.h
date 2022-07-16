//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSMutableDictionary;

@interface ICDAAPPropertyInfo : NSObject
{
    NSMutableDictionary *_codeMap;	// 8 = 0x8
    NSMutableDictionary *_valueTypeMap;	// 16 = 0x10
}

+ (id)sharedContainerPropertyInfo;	// IMP=0x0020000000096b5d
+ (id)sharedItemPropertyInfo;	// IMP=0x0010000000096b2d
- (void).cxx_destruct;	// IMP=0x0020000000096b05
@property(retain, nonatomic) NSMutableDictionary *valueTypeMap; // @synthesize valueTypeMap=_valueTypeMap;
@property(retain, nonatomic) NSMutableDictionary *codeMap; // @synthesize codeMap=_codeMap;
- (void)mapProperty:(id)arg1 toCode:(unsigned int)arg2 valueType:(long long)arg3;	// IMP=0x0010000000096a0f
- (id)_init;	// IMP=0x0010000000096972
- (long long)valueTypeForProperty:(id)arg1;	// IMP=0x001000000009692a
- (unsigned int)elementCodeForProperty:(id)arg1;	// IMP=0x00100000000968e2
- (_Bool)hasInfoForProperty:(id)arg1;	// IMP=0x00100000000968ab

@end

