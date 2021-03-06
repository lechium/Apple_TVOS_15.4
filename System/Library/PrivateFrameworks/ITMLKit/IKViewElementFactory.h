//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class IKViewElementRegistry, IKViewElementStyleFactory;

@interface IKViewElementFactory : NSObject
{
    struct {
        unsigned int sparse:1;
        unsigned int parsingUpdatedTree:1;
        unsigned int parsingReorderedSiblings:1;
        unsigned int parsingPartOfPrototype:1;
    } _parsingFlags;	// 8 = 0x8
    IKViewElementRegistry *_elementRegistry;	// 16 = 0x10
    IKViewElementStyleFactory *_styleFactory;	// 24 = 0x18
}

+ (_Bool)elementsForDocumentElement:(id)arg1 context:(id)arg2;	// IMP=0x00000000000866cd
+ (_Bool)isDependentByTagName:(id)arg1;	// IMP=0x0000000000086542
+ (Class)elementClassByTagName:(id)arg1;	// IMP=0x0000000000086461
+ (void)registerClass:(Class)arg1 forElementName:(id)arg2 elementType:(unsigned long long)arg3 dependent:(_Bool)arg4;	// IMP=0x0000000000086352
+ (void)registerClass:(Class)arg1 forElementName:(id)arg2 elementType:(unsigned long long)arg3;	// IMP=0x000000000008633d
+ (void)initialize;	// IMP=0x00000000000861e3
- (void).cxx_destruct;	// IMP=0x0000000000087acb
@property(retain, nonatomic) IKViewElementStyleFactory *styleFactory; // @synthesize styleFactory=_styleFactory;
- (id)elementForDOMElement:(id)arg1 parent:(id)arg2;	// IMP=0x0000000000087513
@property(nonatomic, getter=isSparse) _Bool sparse;
- (unsigned long long)elementTypeByTagName:(id)arg1;	// IMP=0x0000000000086668
- (Class)elementClassByTagName:(id)arg1;	// IMP=0x000000000008661f
- (id)initWithElementRegistry:(id)arg1;	// IMP=0x0000000000086178

@end

