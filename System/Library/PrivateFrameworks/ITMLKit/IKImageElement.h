//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class IKSrcSetRule, NSArray, NSDictionary, NSURL, UIColor;

@interface IKImageElement
{
    double _srcWidth;	// 8 = 0x8
    double _srcHeight;	// 16 = 0x10
    IKImageElement *_fallbackImageElement;	// 24 = 0x18
    NSDictionary *_srcset;	// 32 = 0x20
    unsigned long long _imageType;	// 40 = 0x28
    double _aspectRatio;	// 48 = 0x30
    NSURL *_resolvedURL;	// 56 = 0x38
    NSArray *_srcsetRules;	// 64 = 0x40
    IKSrcSetRule *_bestRule;	// 72 = 0x48
}

+ (unsigned long long)_imageTypeForTagName:(id)arg1;	// IMP=0x0000000000039d93
+ (_Bool)shouldParseChildDOMElements;	// IMP=0x000000000003921b
- (void).cxx_destruct;	// IMP=0x000000000003a627
@property(retain, nonatomic) IKSrcSetRule *bestRule; // @synthesize bestRule=_bestRule;
@property(retain, nonatomic) NSArray *srcsetRules; // @synthesize srcsetRules=_srcsetRules;
@property(retain, nonatomic) NSURL *resolvedURL; // @synthesize resolvedURL=_resolvedURL;
@property(readonly, nonatomic) double aspectRatio; // @synthesize aspectRatio=_aspectRatio;
@property(readonly, nonatomic) unsigned long long imageType; // @synthesize imageType=_imageType;
@property(readonly, retain, nonatomic) NSDictionary *srcset; // @synthesize srcset=_srcset;
- (void)_resolveURL;	// IMP=0x000000000003a177
- (void)_initCommon;	// IMP=0x0000000000039e20
- (void)_parseSrcset:(id)arg1;	// IMP=0x0000000000039842
- (void)appDocumentDidMarkStylesDirty;	// IMP=0x00000000000397c6
@property(readonly, nonatomic) long long reflect;
@property(readonly, nonatomic) long long fill;
@property(readonly, nonatomic) UIColor *borderColor;
@property(readonly, nonatomic) unsigned long long position;
@property(readonly, retain, nonatomic) NSURL *placeholderURL;
@property(readonly, nonatomic) double height;
@property(readonly, nonatomic) double width;
@property(readonly, nonatomic) NSURL *url;
@property(readonly, nonatomic) IKImageElement *fallbackImageElement; // @synthesize fallbackImageElement=_fallbackImageElement;
- (id)initWithOriginalElement:(id)arg1;	// IMP=0x0000000000039386
- (id)initWithPrototypeElement:(id)arg1 parent:(id)arg2 appDataItem:(id)arg3;	// IMP=0x00000000000392ee
- (id)initWithDOMElement:(id)arg1 parent:(id)arg2 elementFactory:(id)arg3;	// IMP=0x0000000000039223

@end

