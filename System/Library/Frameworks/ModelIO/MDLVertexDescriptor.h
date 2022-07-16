//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <ModelIO/NSCopying-Protocol.h>

@class NSMutableArray;

@interface MDLVertexDescriptor : NSObject <NSCopying>
{
    NSMutableArray *_attributes;	// 8 = 0x8
    NSMutableArray *_layouts;	// 16 = 0x10
}

+ (id)decodeVertexDescriptorWithCoder:(id)arg1;	// IMP=0x000000000040536e
+ (id)_decodeVertexDescriptorLayoutsWithCoder:(id)arg1;	// IMP=0x0000000000405146
+ (id)_decodeVertexDescriptorAttributesWithCoder:(id)arg1;	// IMP=0x0000000000404dde
- (void).cxx_destruct;	// IMP=0x000000000040548d
@property(retain, nonatomic) NSMutableArray *layouts; // @synthesize layouts=_layouts;
@property(retain, nonatomic) NSMutableArray *attributes; // @synthesize attributes=_attributes;
- (void)encodeVertexDescriptorWithCoder:(id)arg1;	// IMP=0x0000000000405311
- (void)_encodeVertexDescriptorAttributesWithCoder:(id)arg1;	// IMP=0x0000000000404a03
- (void)_encodeVertexDescriptorLayoutsWithCoder:(id)arg1;	// IMP=0x0000000000404800
- (id)description;	// IMP=0x000000000040447c
- (unsigned long long)hash;	// IMP=0x000000000040443d
- (_Bool)isEqual:(id)arg1;	// IMP=0x000000000040437d
- (void)debugPrintToFile:(struct __sFILE *)arg1;	// IMP=0x0000000000403ebb
- (void)setPackedOffsets;	// IMP=0x0000000000403a15
- (void)setPackedStrides;	// IMP=0x000000000040346c
- (void)reset;	// IMP=0x0000000000403358
- (void)removeAttributeNamed:(id)arg1;	// IMP=0x0000000000403146
- (void)addOrReplaceAttribute:(id)arg1;	// IMP=0x0000000000402df4
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x0000000000402dc6
- (id)attributeNamed:(id)arg1;	// IMP=0x0000000000402b66
- (id)initWithVertexDescriptor:(id)arg1;	// IMP=0x00000000004026cd
- (id)init;	// IMP=0x0000000000402557

@end

