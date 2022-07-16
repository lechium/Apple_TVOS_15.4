//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <DTXConnectionServices/DTXService.h>

#import <DVTInstrumentsFoundation/DTFileBrowserServiceAuthorizedAPI-Protocol.h>

@class NSString;

@interface DTFileBrowserService : DTXService <DTFileBrowserServiceAuthorizedAPI>
{
}

+ (void)registerCapabilities:(id)arg1;	// IMP=0x0000000000037c57
- (id)fileExistsAtPath:(id)arg1;	// IMP=0x00000000000388d2
- (id)updateAttributesForItem:(id)arg1;	// IMP=0x000000000003877f
- (id)contentsOfDirectoryAtPath:(id)arg1;	// IMP=0x00000000000385d4
- (id)dataFromFileAtPath:(id)arg1;	// IMP=0x000000000003850e
- (id)entriesInPathsArray:(id)arg1;	// IMP=0x0000000000038115
- (id)entriesAtPath:(id)arg1;	// IMP=0x0000000000037cb1

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

