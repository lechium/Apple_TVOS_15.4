//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <PhotosGraph/PGGraphIngestProcessor-Protocol.h>

@class NSDictionary, NSSet, NSString, PGGraphBuilder, PGMessageProfile;

@interface PGGraphIngestMessageProcessor : NSObject <PGGraphIngestProcessor>
{
    PGGraphBuilder *_graphBuilder;	// 8 = 0x8
    NSSet *_personNodes;	// 16 = 0x10
    NSSet *_contactIdentifiers;	// 24 = 0x18
    NSDictionary *_personLocalIdentifierByCNIdentifier;	// 32 = 0x20
    PGMessageProfile *_messageProfile;	// 40 = 0x28
    NSSet *_loveEmojis;	// 48 = 0x30
}

- (void).cxx_destruct;	// IMP=0x00000000002f2517
@property(retain, nonatomic) PGMessageProfile *messageProfile; // @synthesize messageProfile=_messageProfile;
@property(retain, nonatomic) NSDictionary *personLocalIdentifierByCNIdentifier; // @synthesize personLocalIdentifierByCNIdentifier=_personLocalIdentifierByCNIdentifier;
@property(readonly, nonatomic) NSSet *contactIdentifiers; // @synthesize contactIdentifiers=_contactIdentifiers;
@property(readonly, nonatomic) NSSet *personNodes; // @synthesize personNodes=_personNodes;
@property(readonly, nonatomic) NSSet *loveEmojis; // @synthesize loveEmojis=_loveEmojis;
- (unsigned long long)numberOfEmojis:(id)arg1 inText:(id)arg2;	// IMP=0x00000000002f2238
- (id)addressComponentFromText:(id)arg1 usingDataDetector:(id)arg2;	// IMP=0x00000000002f204b
- (_Bool)_isInterestingGroupChatWithPersons:(id)arg1;	// IMP=0x00000000002f1e98
- (void)runWithGraphUpdate:(id)arg1 progressBlock:(CDUnknownBlockType)arg2;	// IMP=0x00000000002f1d22
- (_Bool)shouldRunWithGraphUpdate:(id)arg1;	// IMP=0x00000000002f1c9d
- (void)setGraphBuilder:(id)arg1;	// IMP=0x00000000002f1c8c

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

