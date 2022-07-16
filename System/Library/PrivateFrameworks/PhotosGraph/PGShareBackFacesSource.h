//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSSet, NSString, PHPhotoLibrary;
@protocol CLSFaceIdentificationProtocol;

@interface PGShareBackFacesSource
{
    PHPhotoLibrary *_photoLibrary;	// 8 = 0x8
    NSString *_meLocalIdentifier;	// 16 = 0x10
    NSSet *_personLocalIdentifiersToCheck;	// 24 = 0x18
    id <CLSFaceIdentificationProtocol> _faceIdentification;	// 32 = 0x20
}

- (void).cxx_destruct;	// IMP=0x00000000002588b5
- (id)suggesterResultsForInputs:(id)arg1 momentNodes:(id)arg2 inGraph:(id)arg3 error:(id *)arg4;	// IMP=0x00000000002578cd
- (_Bool)prepareSourceWithGraph:(id)arg1;	// IMP=0x0000000000257514
- (id)initWithLoggingConnection:(id)arg1 photoLibrary:(id)arg2 faceIdentification:(id)arg3;	// IMP=0x000000000025746a
- (id)initWithLoggingConnection:(id)arg1 photoLibrary:(id)arg2;	// IMP=0x00000000002573e6

@end

