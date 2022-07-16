//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSDictionary, NSString;

@interface HKStateMachineState : NSObject
{
    long long _index;	// 8 = 0x8
    NSString *_label;	// 16 = 0x10
    NSDictionary *_incomingTransitions;	// 24 = 0x18
    NSDictionary *_outgoingTransitions;	// 32 = 0x20
}

- (void).cxx_destruct;	// IMP=0x00000000000dee1a
@property(copy, nonatomic) NSDictionary *outgoingTransitions; // @synthesize outgoingTransitions=_outgoingTransitions;
@property(copy, nonatomic) NSDictionary *incomingTransitions; // @synthesize incomingTransitions=_incomingTransitions;
@property(readonly, copy, nonatomic) NSString *label; // @synthesize label=_label;
@property(readonly, nonatomic) long long index; // @synthesize index=_index;
- (_Bool)isEqual:(id)arg1;	// IMP=0x00000000000ded6b
- (id)description;	// IMP=0x00000000000ded3e
- (id)initWithIndex:(long long)arg1 label:(id)arg2;	// IMP=0x00000000000decc0
- (id)init;	// IMP=0x00000000000dec46

@end

