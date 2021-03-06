//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <IMFoundation/NSCopying-Protocol.h>

@interface IMPair : NSObject <NSCopying>
{
    id _first;	// 8 = 0x8
    id _second;	// 16 = 0x10
}

+ (id)pairWithFirst:(id)arg1 second:(id)arg2;	// IMP=0x0000000000002072
- (void).cxx_destruct;	// IMP=0x00000000000023f4
@property(retain) id second; // @synthesize second=_second;
@property(retain) id first; // @synthesize first=_first;
- (id)description;	// IMP=0x00000000000022f8
- (_Bool)isEqual:(id)arg1;	// IMP=0x00000000000021cf
- (unsigned long long)hash;	// IMP=0x0000000000002142
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x0000000000002137
- (void)dealloc;	// IMP=0x00000000000020de
- (id)initWithFirst:(id)arg1 second:(id)arg2;	// IMP=0x0000000000001fd4

@end

