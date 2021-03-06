//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <MediaRemote/NSCopying-Protocol.h>

@class _MRColorProtobuf;

@interface MRColorComponents : NSObject <NSCopying>
{
    float _red;	// 8 = 0x8
    float _green;	// 12 = 0xc
    float _blue;	// 16 = 0x10
    float _alpha;	// 20 = 0x14
}

@property(nonatomic) float alpha; // @synthesize alpha=_alpha;
@property(nonatomic) float blue; // @synthesize blue=_blue;
@property(nonatomic) float green; // @synthesize green=_green;
@property(nonatomic) float red; // @synthesize red=_red;
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x00000000001bb163
- (_Bool)isEqual:(id)arg1;	// IMP=0x00000000001baff8
- (id)description;	// IMP=0x00000000001baf43
@property(readonly, nonatomic) _MRColorProtobuf *protobuf;
- (id)initWithProtobuf:(id)arg1;	// IMP=0x00000000001bae06

@end

