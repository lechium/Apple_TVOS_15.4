//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@interface SSWeakReference : NSObject
{
    id _object;	// 8 = 0x8
    unsigned long long _objectAddress;	// 16 = 0x10
}

+ (id)weakReferenceWithObject:(id)arg1;	// IMP=0x00000000000dafb4
- (_Bool)isEqual:(id)arg1;	// IMP=0x00000000000daffa
- (unsigned long long)hash;	// IMP=0x00000000000daff0
@property(readonly, nonatomic) id object;
- (void)dealloc;	// IMP=0x00000000000daf78

@end

