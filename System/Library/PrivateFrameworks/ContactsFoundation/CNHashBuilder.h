//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@interface CNHashBuilder : NSObject
{
}

+ (unsigned long long)cgrectHash:(struct CGRect)arg1;	// IMP=0x000000000003b857
+ (unsigned long long)cgsizeHash:(struct CGSize)arg1;	// IMP=0x000000000003b7fb
+ (unsigned long long)cgpointHash:(struct CGPoint)arg1;	// IMP=0x000000000003b79f
+ (unsigned long long)cgfloatHash:(double)arg1;	// IMP=0x000000000003b794
+ (unsigned long long)unsignedIntegerHash:(unsigned long long)arg1;	// IMP=0x000000000003b78b
+ (unsigned long long)integerHash:(long long)arg1;	// IMP=0x000000000003b77b
+ (unsigned long long)boolHash:(_Bool)arg1;	// IMP=0x000000000003b773
+ (unsigned long long)dictionaryHash:(id)arg1;	// IMP=0x000000000003b5c0
+ (unsigned long long)orderedSetHash:(id)arg1;	// IMP=0x000000000003b562
+ (unsigned long long)setHash:(id)arg1;	// IMP=0x000000000003b45b
+ (unsigned long long)arrayHash:(id)arg1;	// IMP=0x000000000003b2f7
+ (unsigned long long)pointerHash:(void *)arg1;	// IMP=0x000000000003b2ee
+ (unsigned long long)objectHash:(id)arg1;	// IMP=0x000000000003b2d0
+ (unsigned long long)hashWithBlocks:(CDUnknownBlockType)arg1;	// IMP=0x000000000003b1a8

@end

