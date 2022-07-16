//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <PhotosUICore/PXPersonSuggestion-Protocol.h>

@class CNContact, NSString, PHFetchResult, PHPerson, PXRecipientTransport;

@interface PXPhotoKitPersonSuggestion : NSObject <PXPersonSuggestion>
{
    _Bool _fetchQueue_checkedForLinkedContact;	// 8 = 0x8
    CNContact *_fetchQueue_linkedContact;	// 16 = 0x10
    CNContact *_fetchQueue_prefetchedContact;	// 24 = 0x18
    PXRecipientTransport *_fetchQueue_bestTransport;	// 32 = 0x20
    NSString *_localizedName;	// 40 = 0x28
    PHPerson *_person;	// 48 = 0x30
    PHFetchResult *_keyFaceFetchResult;	// 56 = 0x38
    PHFetchResult *_keyAssetFetchResult;	// 64 = 0x40
}

+ (id)personSuggestionWithPerson:(id)arg1 keyFaceFetchResult:(id)arg2 keyAssetFetchResult:(id)arg3;	// IMP=0x00000000003e2cee
+ (id)personSuggestionWithPerson:(id)arg1 keyFaceFetchResult:(id)arg2;	// IMP=0x00000000003e2bab
+ (id)personSuggestionWithPerson:(id)arg1;	// IMP=0x00000000003e2b21
- (void).cxx_destruct;	// IMP=0x00000000003e2967
@property(readonly, nonatomic) PHFetchResult *keyAssetFetchResult; // @synthesize keyAssetFetchResult=_keyAssetFetchResult;
@property(readonly, nonatomic) PHFetchResult *keyFaceFetchResult; // @synthesize keyFaceFetchResult=_keyFaceFetchResult;
@property(readonly, nonatomic) PHPerson *person; // @synthesize person=_person;
@property(readonly, nonatomic) NSString *localizedName; // @synthesize localizedName=_localizedName;
@property(readonly, copy) NSString *description;
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x00000000003e28ac
@property(readonly) unsigned long long hash;
- (_Bool)isEqual:(id)arg1;	// IMP=0x00000000003e27a2
- (void)_prefetchLinkedContactInBackgroundForPerson:(id)arg1;	// IMP=0x00000000003e26fc
- (void)_fetchQueue_fetchLinkedContactForPerson:(id)arg1;	// IMP=0x00000000003e2623
- (id)_linkedContactForPerson:(id)arg1;	// IMP=0x00000000003e2529
- (_Bool)matchesRecipientInRecipients:(id)arg1;	// IMP=0x00000000003e22eb
- (void)fetchContactAndBestTransport:(CDUnknownBlockType)arg1;	// IMP=0x00000000003e20b9
- (void)setPrefetchedContact:(id)arg1;	// IMP=0x00000000003e2012
- (id)personSuggestionUpdatedPerson:(id)arg1;	// IMP=0x00000000003e1fb1
- (id)personSuggestionUpdatedKeyAssetFetchResult:(id)arg1;	// IMP=0x00000000003e1f50
- (id)personSuggestionUpdatedKeyFaceFetchResult:(id)arg1;	// IMP=0x00000000003e1e17
- (id)initWithPerson:(id)arg1 keyFaceFetchResult:(id)arg2 keyAssetFetchResult:(id)arg3;	// IMP=0x00000000003e1c7f
- (id)init;	// IMP=0x00000000003e1c05

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) Class superclass;

@end
