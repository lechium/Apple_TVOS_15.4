//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <ModelIO/NSCopying-Protocol.h>

@interface MDLVertexBufferLayout : NSObject <NSCopying>
{
    unsigned long long _stride;	// 8 = 0x8
}

@property(nonatomic) unsigned long long stride; // @synthesize stride=_stride;
- (id)description;	// IMP=0x0000000000401bf1
- (unsigned long long)hash;	// IMP=0x0000000000401be7
- (_Bool)isEqual:(id)arg1;	// IMP=0x0000000000401b76
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x0000000000401b3d
- (id)initWithStride:(unsigned long long)arg1;	// IMP=0x0000000000401ae4

@end

