//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

__attribute__((visibility("hidden")))
@interface IKDataSubscript
{
    long long _subscriptIndex;	// 8 = 0x8
}

@property(readonly, nonatomic) long long subscriptIndex; // @synthesize subscriptIndex=_subscriptIndex;
- (_Bool)isEqual:(id)arg1;	// IMP=0x00000000000c41e8
- (unsigned long long)hash;	// IMP=0x00000000000c41d6
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x00000000000c41cb
- (id)initWithSubscriptIndex:(long long)arg1;	// IMP=0x00000000000c4187

@end
