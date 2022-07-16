//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Foundation/NSURL.h>

@interface NSURL (BUAdditions)
+ (id)bu_jsRootURL;	// IMP=0x000000000002a8b1
+ (id)bu_queryStringForDictionary:(id)arg1 escapedValues:(_Bool)arg2;	// IMP=0x000000000002a5ea
+ (id)bu_URLQueryParameterValueAllowedCharacterSet;	// IMP=0x000000000002a53e
+ (id)bu_dictionaryForQueryString:(id)arg1 unescapedValues:(_Bool)arg2;	// IMP=0x000000000002a271
+ (id)bu_booksRepositoryURL;	// IMP=0x0000000000028b07
+ (id)bu_mediaURL;	// IMP=0x0000000000028a51
+ (id)bu_booksGroupContainerDocumentsURL;	// IMP=0x00000000000289ed
+ (id)bu_booksGroupContainerURL;	// IMP=0x0000000000028996
+ (id)bu_urlWithAssetID:(id)arg1;	// IMP=0x00000000000288b6
- (id)bu_dictionaryForQueryItems;	// IMP=0x000000000002a039
- (long long)bu_storeURLTypeFromHost:(id)arg1;	// IMP=0x0000000000029f8e
- (id)bu_utType;	// IMP=0x0000000000029e16
- (_Bool)bu_isFolder;	// IMP=0x0000000000029d84
- (_Bool)bu_isDirectory;	// IMP=0x0000000000029cf2
- (id)bu_isbnForURI;	// IMP=0x0000000000029a1f
- (_Bool)bu_isContainedWithinFileURL:(id)arg1;	// IMP=0x00000000000297a5
- (id)bu_identifierFromPermlink;	// IMP=0x0000000000029726
- (unsigned long long)bu_fileAllocatedSizeWithError:(id *)arg1;	// IMP=0x000000000002928d
- (void)bu_storeURLForISBNURNWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x0000000000028ff3
- (id)bu_storeURLForISBNURN;	// IMP=0x0000000000028f49
- (id)bu_libraryIDFromURL;	// IMP=0x0000000000028ea6
- (id)bu_assetIDFromURL;	// IMP=0x0000000000028dd1
- (long long)bu_storeURLType;	// IMP=0x0000000000028c78
@end
