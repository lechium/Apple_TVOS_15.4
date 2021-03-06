//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Foundation/NSOperation.h>

@class PSSearchEntry;
@protocol PSSearchIndexOperationDelegate;

@interface PSSearchIndexOperation : NSOperation
{
    PSSearchEntry *_searchEntry;	// 8 = 0x8
    id <PSSearchIndexOperationDelegate> _delegate;	// 16 = 0x10
}

+ (void)setTopLevelManifestBundlePath:(id)arg1;	// IMP=0x00000000000ab369
+ (id)topLevelManifestBundlePath;	// IMP=0x00000000000ab358
+ (void)setPossibleBundleRoots:(id)arg1;	// IMP=0x00000000000ab344
+ (id)possibleBundleRoots;	// IMP=0x00000000000ab333
+ (id)_loadSearchEntriesFromPlistForEntry:(id)arg1 bundle:(id)arg2;	// IMP=0x00000000000aabe6
+ (id)_loadThirdPartySearchEntriesForEntry:(id)arg1 bundle:(id)arg2;	// IMP=0x00000000000aa81a
+ (id)_bundleForSearchEntry:(id)arg1 thirdPartyApp:(_Bool *)arg2;	// IMP=0x00000000000aa320
- (void).cxx_destruct;	// IMP=0x00000000000ab3d0
@property __weak id <PSSearchIndexOperationDelegate> delegate; // @synthesize delegate=_delegate;
@property(readonly, nonatomic) PSSearchEntry *searchEntry; // @synthesize searchEntry=_searchEntry;
- (void)main;	// IMP=0x00000000000a91a4
- (void)_cancel;	// IMP=0x00000000000a918b
- (void)_finishedIndexingWithEntries:(id)arg1 cancelled:(_Bool)arg2;	// IMP=0x00000000000a909f
- (void)dealloc;	// IMP=0x00000000000a905f
- (id)initWithSearchEntry:(id)arg1 delegate:(id)arg2;	// IMP=0x00000000000a8f84

@end

