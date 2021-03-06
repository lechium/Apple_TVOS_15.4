//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class CoreThemeDocument;

@interface TDHistorian : NSObject
{
    CoreThemeDocument *document;	// 8 = 0x8
}

- (id)initWithDocument:(id)arg1;	// IMP=0x000000000004eee3
- (id)keySpecsForRenditionsRemovedSinceDate:(id)arg1;	// IMP=0x000000000004eea7
- (id)facetDefinitionsChangedSinceDate:(id)arg1;	// IMP=0x000000000004ee8b
- (id)namedElementsChangedSinceDate:(id)arg1;	// IMP=0x000000000004ee6f
- (id)fontSizesChangedSinceDate:(id)arg1;	// IMP=0x000000000004ee53
- (id)fontsChangedSinceDate:(id)arg1;	// IMP=0x000000000004ee37
- (id)colorsChangedSinceDate:(id)arg1;	// IMP=0x000000000004ee1b
- (id)productionsChangedSinceDate:(id)arg1 uuidNeedsReset:(_Bool *)arg2;	// IMP=0x000000000004ec57
- (id)productionsWithModifiedAssets;	// IMP=0x000000000004e5d1
- (_Bool)foundDataChangesSinceDate:(id)arg1;	// IMP=0x000000000004e450
- (void)updateEntriesForManagedObjects:(id)arg1;	// IMP=0x000000000004e3ab
- (void)_updateEntryForManagedObject:(id)arg1;	// IMP=0x000000000004e2e6
- (id)_updateRecordsWithName:(id)arg1 sinceDate:(id)arg2;	// IMP=0x000000000004e292

@end

