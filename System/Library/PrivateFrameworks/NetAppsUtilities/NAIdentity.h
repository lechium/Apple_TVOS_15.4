//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <NetAppsUtilities/NSCopying-Protocol.h>

@class NSArray;

@interface NAIdentity : NSObject <NSCopying>
{
    NSArray *_characteristics;	// 8 = 0x8
}

+ (id)na_identity;	// IMP=0x000000000001f34b
- (void).cxx_destruct;	// IMP=0x000000000001f428
@property(copy, nonatomic) NSArray *characteristics; // @synthesize characteristics=_characteristics;
- (_Bool)isEqual:(id)arg1;	// IMP=0x000000000001f2d5
- (unsigned long long)hash;	// IMP=0x000000000001f27a
- (_Bool)isObject:(id)arg1 equalToObject:(id)arg2;	// IMP=0x000000000001ef9a
- (unsigned long long)hashOfObject:(id)arg1;	// IMP=0x000000000001ed35
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x000000000001eccc
- (id)initWithCharacteristics:(id)arg1;	// IMP=0x000000000001ec64

@end

