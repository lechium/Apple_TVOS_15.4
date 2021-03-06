//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class ML3StatementCacheList, NSMutableDictionary;

@interface ML3DatabaseStatementCache : NSObject
{
    NSMutableDictionary *_statementsDictionary;	// 8 = 0x8
    ML3StatementCacheList *_nodeList;	// 16 = 0x10
    unsigned long long _cacheSize;	// 24 = 0x18
}

- (void).cxx_destruct;	// IMP=0x00000000000cde18
@property(readonly, nonatomic) unsigned long long cacheSize; // @synthesize cacheSize=_cacheSize;
- (void)clearCache;	// IMP=0x00000000000cdcb8
- (void)cacheStatement:(id)arg1;	// IMP=0x00000000000cda9b
- (id)allStatements;	// IMP=0x00000000000cda85
- (id)cachedStatementForSQL:(id)arg1;	// IMP=0x00000000000cda19
- (void)dealloc;	// IMP=0x00000000000cd9db
- (id)initWithCacheSize:(unsigned long long)arg1;	// IMP=0x00000000000cd94b

@end

