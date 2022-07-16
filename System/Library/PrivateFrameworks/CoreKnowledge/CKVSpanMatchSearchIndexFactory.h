//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <CoreKnowledge/CKVSpanMatchSearchIndexProvider-Protocol.h>

@class CKVIndexManager, CKVSettings, NSString;

@interface CKVSpanMatchSearchIndexFactory : NSObject <CKVSpanMatchSearchIndexProvider>
{
    CKVIndexManager *_indexManager;	// 8 = 0x8
    CKVSettings *_settings;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x00000000000a2cdc
- (id)makeSearchIndex;	// IMP=0x00000000000a2ca1
- (id)init;	// IMP=0x00000000000a2c59
- (id)initWithIndexManager:(id)arg1 settings:(id)arg2;	// IMP=0x00000000000a2ae7

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
