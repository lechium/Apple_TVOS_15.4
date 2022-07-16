//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class MPIdentifierSet, MPModelFileAsset;

@interface MPModelVerifyLocalFileAssetIntegrityRequest : NSObject
{
    MPIdentifierSet *_sourceItemIdentifiers;	// 8 = 0x8
    MPModelFileAsset *_fileAsset;	// 16 = 0x10
}

+ (id)_operationQueue;	// IMP=0x000000000018bd56
- (void).cxx_destruct;	// IMP=0x000000000018bc98
@property(retain, nonatomic) MPModelFileAsset *fileAsset; // @synthesize fileAsset=_fileAsset;
@property(retain, nonatomic) MPIdentifierSet *sourceItemIdentifiers; // @synthesize sourceItemIdentifiers=_sourceItemIdentifiers;
- (id)mediaLibraryForItemIdentifiers:(id)arg1;	// IMP=0x000000000018ba07
- (void)performWithResponseHandler:(CDUnknownBlockType)arg1;	// IMP=0x000000000018b8b6
- (id)initWithFileAsset:(id)arg1 sourceItemIdentifiers:(id)arg2;	// IMP=0x000000000018b81d

@end
