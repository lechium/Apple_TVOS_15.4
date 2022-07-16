//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <RelevanceEngine/NSCopying-Protocol.h>

@class NSArray, NSData, NSDictionary;

@interface REHTMLElement : NSObject <NSCopying>
{
    NSData *_data;	// 8 = 0x8
}

+ (unsigned long long)_defaultStringEncoding;	// IMP=0x000000000003da7a
+ (id)h6:(id)arg1;	// IMP=0x000000000003da37
+ (id)h5:(id)arg1;	// IMP=0x000000000003da1b
+ (id)h4:(id)arg1;	// IMP=0x000000000003d9ff
+ (id)h3:(id)arg1;	// IMP=0x000000000003d9e3
+ (id)h2:(id)arg1;	// IMP=0x000000000003d9c7
+ (id)h1:(id)arg1;	// IMP=0x000000000003d9ab
+ (id)nav;	// IMP=0x000000000003d98b
+ (id)script:(id)arg1;	// IMP=0x000000000003d96f
+ (id)div;	// IMP=0x000000000003d94f
+ (id)link:(id)arg1 title:(id)arg2;	// IMP=0x000000000003d8b1
+ (id)htmlElementWithTag:(id)arg1 content:(id)arg2;	// IMP=0x000000000003d841
+ (id)elementWithHTMLString:(id)arg1;	// IMP=0x000000000003d7f4
+ (id)elementWithHTMLData:(id)arg1;	// IMP=0x000000000003d7a7
- (void).cxx_destruct;	// IMP=0x000000000003e403
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x000000000003e3ca
- (id)addChildren:(id)arg1;	// IMP=0x000000000003e35a
- (id)addChild:(id)arg1;	// IMP=0x000000000003e28b
- (id)append:(id)arg1;	// IMP=0x000000000003e1b8
- (id)elementBySettingAtttibutes:(id)arg1;	// IMP=0x000000000003e1af
- (id)elementByAddingAtttibutes:(id)arg1;	// IMP=0x000000000003e0e8
- (id)elementByAddingAtttibute:(id)arg1 value:(id)arg2;	// IMP=0x000000000003e007
@property(readonly, nonatomic) NSDictionary *attributes;
- (id)elementBySettingClasses:(id)arg1;	// IMP=0x000000000003dff1
- (id)elementByAddingClasses:(id)arg1;	// IMP=0x000000000003df49
- (id)elementByAddingClass:(id)arg1;	// IMP=0x000000000003de8d
@property(readonly, nonatomic) NSArray *classes;
@property(readonly, nonatomic) NSData *encodedData;
- (id)_encodedData;	// IMP=0x000000000003db01
- (id)_encodeString:(id)arg1;	// IMP=0x000000000003da85
- (id)_suffixContentString;	// IMP=0x000000000003da6d
- (id)_contentString;	// IMP=0x000000000003da60
- (id)_prefixContentString;	// IMP=0x000000000003da53
- (id)init;	// IMP=0x000000000003d759

@end

