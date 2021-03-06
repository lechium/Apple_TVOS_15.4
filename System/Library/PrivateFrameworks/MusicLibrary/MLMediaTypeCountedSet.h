//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@interface MLMediaTypeCountedSet : NSObject
{
    struct map<unsigned int, unsigned long, std::less<unsigned int>, std::allocator<std::pair<const unsigned int, unsigned long>>> _map;	// 8 = 0x8
}

- (id).cxx_construct;	// IMP=0x000000000012664f
- (void).cxx_destruct;	// IMP=0x0000000000126641
- (void)enumerateMediaTypesWithBlock:(CDUnknownBlockType)arg1;	// IMP=0x000000000012657a
- (void)addMediaType:(unsigned int)arg1 count:(unsigned long long)arg2;	// IMP=0x00000000001264bb
@property(readonly, nonatomic) unsigned long long count;
- (id)description;	// IMP=0x0000000000126321

@end

