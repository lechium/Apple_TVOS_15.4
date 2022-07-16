//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@interface RWIProtocolJSONObject : NSObject
{
    struct RefPtr<WTF::JSONImpl::Object, WTF::RawPtrTraits<WTF::JSONImpl::Object>, WTF::DefaultRefDerefTraits<WTF::JSONImpl::Object>> _object;	// 8 = 0x8
}

- (id).cxx_construct;	// IMP=0x0000000000038910
- (void).cxx_destruct;	// IMP=0x00000000000388dd
- (RefPtr_2055800f)JSONArrayForKey:(id)arg1;	// IMP=0x0000000000038851
- (void)setJSONArray:(void *)arg1 forKey:(id)arg2;	// IMP=0x0000000000038714
- (void)removeKey:(id)arg1;	// IMP=0x000000000003869b
- (id)objectForKey:(id)arg1;	// IMP=0x0000000000038531
- (id)stringForKey:(id)arg1;	// IMP=0x0000000000038455
- (double)doubleForKey:(id)arg1;	// IMP=0x00000000000383c4
- (int)integerForKey:(id)arg1;	// IMP=0x0000000000038330
- (_Bool)boolForKey:(id)arg1;	// IMP=0x000000000003829d
- (void)setObject:(id)arg1 forKey:(id)arg2;	// IMP=0x00000000000380c1
- (void)setString:(id)arg1 forKey:(id)arg2;	// IMP=0x0000000000037ef6
- (void)setDouble:(double)arg1 forKey:(id)arg2;	// IMP=0x0000000000037dac
- (void)setInteger:(int)arg1 forKey:(id)arg2;	// IMP=0x0000000000037c62
- (void)setBool:(_Bool)arg1 forKey:(id)arg2;	// IMP=0x0000000000037b17
- (Ref_7d1fb691)toJSONObject;	// IMP=0x0000000000037b04
- (id)initWithJSONObject:(void *)arg1;	// IMP=0x0000000000037a90
- (id)init;	// IMP=0x00000000000379ec

@end
