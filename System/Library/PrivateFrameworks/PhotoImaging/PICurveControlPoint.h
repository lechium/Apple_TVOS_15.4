//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <PhotoImaging/NSCopying-Protocol.h>

@interface PICurveControlPoint : NSObject <NSCopying>
{
    _Bool _editable;	// 8 = 0x8
    double _x;	// 16 = 0x10
    double _y;	// 24 = 0x18
}

@property(readonly, nonatomic, getter=isEditable) _Bool editable; // @synthesize editable=_editable;
@property(readonly, nonatomic) double y; // @synthesize y=_y;
@property(readonly, nonatomic) double x; // @synthesize x=_x;
- (id)description;	// IMP=0x000000000000d5fc
- (_Bool)isEqual:(id)arg1;	// IMP=0x000000000000d510
- (unsigned long long)hash;	// IMP=0x000000000000d421
- (id)dictionaryRepresentation;	// IMP=0x000000000000d2cb
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x000000000000d2c0
- (id)initWithDictionary:(id)arg1;	// IMP=0x000000000000d1b0
- (id)initWithX:(double)arg1 y:(double)arg2 editable:(_Bool)arg3;	// IMP=0x000000000000d15c

@end

