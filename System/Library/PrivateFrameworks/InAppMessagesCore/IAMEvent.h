//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <InAppMessagesCore/IAMEventProtocol-Protocol.h>

@class NSDictionary, NSString;

@interface IAMEvent : NSObject <IAMEventProtocol>
{
    NSString *_name;	// 8 = 0x8
    long long _type;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x0000000000002d1e
@property(nonatomic) long long type; // @synthesize type=_type;
@property(copy, nonatomic) NSString *name; // @synthesize name=_name;
- (_Bool)matchesWithKey:(id)arg1;	// IMP=0x0000000000002c7a
- (id)initWithName:(id)arg1 type:(long long)arg2;	// IMP=0x0000000000002bd6

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly, copy, nonatomic) NSDictionary *payload;
@property(readonly, copy, nonatomic) NSString *source;
@property(readonly) Class superclass;
@property(readonly, copy, nonatomic) id value;

@end

