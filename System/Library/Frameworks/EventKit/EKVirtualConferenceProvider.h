//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <EventKit/NSExtensionRequestHandling-Protocol.h>

@class NSString;

@interface EKVirtualConferenceProvider : NSObject <NSExtensionRequestHandling>
{
}

- (void)invalidateURL:(id)arg1 withCompletionHandler:(CDUnknownBlockType)arg2;	// IMP=0x00000000000170ee
- (void)extendExpirationOfURL:(id)arg1 toExpirationDate:(id)arg2 withCompletion:(CDUnknownBlockType)arg3;	// IMP=0x00000000000170de
- (void)isURLValid:(id)arg1 withCompletion:(CDUnknownBlockType)arg2;	// IMP=0x00000000000170ce
- (void)fetchVirtualConferenceForIdentifier:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;	// IMP=0x0000000000104b23
- (void)fetchAvailableRoomTypesWithCompletionHandler:(CDUnknownBlockType)arg1;	// IMP=0x0000000000104ad4
- (void)beginRequestWithExtensionContext:(id)arg1;	// IMP=0x0000000000016dc8
- (id)init;	// IMP=0x0000000000016cf4

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

