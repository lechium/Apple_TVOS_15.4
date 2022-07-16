//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <CoreSpotlight/CSSearchableIndexDelegate-Protocol.h>
#import <CoreSpotlight/NSExtensionRequestHandling-Protocol.h>

@class NSString;

@interface CSIndexExtensionRequestHandler : NSObject <NSExtensionRequestHandling, CSSearchableIndexDelegate>
{
}

- (void)searchableIndexDidFinishThrottle:(id)arg1;	// IMP=0x00000000000533f8
- (void)searchableIndexDidThrottle:(id)arg1;	// IMP=0x00000000000533a3
- (void)searchableIndex:(id)arg1 reindexSearchableItemsWithIdentifiers:(id)arg2 acknowledgementHandler:(CDUnknownBlockType)arg3;	// IMP=0x00000000000532c6
- (void)index:(id)arg1 reindexSearchableItemsWithIdentifiers:(id)arg2 acknowledgementHandler:(CDUnknownBlockType)arg3;	// IMP=0x00000000000532b4
- (void)searchableIndex:(id)arg1 reindexAllSearchableItemsWithAcknowledgementHandler:(CDUnknownBlockType)arg2;	// IMP=0x00000000000531d7
- (void)reindexAllSearchableItemsForIndex:(id)arg1 acknowledgementHandler:(CDUnknownBlockType)arg2;	// IMP=0x00000000000531c5
- (void)beginRequestWithExtensionContext:(id)arg1;	// IMP=0x000000000005312e
- (void)dealloc;	// IMP=0x00000000000530c2

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
