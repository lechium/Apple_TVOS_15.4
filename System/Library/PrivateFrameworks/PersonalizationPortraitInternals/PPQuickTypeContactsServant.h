//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <PersonalizationPortraitInternals/PPQuickTypeServantProtocol-Protocol.h>

@class NSCache, PPLocalContactStore;

@interface PPQuickTypeContactsServant : NSObject <PPQuickTypeServantProtocol>
{
    PPLocalContactStore *_localContactStore;	// 8 = 0x8
    NSCache *_meQuickTypeItemCache;	// 16 = 0x10
    NSCache *_cachedNameLookups;	// 24 = 0x18
}

- (void).cxx_destruct;	// IMP=0x0000000000142cc0
- (id)quickTypeItemsWithQuery:(id)arg1 limit:(unsigned long long)arg2 explanationSet:(id)arg3;	// IMP=0x0000000000141392
- (id)initWithOptions:(unsigned char)arg1;	// IMP=0x000000000014090e
- (id)init;	// IMP=0x00000000001408fa
- (void)clearCaches;	// IMP=0x00000000001431c6

@end

