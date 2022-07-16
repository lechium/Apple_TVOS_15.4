//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <PassKitCore/NSSecureCoding-Protocol.h>

@class PKAppleAccountState;

@interface PKAppleAccountChange : NSObject <NSSecureCoding>
{
    long long _type;	// 8 = 0x8
    long long _event;	// 16 = 0x10
    PKAppleAccountState *_currentState;	// 24 = 0x18
    PKAppleAccountState *_previousState;	// 32 = 0x20
}

+ (long long)changeTypeToAccount:(id)arg1 fromAccount:(id)arg2;	// IMP=0x000000000020760d
+ (_Bool)supportsSecureCoding;	// IMP=0x0000000000206f60
- (void).cxx_destruct;	// IMP=0x00000000002076d0
@property(readonly, nonatomic) PKAppleAccountState *previousState; // @synthesize previousState=_previousState;
@property(readonly, nonatomic) PKAppleAccountState *currentState; // @synthesize currentState=_currentState;
@property(readonly, nonatomic) long long event; // @synthesize event=_event;
@property(readonly, nonatomic) long long type; // @synthesize type=_type;
- (id)description;	// IMP=0x0000000000207543
- (_Bool)shouldBeNotedByPassLibrary;	// IMP=0x00000000002074a9
- (_Bool)didAccountOrderChange;	// IMP=0x000000000020746a
- (_Bool)didAccountManagedStateChange;	// IMP=0x000000000020742b
- (_Bool)didRelevantDataclassesChange;	// IMP=0x00000000002073c5
- (id)initWithCoder:(id)arg1;	// IMP=0x0000000000207257
- (void)encodeWithCoder:(id)arg1;	// IMP=0x000000000020716a
- (id)initWithEvent:(long long)arg1 currentAccount:(id)arg2 previousAccount:(id)arg3;	// IMP=0x0000000000206f68

@end

