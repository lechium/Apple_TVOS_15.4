//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSData, NSDictionary, NSString, PLJournalEntryPayload;

@interface PLAssetJournalEntryPayloadResource : NSObject
{
    NSDictionary *_payloadAttributes;	// 8 = 0x8
    PLJournalEntryPayload *_payload;	// 16 = 0x10
}

+ (_Bool)isValidForPersistenceWithRecipeID:(unsigned int)arg1;	// IMP=0x0000000000440cb6
+ (void)_applyLargeVideoRecipeRefactorFixToExternalResource:(id)arg1 withAsset:(id)arg2;	// IMP=0x00000000004409e0
- (void).cxx_destruct;	// IMP=0x00000000004409b8
@property(readonly, nonatomic) NSDictionary *payloadAttributes; // @synthesize payloadAttributes=_payloadAttributes;
- (id)description;	// IMP=0x0000000000440998
- (_Bool)isValidForPersistence;	// IMP=0x0000000000440954
- (_Bool)isReferenceResource;	// IMP=0x00000000004408e8
- (_Bool)isAdjusted;	// IMP=0x00000000004408ae
- (_Bool)isOriginalResource;	// IMP=0x0000000000440874
- (short)trashedState;	// IMP=0x0000000000440824
@property(readonly, nonatomic) NSString *bookmarkPath;
@property(readonly, nonatomic) NSData *bookmarkData;
@property(readonly, nonatomic) NSString *volumeUuidString;
- (id)fourCharCodeName;	// IMP=0x000000000044075f
@property(readonly, nonatomic) NSString *uniformTypeIdentifier;
@property(readonly, nonatomic) unsigned int recipeID;
@property(readonly, nonatomic) unsigned int version;
@property(readonly, nonatomic) unsigned int resourceType;
@property(readonly, nonatomic) unsigned short dataStoreClassID;
@property(readonly, nonatomic) unsigned long long cplType;
- (void)mergePayloadResource:(id)arg1 nilAttributes:(id)arg2;	// IMP=0x00000000004404a8
- (_Bool)isEqualToPayloadResource:(id)arg1;	// IMP=0x0000000000440338
- (void)appendToDescriptionBuilder:(id)arg1;	// IMP=0x000000000043fd2f
- (void)updateStoredResource:(id)arg1;	// IMP=0x000000000043fa7f
- (id)validatedExternalResourceWithAsset:(id)arg1 isCPLEnabled:(_Bool)arg2;	// IMP=0x000000000043ef85
- (id)initWithPayloadAttributes:(id)arg1 payload:(id)arg2;	// IMP=0x000000000043eeec

@end

