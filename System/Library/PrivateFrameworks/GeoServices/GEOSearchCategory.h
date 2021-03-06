//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <GeoServices/NSSecureCoding-Protocol.h>

@class GEOFeatureStyleAttributes, GEOPDAutocompleteEntry, GEOPDBrowseCategory, NSArray, NSData, NSString, NSURL;
@protocol GEOVenueIdentifier;

@interface GEOSearchCategory : NSObject <NSSecureCoding>
{
    GEOPDBrowseCategory *_browseCategory;	// 8 = 0x8
    GEOPDAutocompleteEntry *_autocompleteEntry;	// 16 = 0x10
    NSArray *_subcategories;	// 24 = 0x18
}

+ (id)categoryForURL:(id)arg1;	// IMP=0x0000000000f6cfc4
+ (_Bool)supportsSecureCoding;	// IMP=0x0000000000f6c64d
+ (void)sendFeedbackForVisibleCategories:(id)arg1;	// IMP=0x0000000000f6d762
- (void).cxx_destruct;	// IMP=0x0000000000f6d535
@property(readonly, nonatomic) NSArray *subcategories; // @synthesize subcategories=_subcategories;
@property(readonly, nonatomic, getter=_autocompleteEntry) GEOPDAutocompleteEntry *autocompleteEntry; // @synthesize autocompleteEntry=_autocompleteEntry;
@property(readonly, nonatomic, getter=isSubCategorySameAsTopLevel) _Bool subCategorySameAsTopLevel;
@property(readonly, nonatomic) int subCategoryType;
@property(readonly, nonatomic) int sortOrder;
@property(readonly, nonatomic) int displayMode;
- (id)_browseCategory;	// IMP=0x0000000000f6d453
@property(readonly, nonatomic) NSURL *mapsURL;
@property(readonly, nonatomic) id <GEOVenueIdentifier> venueIdentifier;
@property(readonly, nonatomic) GEOFeatureStyleAttributes *styleAttributes;
@property(readonly, nonatomic, getter=_suggestionEntryMetadata) NSData *suggestionEntryMetadata;
@property(readonly, nonatomic) NSString *popularTokenString;
@property(readonly, nonatomic) NSString *shortDisplayString;
@property(readonly, nonatomic) NSString *displayString;
- (unsigned long long)hash;	// IMP=0x0000000000f6cb3e
- (_Bool)isEqual:(id)arg1;	// IMP=0x0000000000f6cad5
- (void)encodeWithCoder:(id)arg1;	// IMP=0x0000000000f6ca3b
- (id)initWithCoder:(id)arg1;	// IMP=0x0000000000f6c970
- (id)initWithAutocompleteEntry:(id)arg1;	// IMP=0x0000000000f6c8bf
- (id)initWithBrowseCategory:(id)arg1;	// IMP=0x0000000000f6c655
- (id)initWithStorage:(id)arg1;	// IMP=0x0000000000f6d69e
- (id)serverMetadata;	// IMP=0x0000000000f6da2a
- (void)sendFeedback;	// IMP=0x0000000000f6d965

@end

