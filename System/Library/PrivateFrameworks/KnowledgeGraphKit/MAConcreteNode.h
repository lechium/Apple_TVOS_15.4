//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSMutableDictionary, NSString;

@interface MAConcreteNode
{
    NSMutableDictionary *_properties;	// 8 = 0x8
    unsigned short _domain;	// 16 = 0x10
    float _weight;	// 20 = 0x14
    NSString *_label;	// 24 = 0x18
}

- (void).cxx_destruct;	// IMP=0x00000000000c566b
- (id)label;	// IMP=0x00000000000c565a
- (float)weight;	// IMP=0x00000000000c5648
- (unsigned short)domain;	// IMP=0x00000000000c5637
- (unsigned long long)memoryFootprint:(id)arg1;	// IMP=0x00000000000c556e
- (void)enumeratePropertiesUsingBlock:(CDUnknownBlockType)arg1;	// IMP=0x00000000000c533c
- (id)propertyDictionary;	// IMP=0x00000000000c52ca
- (id)propertyKeys;	// IMP=0x00000000000c51ec
- (unsigned long long)propertiesCount;	// IMP=0x00000000000c518d
- (_Bool)hasProperties;	// IMP=0x00000000000c512a
- (id)propertyForKey:(id)arg1;	// IMP=0x00000000000c508d
- (id)initWithLabel:(id)arg1 domain:(unsigned short)arg2 weight:(float)arg3 properties:(id)arg4;	// IMP=0x00000000000c4fa2

@end

