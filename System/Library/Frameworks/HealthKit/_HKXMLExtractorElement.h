//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSDictionary, NSString;

__attribute__((visibility("hidden")))
@interface _HKXMLExtractorElement : NSObject
{
    NSString *_specificationElement;	// 8 = 0x8
    NSDictionary *_specificationAttributes;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x00000000001b3c2d
@property(readonly, copy) NSDictionary *specificationAttributes; // @synthesize specificationAttributes=_specificationAttributes;
@property(readonly, copy) NSString *specificationElement; // @synthesize specificationElement=_specificationElement;
- (_Bool)matchesElement:(id)arg1;	// IMP=0x00000000001b391a
- (id)initWithElementName:(id)arg1 attributes:(id)arg2;	// IMP=0x00000000001b3861
- (id)initWithTagSpecification:(id)arg1;	// IMP=0x00000000001b3522

@end

