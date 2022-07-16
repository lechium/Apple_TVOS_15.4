//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSDictionary, NSSet, PHPhotoLibrary, PHUserFeedbackCalculator;

@interface CLSCurationContext : NSObject
{
    NSSet *_verifiedPersonUUIDs;	// 8 = 0x8
    NSSet *_hiddenOrBlockedPersonUUIDs;	// 16 = 0x10
    NSSet *_nonPetFacedPersonLocalIdentifiers;	// 24 = 0x18
    NSDictionary *_personUUIDByMergeCandidateUUID;	// 32 = 0x20
    PHPhotoLibrary *_photoLibrary;	// 40 = 0x28
    PHUserFeedbackCalculator *_userFeedbackCalculator;	// 48 = 0x30
}

- (void).cxx_destruct;	// IMP=0x000000000005fe62
@property(readonly, nonatomic) PHUserFeedbackCalculator *userFeedbackCalculator; // @synthesize userFeedbackCalculator=_userFeedbackCalculator;
@property(readonly, nonatomic) PHPhotoLibrary *photoLibrary; // @synthesize photoLibrary=_photoLibrary;
- (id)_mergeCandidateUUIDsForPerson:(id)arg1;	// IMP=0x000000000005fbeb
- (_Bool)_shouldFetchMergeCandidatesForPerson:(id)arg1;	// IMP=0x000000000005fb83
- (void)_loadNonPetFacedPersonLocalIdentifiers;	// IMP=0x000000000005f6c1
- (void)_loadPersonAndMergeCandidateUUIDs;	// IMP=0x000000000005eefb
- (id)personUUIDByMergeCandidateUUID;	// IMP=0x000000000005ee9b
- (id)nonPetFacedPersonLocalIdentifiers;	// IMP=0x000000000005ee3b
- (id)hiddenOrBlockedPersonUUIDs;	// IMP=0x000000000005eddb
- (id)verifiedPersonUUIDs;	// IMP=0x000000000005ed7b
- (id)description;	// IMP=0x000000000005ecb1
- (id)initWithUserFeedbackCalculator:(id)arg1;	// IMP=0x000000000005ec20
- (id)initWithPhotoLibrary:(id)arg1;	// IMP=0x000000000005eba2

@end

