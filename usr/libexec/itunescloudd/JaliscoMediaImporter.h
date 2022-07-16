//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class ICDJaliscoMediaFilter, MISSING_TYPE, NSArray;
@protocol ICDJaliscoSupportedMediaKindsHandler;

@interface JaliscoMediaImporter
{
    ICDJaliscoMediaFilter *_mediaFilter;	// 8 = 0x8
    NSArray *_supportedMediaKinds;	// 16 = 0x10
    id <ICDJaliscoSupportedMediaKindsHandler> _supportedMediaKindsHandler;	// 24 = 0x18
}

+ (id)oversizeLogCategory;	// IMP=0x00400000000c30ac
+ (id)logCategory;	// IMP=0x00100000000c30a2
- (void).cxx_destruct;	// IMP=0x00200000000c27ad
- (id)_supportedMediaKindsDatabasePropertyValue;	// IMP=0x00100000000c272c
- (id)_importTracksFromRevision:(unsigned int)arg1 toRevision:(unsigned int)arg2 withItemsResponse:(id)arg3 clientIdentity:(id)arg4;	// IMP=0x00100000000c1d4e
- (id)_chapterArtworkURLsForData:(id)arg1 baseURL:(id)arg2;	// IMP=0x00100000000c194a
- (id)_chapterDataFromURL:(id)arg1;	// IMP=0x00100000000c18bc
- (id)updateLibraryFromRevision:(unsigned int)arg1 toRevision:(unsigned int)arg2 withResponse:(id)arg3 clientIdentity:(id)arg4;	// IMP=0x00100000000c17f4
- (MISSING_TYPE *)clearNeedsUpdateForTokens;	// IMP=0x00100000000c17b5
- (_Bool)needsUpdateForTokens;	// IMP=0x00100000000c15ed
- (id)supportedMediaKinds;	// IMP=0x00100000000c1572
- (id)metadataKeys;	// IMP=0x00100000000c10e6
- (id)purchaseTokens;	// IMP=0x00100000000c0d06
- (id)queryFilter;	// IMP=0x00100000000c0cb6
- (id)mediaFilter;	// IMP=0x00100000000c0bf8
- (_Bool)includePreorders;	// IMP=0x00100000000c0bf0
- (unsigned int)onDiskRevision;	// IMP=0x00100000000c0bac
- (void)cancel;	// IMP=0x00100000000c0ac0
- (id)initWithConnection:(id)arg1 supportedMediaKindsHandler:(id)arg2;	// IMP=0x00100000000c0a48

@end

