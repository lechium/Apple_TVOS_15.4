//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSString;

@interface CAStateRemoveAnimation
{
    NSString *_key;	// 24 = 0x18
}

+ (_Bool)supportsSecureCoding;	// IMP=0x000000000003ccb0
@property(copy, nonatomic) NSString *key; // @synthesize key=_key;
- (id)debugDescription;	// IMP=0x000000000003cc0e
- (void)dealloc;	// IMP=0x000000000003cba9
- (id)initWithCoder:(id)arg1;	// IMP=0x000000000003cafd
- (void)encodeWithCoder:(id)arg1;	// IMP=0x000000000003ca80
- (id)CAMLTypeForKey:(id)arg1;	// IMP=0x000000000003c9fe
- (void)encodeWithCAMLWriter:(id)arg1;	// IMP=0x000000000003c97c
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x000000000003c91e
- (void)apply:(id)arg1;	// IMP=0x000000000003c7e6
- (_Bool)matches:(id)arg1;	// IMP=0x000000000003c73b
- (id)keyPath;	// IMP=0x000000000003c705

@end
