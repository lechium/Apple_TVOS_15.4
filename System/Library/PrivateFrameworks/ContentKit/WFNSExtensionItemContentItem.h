//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ContentKit/WFContentItemClass-Protocol.h>

@class NSArray, NSExtensionItem;

@interface WFNSExtensionItemContentItem <WFContentItemClass>
{
    NSArray *_extensionSubItems;	// 8 = 0x8
}

+ (id)countDescription;	// IMP=0x00000000000f8ce1
+ (id)pluralTypeDescription;	// IMP=0x00000000000f8cc9
+ (id)typeDescription;	// IMP=0x00000000000f8cb1
+ (id)contentCategories;	// IMP=0x00000000000f8c4a
+ (id)outputTypes;	// IMP=0x00000000000f8b4f
+ (id)ownedTypes;	// IMP=0x00000000000f8ad3
+ (_Bool)supportedTypeMustBeDeterminedByInstance:(id)arg1;	// IMP=0x00000000000f89ee
+ (id)itemWithObject:(id)arg1 sourceAppBundleIdentifier:(id)arg2;	// IMP=0x00000000000f87bb
- (void).cxx_destruct;	// IMP=0x00000000000f7cdc
@property(retain, nonatomic) NSArray *extensionSubItems; // @synthesize extensionSubItems=_extensionSubItems;
- (_Bool)cachesSupportedTypes;	// IMP=0x00000000000f7caf
- (void)preloadImportantItemsWithCompletionHandler:(CDUnknownBlockType)arg1;	// IMP=0x00000000000f7ab7
- (void)coerceToItemClasses:(id)arg1 options:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;	// IMP=0x00000000000f77c0
- (_Bool)canGenerateRepresentationForType:(id)arg1;	// IMP=0x00000000000f75f4
- (id)generateObjectRepresentationsForClass:(Class)arg1 options:(id)arg2 error:(id *)arg3;	// IMP=0x00000000000f743f
- (_Bool)itemProvidersSupportType:(id)arg1;	// IMP=0x00000000000f7257
- (id)name;	// IMP=0x00000000000f71fd
- (id)extensionItemName;	// IMP=0x00000000000f7183
- (id)itemProviders;	// IMP=0x00000000000f7133
- (id)itemProviderItems;	// IMP=0x00000000000f70c1
@property(readonly, nonatomic) NSExtensionItem *extensionItem;

@end

