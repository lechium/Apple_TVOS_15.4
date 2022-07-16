//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <SearchFoundation/SFCard.h>

#import <Cards/CRCard-Protocol.h>

@class NSArray, NSSet, NSString;

@interface SFCard (CRCard) <CRCard>
+ (id)_interactionsByIntentDataHashes;	// IMP=0x000000000000a5cf
- (id)_interactionDataKey;	// IMP=0x000000000000acf5
- (id)underlyingInteraction;	// IMP=0x000000000000aca5
@property(readonly, nonatomic) unsigned long long cardFormat;
@property(readonly, copy, nonatomic) NSString *cardIdentifier;
- (id)interaction;	// IMP=0x000000000000a7d9
@property(readonly, nonatomic) NSSet *interactions;
@property(readonly, nonatomic) SFCard *backingCard;
- (void)loadCardWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x000000000000a65e
@property(readonly, nonatomic) _Bool asynchronous;

// Remaining properties
@property(readonly, nonatomic) NSArray *cardSections;
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly, nonatomic) NSArray *dismissalCommands;
@property(readonly, nonatomic) _Bool flexibleSectionOrder;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;
@end
