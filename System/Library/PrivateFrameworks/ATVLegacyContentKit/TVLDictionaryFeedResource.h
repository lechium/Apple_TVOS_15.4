//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <ATVLegacyContentKit/TVLReadWriteFeedResource-Protocol.h>

@class NSLock, NSMutableDictionary, NSString;

@interface TVLDictionaryFeedResource : NSObject <TVLReadWriteFeedResource>
{
    NSMutableDictionary *_prefs;	// 8 = 0x8
    NSLock *_prefsLock;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x00000000000af91a
- (void)clearFeedResources;	// IMP=0x00000000000af8d9
- (void)setFeedResource:(id)arg1 named:(id)arg2;	// IMP=0x00000000000af83d
- (id)feedResourceNamed:(id)arg1;	// IMP=0x00000000000af7b2
- (id)init;	// IMP=0x00000000000af73d

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

