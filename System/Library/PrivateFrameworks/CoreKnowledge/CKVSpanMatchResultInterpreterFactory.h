//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <CoreKnowledge/CKVSpanMatchResultInterpreterProvider-Protocol.h>

@class CKVPriorRetrieverFactory, CKVSettings, NSString;

@interface CKVSpanMatchResultInterpreterFactory : NSObject <CKVSpanMatchResultInterpreterProvider>
{
    CKVSettings *_settings;	// 8 = 0x8
    CKVPriorRetrieverFactory *_priorRetrieverFactory;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x00000000000c112e
- (id)getInterpreter;	// IMP=0x00000000000c10c1
- (id)init;	// IMP=0x00000000000c1079
- (id)initWithSettings:(id)arg1;	// IMP=0x00000000000c0f46

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

