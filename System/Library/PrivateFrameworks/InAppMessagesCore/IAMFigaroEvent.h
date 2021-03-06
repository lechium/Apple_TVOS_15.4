//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <InAppMessagesCore/IAMEventProtocol-Protocol.h>

@class NSDictionary, NSString;

@interface IAMFigaroEvent : NSObject <IAMEventProtocol>
{
    long long _type;	// 8 = 0x8
    NSDictionary *_payload;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x0000000000003ae2
@property(copy, nonatomic) NSDictionary *payload; // @synthesize payload=_payload;
@property(nonatomic) long long type; // @synthesize type=_type;
- (id)serializeFigaroEventProperties:(id)arg1 withPrefix:(id)arg2;	// IMP=0x00000000000036b3
- (id)decomposeKey:(id)arg1;	// IMP=0x00000000000031f5
- (_Bool)matchesWithKey:(id)arg1;	// IMP=0x0000000000002fac
- (id)initWithFigaroEventProperties:(id)arg1;	// IMP=0x0000000000002f2d
@property(readonly, copy, nonatomic) NSString *name;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly, copy, nonatomic) NSString *source;
@property(readonly) Class superclass;
@property(readonly, copy, nonatomic) id value;

@end

