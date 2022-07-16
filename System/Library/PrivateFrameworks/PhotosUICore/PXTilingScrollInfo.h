//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <PhotosUICore/NSCopying-Protocol.h>

@interface PXTilingScrollInfo : NSObject <NSCopying>
{
    _Bool _pagingEnabled;	// 8 = 0x8
    unsigned long long _axis;	// 16 = 0x10
    struct CGSize _interpageSpacing;	// 24 = 0x18
    struct CGPoint _pagingOrigin;	// 40 = 0x28
}

@property(nonatomic) struct CGPoint pagingOrigin; // @synthesize pagingOrigin=_pagingOrigin;
@property(nonatomic) struct CGSize interpageSpacing; // @synthesize interpageSpacing=_interpageSpacing;
@property(nonatomic, getter=isPagingEnabled) _Bool pagingEnabled; // @synthesize pagingEnabled=_pagingEnabled;
@property(nonatomic) unsigned long long axis; // @synthesize axis=_axis;
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x00000000008c0a48
- (_Bool)isEqual:(id)arg1;	// IMP=0x00000000008c08f3
- (unsigned long long)hash;	// IMP=0x00000000008c08ad

@end

