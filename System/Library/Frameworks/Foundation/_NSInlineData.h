//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Foundation/NSData.h>

__attribute__((visibility("hidden")))
@interface _NSInlineData : NSData
{
    unsigned short _length;	// 8 = 0x8
}

- (_Bool)_providesConcreteBacking;	// IMP=0x000000000003c6c1
- (id)_createDispatchData;	// IMP=0x000000000003c6b5
- (id)initWithCoder:(id)arg1;	// IMP=0x000000000003c5f8
- (id)initWithBytes:(const void *)arg1 length:(unsigned long long)arg2;	// IMP=0x000000000003c591
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x000000000003c586
- (_Bool)_isCompact;	// IMP=0x000000000003c57e
- (const void *)bytes;	// IMP=0x000000000003c574
- (unsigned long long)length;	// IMP=0x000000000003c563

@end

