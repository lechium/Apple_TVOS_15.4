//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSString;

@interface VOTElementUniqueIdentification : NSObject
{
    NSString *hashKey;	// 8 = 0x8
}

+ (id)identificationFromElement:(id)arg1;	// IMP=0x00200000001124fd
+ (id)identificationFromKey:(id)arg1;	// IMP=0x0010000000112496
- (void).cxx_destruct;	// IMP=0x0020000000112a15
@property(copy, nonatomic) NSString *hashKey; // @synthesize hashKey;
- (_Bool)isEqual:(id)arg1;	// IMP=0x001000000011294e
- (id)description;	// IMP=0x001000000011289f
- (unsigned long long)hash;	// IMP=0x001000000011285b
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x0010000000112428

@end
