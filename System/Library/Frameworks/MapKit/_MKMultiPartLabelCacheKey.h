//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <MapKit/NSCopying-Protocol.h>

@class NSAttributedString;

__attribute__((visibility("hidden")))
@interface _MKMultiPartLabelCacheKey : NSObject <NSCopying>
{
    NSAttributedString *_attributedString;	// 8 = 0x8
    struct CGSize _size;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x0000000000234755
@property(readonly, nonatomic) struct CGSize size; // @synthesize size=_size;
@property(readonly, copy, nonatomic) NSAttributedString *attributedString; // @synthesize attributedString=_attributedString;
- (id)description;	// IMP=0x0000000000234680
- (unsigned long long)hash;	// IMP=0x000000000023443c
- (_Bool)isEqual:(id)arg1;	// IMP=0x00000000002342b3
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x0000000000234279
- (id)initWithAttributedString:(id)arg1 size:(struct CGSize)arg2;	// IMP=0x00000000002341e8

@end
