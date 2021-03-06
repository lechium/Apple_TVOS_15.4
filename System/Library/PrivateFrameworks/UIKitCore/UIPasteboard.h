//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSArray, NSString, NSURL, UIColor, UIImage;

@interface UIPasteboard : NSObject
{
}

+ (void)_performAsDataOwnerForAction:(SEL)arg1 responder:(id)arg2 block:(CDUnknownBlockType)arg3;	// IMP=0x0000000000a89d0a
+ (void)_performAsDataOwner:(long long)arg1 block:(CDUnknownBlockType)arg2;	// IMP=0x0000000000a89c98
+ (void)_clearPinnedItemProvidersForPasteboardNamed:(id)arg1;	// IMP=0x0000000000a89bf4
+ (void)_pinItemProviders:(id)arg1 forPasteboardNamed:(id)arg2 withExpirationDate:(id)arg3;	// IMP=0x0000000000a89bee
+ (id)_pasteboardWithUniqueName;	// IMP=0x0000000000a89bd4
+ (id)_pasteboardWithName:(id)arg1 create:(_Bool)arg2;	// IMP=0x0000000000a89bcc
+ (void)removePasteboardWithName:(id)arg1;	// IMP=0x0000000000a89a81
+ (id)pasteboardWithUniqueName;	// IMP=0x0000000000a89a5c
+ (id)pasteboardWithName:(id)arg1 create:(_Bool)arg2;	// IMP=0x0000000000a89a4a
+ (id)generalPasteboard;	// IMP=0x0000000000a89a42
- (void)detectValuesForPatterns:(id)arg1 inItemSet:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;	// IMP=0x0000000000a89c7f
- (void)detectValuesForPatterns:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;	// IMP=0x0000000000a89c79
- (void)detectPatternsForPatterns:(id)arg1 inItemSet:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;	// IMP=0x0000000000a89c73
- (void)detectPatternsForPatterns:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;	// IMP=0x0000000000a89c6d
- (id)_detectedPasteboardTypeStringsForTypes:(id)arg1;	// IMP=0x0000000000a89c60
- (id)_detectedPasteboardTypesForTypes:(id)arg1;	// IMP=0x0000000000a89c47
- (_Bool)canInstantiateObjectsOfClass:(Class)arg1;	// IMP=0x0000000000a89c3f
- (id)itemProvidersForInstantiatingObjectsOfClass:(Class)arg1;	// IMP=0x0000000000a89c32
@property(copy, nonatomic) NSArray *itemProviders;
@property(readonly, copy, nonatomic) NSArray *availableTypes;
- (void)setObjects:(id)arg1 localOnly:(_Bool)arg2 expirationDate:(id)arg3;	// IMP=0x0000000000a89c12
- (void)setObjects:(id)arg1;	// IMP=0x0000000000a89c0c
- (void)setObjects:(id)arg1 options:(id)arg2;	// IMP=0x0000000000a89c06
- (void)_clearPinnedItemProviders;	// IMP=0x0000000000a89c00
- (void)_pinItemProviders:(id)arg1 expirationDate:(id)arg2;	// IMP=0x0000000000a89bfa
- (void)setItemProviders:(id)arg1 localOnly:(_Bool)arg2 expirationDate:(id)arg3;	// IMP=0x0000000000a89be8
- (void)setItemProviders:(id)arg1 options:(id)arg2;	// IMP=0x0000000000a89be2
- (_Bool)_hasStrings;	// IMP=0x0000000000a89bba
@property(readonly, nonatomic) _Bool hasColors;
@property(readonly, nonatomic) _Bool hasImages;
@property(readonly, nonatomic) _Bool hasURLs;
@property(readonly, nonatomic) _Bool hasStrings;
@property(copy, nonatomic) NSArray *colors;
@property(copy, nonatomic) NSArray *images;
@property(copy, nonatomic) NSArray *URLs;
@property(copy, nonatomic) NSArray *strings;
@property(copy, nonatomic) UIColor *color;
@property(copy, nonatomic) UIImage *image;
@property(copy, nonatomic) NSURL *URL;
@property(copy, nonatomic) NSString *string;
- (void)setItems:(id)arg1 options:(id)arg2;	// IMP=0x0000000000a89b24
- (void)addItems:(id)arg1;	// IMP=0x0000000000a89b1e
@property(copy, nonatomic) NSArray *items;
- (id)dataForPasteboardType:(id)arg1 inItemSet:(id)arg2;	// IMP=0x0000000000a89b08
- (id)valuesForPasteboardType:(id)arg1 inItemSet:(id)arg2;	// IMP=0x0000000000a89b00
- (id)itemSetWithPasteboardTypes:(id)arg1;	// IMP=0x0000000000a89af8
- (_Bool)containsPasteboardTypes:(id)arg1 inItemSet:(id)arg2;	// IMP=0x0000000000a89af0
- (id)pasteboardTypesForItemSet:(id)arg1;	// IMP=0x0000000000a89ae8
@property(readonly, nonatomic) long long numberOfItems;
- (void)setData:(id)arg1 forPasteboardType:(id)arg2;	// IMP=0x0000000000a89ada
- (void)setValue:(id)arg1 forPasteboardType:(id)arg2;	// IMP=0x0000000000a89ad4
- (id)valueForPasteboardType:(id)arg1;	// IMP=0x0000000000a89acc
- (id)dataForPasteboardType:(id)arg1;	// IMP=0x0000000000a89ac4
- (_Bool)containsPasteboardTypes:(id)arg1;	// IMP=0x0000000000a89abc
@property(readonly, nonatomic) NSArray *pasteboardTypes;
@property(readonly, nonatomic) long long _changeCountIgnoringPinningActivity;
@property(readonly, nonatomic) long long changeCount;
- (void)setPersistent:(_Bool)arg1;	// IMP=0x0000000000a89a8f
@property(readonly, nonatomic, getter=isPersistent) _Bool persistent;
- (void)setName:(id)arg1;	// IMP=0x0000000000a89a7b
@property(readonly, nonatomic) NSString *name;

@end

