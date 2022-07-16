//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <DoNotDisturbServer/DNDSModeAssertionStoreRecordDictionaryEncoding-Protocol.h>

@class NSString;

@interface DNDSModeAssertionSourceRecord : NSObject <DNDSModeAssertionStoreRecordDictionaryEncoding>
{
    NSString *_clientIdentifier;	// 8 = 0x8
    NSString *_deviceIdentifier;	// 16 = 0x10
}

+ (id)recordForAssertionSource:(id)arg1;	// IMP=0x00000000000703fe
+ (id)recordForDictionary:(id)arg1 keys:(const CDStruct_c4e2040f *)arg2;	// IMP=0x000000000004f1de
- (void).cxx_destruct;	// IMP=0x0000000000070586
@property(retain, nonatomic) NSString *deviceIdentifier; // @synthesize deviceIdentifier=_deviceIdentifier;
@property(retain, nonatomic) NSString *clientIdentifier; // @synthesize clientIdentifier=_clientIdentifier;
- (id)object;	// IMP=0x00000000000704be
- (id)dictionaryWithKeys:(const CDStruct_c4e2040f *)arg1 options:(unsigned long long)arg2;	// IMP=0x000000000004f2b8

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
