//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <PhotosUICore/NSCopying-Protocol.h>

@class NSArray;

@interface PXTuple : NSObject <NSCopying>
{
    unsigned long long _hash;	// 8 = 0x8
    NSArray *_objects;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x000000000044a77e
@property(readonly, nonatomic) NSArray *objects; // @synthesize objects=_objects;
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x000000000044a769
- (id)description;	// IMP=0x000000000044a6a3
- (_Bool)isEqual:(id)arg1;	// IMP=0x000000000044a5dd
- (unsigned long long)hash;	// IMP=0x000000000044a5d3
- (id)initWithObjects:(id)arg1;	// IMP=0x000000000044a2d1
- (id)init;	// IMP=0x000000000044a257

@end

