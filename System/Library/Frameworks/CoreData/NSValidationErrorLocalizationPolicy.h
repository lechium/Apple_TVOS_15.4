//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <CoreData/NSCopying-Protocol.h>

@class NSBundle, NSDictionary, NSString, NSURL;

__attribute__((visibility("hidden")))
@interface NSValidationErrorLocalizationPolicy : NSObject <NSCopying>
{
    NSURL *_url;	// 8 = 0x8
    NSBundle *_localizationBundle;	// 16 = 0x10
    NSString *_modelStringsFileName;	// 24 = 0x18
    NSDictionary *_localizationDictionary;	// 32 = 0x20
    _Bool _hasSetLocalizationDictionary;	// 40 = 0x28
}

- (id)localizedModelStringForKey:(id)arg1;	// IMP=0x00000000001e6cb5
- (id)localizedPropertyNameForProperty:(id)arg1;	// IMP=0x00000000001e6c2d
- (id)localizedEntityNameForEntity:(id)arg1;	// IMP=0x00000000001e6ae4
- (void)setLocalizationDictionary:(id)arg1;	// IMP=0x00000000001e6a9f
- (id)localizationDictionary;	// IMP=0x00000000001e6a81
- (id)_cachedObjectForKey:(id)arg1 value:(void *)arg2;	// IMP=0x00000000001e69ec
- (void)_ensureFullLocalizationDictionaryIsLoaded;	// IMP=0x00000000001e684b
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x00000000001e67c4
- (void)dealloc;	// IMP=0x00000000001e676c
- (id)initWithURL:(id)arg1;	// IMP=0x00000000001e670d

@end

