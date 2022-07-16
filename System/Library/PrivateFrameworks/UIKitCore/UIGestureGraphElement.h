//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSMutableDictionary, NSString;

__attribute__((visibility("hidden")))
@interface UIGestureGraphElement : NSObject
{
    NSMutableDictionary *_properties;	// 8 = 0x8
    NSString *_label;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x00000000006b1b5c
@property(readonly, copy, nonatomic) NSString *label; // @synthesize label=_label;
- (void)setObject:(id)arg1 forKeyedSubscript:(id)arg2;	// IMP=0x00000000006b1b40
- (id)objectForKeyedSubscript:(id)arg1;	// IMP=0x00000000006b1b2e
- (id)description;	// IMP=0x00000000006b17cd
- (void)setProperties:(id)arg1;	// IMP=0x00000000006b1773
- (void)setProperty:(id)arg1 forKey:(id)arg2;	// IMP=0x00000000006b16f3
- (void)removeAllProperties;	// IMP=0x00000000006b16dd
- (void)removePropertyForKey:(id)arg1;	// IMP=0x00000000006b16c7
- (void)enumeratePropertiesUsingBlock:(CDUnknownBlockType)arg1;	// IMP=0x00000000006b16b1
- (_Bool)hasProperties:(id)arg1;	// IMP=0x00000000006b1533
- (id)propertyForKey:(id)arg1;	// IMP=0x00000000006b151d
- (id)initWithLabel:(id)arg1;	// IMP=0x00000000006b142d

@end

