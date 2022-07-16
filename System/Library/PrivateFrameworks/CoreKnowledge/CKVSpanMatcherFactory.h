//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <CoreKnowledge/CKVSpanMatcherProvider-Protocol.h>

@class NSString;
@protocol CKVSpanMatchResultInterpreterProvider, CKVSpanMatchSearchIndexProvider;

@interface CKVSpanMatcherFactory : NSObject <CKVSpanMatcherProvider>
{
    NSObject<CKVSpanMatchSearchIndexProvider> *_searchIndexProvider;	// 8 = 0x8
    NSObject<CKVSpanMatchResultInterpreterProvider> *_interpreterProvider;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x00000000000bd90b
- (id)makeSpanMatcher;	// IMP=0x00000000000bd87c
- (id)init;	// IMP=0x00000000000bd834
- (id)initWithIndexManager:(id)arg1 settings:(id)arg2;	// IMP=0x00000000000bd688

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
