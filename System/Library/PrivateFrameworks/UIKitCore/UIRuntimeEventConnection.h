//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

__attribute__((visibility("hidden")))
@interface UIRuntimeEventConnection
{
    unsigned long long eventMask;	// 8 = 0x8
}

@property unsigned long long eventMask; // @synthesize eventMask;
- (id)description;	// IMP=0x00000000007995d4
- (void)connectForSimulator;	// IMP=0x0000000000799567
- (void)connect;	// IMP=0x000000000079951b
@property(readonly) SEL action;
@property(readonly) id target;
- (void)encodeWithCoder:(id)arg1;	// IMP=0x0000000000799405
- (id)initWithCoder:(id)arg1;	// IMP=0x000000000079938b

@end

