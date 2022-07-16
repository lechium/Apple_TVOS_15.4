//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <CoreKnowledge/CKVSpanMatchSearchIndex-Protocol.h>

@class CKVIndexManager, CKVSettings, NSString;

@interface CKVSkitSearcher : NSObject <CKVSpanMatchSearchIndex>
{
    CKVIndexManager *_indexManager;	// 8 = 0x8
    CKVSettings *_settings;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x000000000008c43a
- (id)locale;	// IMP=0x000000000008c3e6
- (id)searchIndexForTokenChain:(id)arg1;	// IMP=0x000000000008c09f
- (void)prewarm;	// IMP=0x000000000008c05e
- (id)init;	// IMP=0x000000000008c016
- (id)initWithIndexManager:(id)arg1 settings:(id)arg2;	// IMP=0x000000000008bea4

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
