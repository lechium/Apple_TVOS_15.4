//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <PhotosUICore/NSCopying-Protocol.h>

@class UIColor;

@interface PXGGradient : NSObject <NSCopying>
{
    UIColor *_startingColor;	// 8 = 0x8
    UIColor *_endingColor;	// 16 = 0x10
    long long _direction;	// 24 = 0x18
}

- (void).cxx_destruct;	// IMP=0x00000000004d567a
@property(readonly, nonatomic) long long direction; // @synthesize direction=_direction;
@property(readonly, copy, nonatomic) UIColor *endingColor; // @synthesize endingColor=_endingColor;
@property(readonly, copy, nonatomic) UIColor *startingColor; // @synthesize startingColor=_startingColor;
- (id)description;	// IMP=0x00000000004d55dc
- (_Bool)isEqual:(id)arg1;	// IMP=0x00000000004d545d
- (unsigned long long)hash;	// IMP=0x00000000004d53cd
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x00000000004d53c2
- (id)initWithStartingColor:(id)arg1 endingColor:(id)arg2 direction:(long long)arg3;	// IMP=0x00000000004d531d
- (id)init;	// IMP=0x00000000004d5290

@end

