//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <GLKit/NSCopying-Protocol.h>

@interface GLKHashableBigInt : NSObject <NSCopying>
{
    struct GLKBigInt_s _bigInt;	// 8 = 0x8
}

- (unsigned long long)hash;	// IMP=0x000000000001c692
- (_Bool)isEqual:(id)arg1;	// IMP=0x000000000001c674
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x000000000001c638
- (id)initWithBigInt:(struct GLKBigInt_s *)arg1;	// IMP=0x000000000001c5f8

@end

