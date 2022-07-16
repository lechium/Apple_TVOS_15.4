//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <PhotosGraph/PGGraphIngestPet-Protocol.h>

@class NSMutableSet, NSString;

@interface PGPet : NSObject <PGGraphIngestPet>
{
    NSString *_localIdentifier;	// 8 = 0x8
    unsigned long long _species;	// 16 = 0x10
    NSMutableSet *_momentNodes;	// 24 = 0x18
    NSMutableSet *_ownerNodes;	// 32 = 0x20
}

- (void).cxx_destruct;	// IMP=0x000000000020b85d
@property(readonly, nonatomic) NSMutableSet *ownerNodes; // @synthesize ownerNodes=_ownerNodes;
@property(readonly, nonatomic) NSMutableSet *momentNodes; // @synthesize momentNodes=_momentNodes;
@property(readonly, nonatomic) unsigned long long species; // @synthesize species=_species;
@property(readonly, nonatomic) NSString *localIdentifier; // @synthesize localIdentifier=_localIdentifier;
- (id)initWithLocalIdentifier:(id)arg1 petSpecies:(unsigned long long)arg2 momentNodes:(id)arg3 ownerNodes:(id)arg4;	// IMP=0x000000000020b748

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

