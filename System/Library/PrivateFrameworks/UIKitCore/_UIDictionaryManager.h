//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSArray;

__attribute__((visibility("hidden")))
@interface _UIDictionaryManager : NSObject
{
    NSArray *_availableDefinitionDictionaries;	// 8 = 0x8
}

+ (id)assetManager;	// IMP=0x00000000004335b0
- (void).cxx_destruct;	// IMP=0x00000000004348e8
@property(readonly) NSArray *availableDefinitionDictionaries; // @synthesize availableDefinitionDictionaries=_availableDefinitionDictionaries;
- (_Bool)_isTTYEnabled;	// IMP=0x00000000004348cc
- (id)_allAvailableDefinitionDictionaries;	// IMP=0x0000000000433d14
- (id)_availableDictionaryAssets;	// IMP=0x0000000000433c38
- (void)_downloadDictionaryAssetCatalog:(CDUnknownBlockType)arg1;	// IMP=0x0000000000433aeb
- (id)_dictionaryAssetType;	// IMP=0x00000000004339b2
- (id)_definitionValuesForTerm:(id)arg1;	// IMP=0x0000000000433747
- (_Bool)_hasDefinitionForTerm:(id)arg1;	// IMP=0x00000000004335ca
- (id)init;	// IMP=0x000000000043354e

@end

